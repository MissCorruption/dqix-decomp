#include <globaldefs.h>
#include "System/OverlayResponse.h"

struct Packet0221db48 {
    unsigned char type;
    unsigned char flags;
    unsigned short length;
};
struct WirelessSettings0221db48 {
    unsigned int unknown00;
    unsigned int keyLength;
    unsigned char name[40];
    unsigned char keys[4][64];
};
struct WirelessPayload0221db48 {
    int unknown00;
    int dataLength;
    char name[40];
    unsigned char data[64];
};
struct PacketDest0221db48 {
    unsigned char unknown00[8];
    WirelessSettings0221db48 first;
    WirelessSettings0221db48 second;
    WirelessPayload0221db48 third;
    WirelessPayload0221db48 fourth;
    unsigned char unknown348[8];
};
struct ExtraBlock0221db48 { unsigned char data[128]; };

struct PacketStatus0221db48 {
    char padding_0[0x30];
    unsigned int decoded;
};
extern unsigned char data_ov031_0224b06c[];
extern PacketStatus0221db48 data_ov031_0224e6e0;
extern "C" int func_ov031_0221d90c(Packet0221db48*, WirelessSettings0221db48*);
extern "C" int func_ov031_0221da60(Packet0221db48*, WirelessPayload0221db48*);
extern "C" int func_ov031_0221db18(Packet0221db48*, void*);

// USA: func_ov031_0221db48
extern "C" THUMB int func_ov031_0221db48(int index, Packet0221db48* packet, int size, PacketDest0221db48* destinations, void* extra) {
    unsigned int decoded = 0;
    Packet0221db48* record;
    if (size <= 0) return -2;
    do {
        record = packet;
        if (record->type == data_ov031_0224b06c[index]) goto found;
        int skip = func_ov031_0221e638(packet->length) + 4;
        size -= skip;
        packet = (Packet0221db48*)((char*)packet + skip);
    } while (size > 0);
    return -4;
found:
    packet = record + 1;
    int remaining = func_ov031_0221e638(record->length);
    PacketDest0221db48* destination = &destinations[index];
    unsigned char* blocks = (unsigned char*)extra;
    unsigned int validationOffset = (index + 3) * sizeof(ExtraBlock0221db48);
    do {
        int result;
        switch (packet->type) {
        case 3:
            result = func_ov031_0221d90c(packet, &destination->first);
            decoded |= 1;
            break;
        case 4:
            result = func_ov031_0221d90c(packet, &destination->second);
            decoded |= 2;
            break;
        case 5:
            result = func_ov031_0221da60(packet, &destination->third);
            decoded |= 4;
            break;
        case 6:
            result = func_ov031_0221da60(packet, &destination->fourth);
            decoded |= 8;
            break;
        case 10:
            result = func_ov031_0221db18(packet, blocks + validationOffset);
            break;
        default:
            result = -3;
            break;
        }
        if (result) return result;
        int skip = func_ov031_0221e638(packet->length) + 4;
        remaining -= skip;
        packet = (Packet0221db48*)((char*)packet + skip);
    } while (remaining > 0);
    data_ov031_0224e6e0.decoded |= decoded;
    return 0;
}
