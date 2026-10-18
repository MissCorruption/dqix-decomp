#include <globaldefs.h>
#include "System/ProcessorContext.h"

struct IcmpEchoFrame02201364 {
    unsigned char networkHeader[0x22];
    unsigned short typeAndCode;
    unsigned short checksum;
    unsigned short identifier;
    unsigned short sequence;
};

struct IcmpSocket02201364 {
    unsigned char unknown0[0xa];
    unsigned short sequence;
    unsigned char unknownc[0x10];
    unsigned int remoteAddress;
    unsigned char unknown20[0x2c];
    IcmpEchoFrame02201364* buffer;
};

struct IcmpState02201364 {
    unsigned char unknown0[4];
    mutable unsigned short sequence;
    unsigned char unknown6[0x4a];
    unsigned int clientAddress;
    unsigned char unknown54[0x14];
    unsigned long long randomState;
    unsigned long long randomMultiplier;
    unsigned long long randomIncrement;
};

extern const IcmpState02201364 data_ov031_0224c980;
extern "C" unsigned int func_ov031_022005b4(void*, unsigned int, unsigned int);
unsigned int NormalizeChecksum_02200668(unsigned int);
extern "C" void func_ov031_0220116c(unsigned char*, unsigned int, const unsigned char*, unsigned int, unsigned int, unsigned char);

// USA: func_ov031_02201364
extern "C" ARM void func_ov031_02201364(void* data, unsigned int length, IcmpSocket02201364* socket) {
    IcmpEchoFrame02201364* packet = socket->buffer;
    packet->typeAndCode = 8;
    packet->identifier = (unsigned int)data_02111304.activeContext;
    packet->checksum = 0;
    unsigned short sequence = data_ov031_0224c980.sequence;
    socket->sequence = sequence;
    data_ov031_0224c980.sequence = sequence + 1;
    packet->sequence = sequence;
    unsigned int sum = func_ov031_022005b4(&packet->typeAndCode, 8, 0);
    sum = func_ov031_022005b4(data, length, sum);
    int checksum = NormalizeChecksum_02200668((unsigned short)sum);
    packet->checksum = (checksum >> 8) | (checksum << 8);
    func_ov031_0220116c((unsigned char*)&packet->typeAndCode, 8, (const unsigned char*)data, length, socket->remoteAddress, 1);
}
