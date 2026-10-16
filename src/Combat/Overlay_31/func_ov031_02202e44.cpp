#include <globaldefs.h>
struct IPv4Packet02202e44 {
    unsigned char header;
    unsigned char service;
    unsigned short length;
    unsigned short identification;
    unsigned short fragment;
    unsigned char ttl;
    unsigned char protocol;
    unsigned short checksum;
    unsigned short sourceHigh;
    unsigned short sourceLow;
    unsigned short destinationHigh;
    unsigned short destinationLow;
};
struct NetworkState02202e44 { char unknown0[0x40]; void (*release)(void*); char unknown44[0xc]; unsigned int address; };
extern "C" NetworkState02202e44 _ZZ18GetGlobal_02201364vE1s;
extern "C" int func_ov031_022007a4(unsigned int);
unsigned int ComputeNormalizedChecksum_02200684(void*, unsigned int);
extern "C" void func_ov031_02200e38(void*, unsigned int, int);
extern "C" IPv4Packet02202e44* func_ov031_02202b78(IPv4Packet02202e44*, int*);
extern "C" void func_ov031_0220296c(IPv4Packet02202e44*, void*, unsigned int);
extern "C" void func_ov031_02201bb4(IPv4Packet02202e44*, void*, unsigned int);
extern "C" void func_ov031_0220284c(IPv4Packet02202e44*, void*, unsigned int);
static inline unsigned short Swap16_02202e44(unsigned short value) { return (value >> 8) | (value << 8); }
#define SourceAddress02202e44(packet) (((unsigned short)((packet->sourceHigh >> 8) | (packet->sourceHigh << 8)) << 16) | (unsigned short)((packet->sourceLow >> 8) | (packet->sourceLow << 8)))
#define DestinationAddress02202e44(packet) (((unsigned short)((packet->destinationHigh >> 8) | (packet->destinationHigh << 8)) << 16) | (unsigned short)((packet->destinationLow >> 8) | (packet->destinationLow << 8)))

// USA: func_ov031_02202e44
extern "C" ARM void func_ov031_02202e44(IPv4Packet02202e44* packet, unsigned int available) {
    unsigned short sourceLow = packet->sourceLow;
    unsigned short sourceHigh = packet->sourceHigh;
    unsigned short destinationLow = packet->destinationLow;
    unsigned short destinationHigh = packet->destinationHigh;
    unsigned int destination = ((unsigned short)((destinationHigh >> 8) | (destinationHigh << 8)) << 16) | (unsigned short)((destinationLow >> 8) | (destinationLow << 8));
    unsigned int source = ((unsigned short)((sourceHigh >> 8) | (sourceHigh << 8)) << 16) | (unsigned short)((sourceLow >> 8) | (sourceLow << 8));
    if (destination != source) {
        if (!func_ov031_022007a4(destination)) return;
        if (available < Swap16_02202e44(packet->length)) return;
        if (ComputeNormalizedChecksum_02200684(packet, (packet->header & 15) << 2) != 0xffff) return;
        if (_ZZ18GetGlobal_02201364vE1s.address == DestinationAddress02202e44(packet))
            func_ov031_02200e38((char*)packet - 8, SourceAddress02202e44(packet), 1);
    }
    int release;
    packet = func_ov031_02202b78(packet, &release);
    if (!packet) return;
    void* payload = (char*)packet + ((packet->header & 15) << 2);
    unsigned int payloadLength = Swap16_02202e44(packet->length) - ((packet->header & 15) << 2);
    if (packet->protocol == 17) func_ov031_0220296c(packet, payload, payloadLength);
    else if (_ZZ18GetGlobal_02201364vE1s.address) {
        if (packet->protocol == 1) func_ov031_02201bb4(packet, payload, payloadLength);
        else if (packet->protocol == 6) func_ov031_0220284c(packet, payload, payloadLength);
    }
    if (release) _ZZ18GetGlobal_02201364vE1s.release((char*)packet - 14);
}
