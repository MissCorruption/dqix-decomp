#include <globaldefs.h>
#include "System/OverlayResponse.h"

struct EncodedPayload {
    unsigned short length;
    unsigned short checksum;
    unsigned char data[1];
};

struct EncodedPacket {
    ResponseHeader header;
    EncodedPayload payload;
};

extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" int func_ov031_0221e650(const char*);
extern "C" int func_ov031_0221e354(const void*, int, const void*, int);
extern "C" void func_ov031_0221d060(int);
extern "C" int func_ov031_0221d79c(int, const char*);
extern "C" void* func_ov031_0221c49c(int);
extern "C" int func_ov031_0221e164(const void*, void*, int, int, const void*, const void*, int);
extern "C" void func_ov031_0221c4ac(int);
extern "C" int func_ov031_0221d06c();
extern "C" unsigned short func_ov031_0221e5f8(unsigned short);
extern char data_ov031_0224b0dc[8];
extern char data_ov031_0224f440[8];

// USA: func_ov031_0221d6a8
extern "C" THUMB int func_ov031_0221d6a8(EncodedPacket* packet) {
    EncodedPayload* payload = &packet->payload;
    char name[8];
    func_ov031_0221e51c(name, &packet->header.identifier, 8);
    if (func_ov031_0221e354(name, 8, data_ov031_0224b0dc,
                           func_ov031_0221e650(data_ov031_0224b0dc)) == -1) {
        func_ov031_0221d060(2);
        return -100;
    }
    int result = func_ov031_0221d79c(func_ov031_0221e638(packet->header.type), name);
    if (result != 0) return result;
    if (func_ov031_0221e638(packet->header.type) == 0x1000)
        func_ov031_0221e51c(data_ov031_0224f440, name, 8);
    if ((func_ov031_0221e638(packet->header.flags) & 15) == 0)
        return 0;
    int length = func_ov031_0221e638(payload->length);
    unsigned char* buffer = static_cast<unsigned char*>(func_ov031_0221c49c(length));
    if (buffer == 0) {
        func_ov031_0221d060(2);
        return 100;
    }
    if (func_ov031_0221e164(payload->data, buffer, length, packet->header.unknown0e,
                          &payload->checksum, data_ov031_0224f440, 8) < 0) {
        func_ov031_0221c4ac((int)buffer);
        if (func_ov031_0221d06c() == 2)
            return 100;
        return 200;
    }
    func_ov031_0221e51c(payload, buffer, length);
    packet->header.protocol = func_ov031_0221e5f8((unsigned short)length);
    func_ov031_0221c4ac((int)buffer);
    return 0;
}
