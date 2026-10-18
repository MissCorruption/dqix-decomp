#include <globaldefs.h>
#include "System/ProcessorContext.h"

struct GlobalStruct0224c980_02201550 {
    unsigned short field0;
    unsigned short maxSegment;
    unsigned char pad4[0x4c];
    unsigned int field50;
};
extern GlobalStruct0224c980_02201550 data_ov031_0224c980;

extern ProcessorContext data_ov031_0224cbe8;
extern unsigned char data_ov031_0224ce92[];

struct Socket02201550 {
    unsigned char pad0[0x8];
    unsigned char state;
    unsigned char pad9;
    unsigned short localPort;
    unsigned char padc[0xc];
    unsigned short remotePort;
    unsigned char pad1a[2];
    unsigned int remoteAddress;
    unsigned char pad20[4];
    unsigned int ackNumber;
    unsigned int seqNumber;
    unsigned char pad2c[0x10];
    unsigned int windowLimit;
    unsigned char pad40[4];
    unsigned int windowUsed;
    unsigned char pad48[4];
    unsigned char* buffer;
};

extern "C" unsigned int func_ov031_022005b4(void* p, unsigned int len, unsigned int seed);
unsigned int NormalizeChecksum_02200668(unsigned int value);
extern "C" int func_ov031_0220116c(void*, int, void*, unsigned int, unsigned int, int);

#define SwapBytes16_02201550(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201550
extern "C" ARM void func_ov031_02201550(unsigned char* data, unsigned int length, Socket02201550* socket, int flags, int opt) {
    unsigned char* tcp;
    unsigned int headerLength;
    if (socket->state == 0) return;
    if (data_02111304.activeContext == &data_ov031_0224cbe8) {
        tcp = data_ov031_0224ce92;
    } else {
        tcp = socket->buffer + 0x22;
    }
    if (flags & 2) {
        headerLength = 0x18;
    } else {
        headerLength = 0x14;
    }
    unsigned short total = (unsigned short)(headerLength + length);
    int high = (unsigned short)(data_ov031_0224c980.field50 >> 16);
    *(unsigned short*)(tcp - 0xc) = SwapBytes16_02201550(high);
    int low = (unsigned short)data_ov031_0224c980.field50;
    *(unsigned short*)(tcp - 0xa) = SwapBytes16_02201550(low);
    high = (unsigned short)(socket->remoteAddress >> 16);
    *(unsigned short*)(tcp - 0x8) = SwapBytes16_02201550(high);
    low = (unsigned short)socket->remoteAddress;
    *(unsigned short*)(tcp - 0x6) = SwapBytes16_02201550(low);
    *(unsigned short*)(tcp - 0x4) = 0x600;
    *(unsigned short*)(tcp - 0x2) = SwapBytes16_02201550(total);
    *(unsigned short*)(tcp + 0x0) = SwapBytes16_02201550(socket->localPort);
    *(unsigned short*)(tcp + 0x2) = SwapBytes16_02201550(socket->remotePort);
    high = (unsigned short)(socket->seqNumber >> 16);
    *(unsigned short*)(tcp + 0x4) = SwapBytes16_02201550(high);
    low = (unsigned short)socket->seqNumber;
    *(unsigned short*)(tcp + 0x6) = SwapBytes16_02201550(low);
    high = (unsigned short)(socket->ackNumber >> 16);
    *(unsigned short*)(tcp + 0x8) = SwapBytes16_02201550(high);
    low = (unsigned short)socket->ackNumber;
    *(unsigned short*)(tcp + 0xa) = SwapBytes16_02201550(low);
    tcp[0xc] = (headerLength >> 2) << 4;
    tcp[0xd] = flags;
    unsigned short window = (unsigned short)(socket->windowLimit - socket->windowUsed);
    *(unsigned short*)(tcp + 0xe) = SwapBytes16_02201550(window);
    *(unsigned short*)(tcp + 0x10) = 0;
    *(unsigned short*)(tcp + 0x12) = 0;
    if (flags & 2) {
        high = (unsigned short)((0x02040000u + data_ov031_0224c980.maxSegment) >> 16);
        *(unsigned short*)(tcp + 0x14) = SwapBytes16_02201550(high);
        low = (unsigned short)(0x02040000u + data_ov031_0224c980.maxSegment);
        *(unsigned short*)(tcp + 0x16) = SwapBytes16_02201550(low);
    }
    unsigned int sum = func_ov031_022005b4(tcp - 0xc, headerLength + 0xc, 0);
    sum = func_ov031_022005b4(data, length, sum);
    int checksum = NormalizeChecksum_02200668((unsigned short)sum);
    *(unsigned short*)(tcp + 0x10) = SwapBytes16_02201550(checksum);
    func_ov031_0220116c(tcp, headerLength, data, length, socket->remoteAddress, 6);
    socket->seqNumber += length;
    if (flags & 3) {
        socket->seqNumber++;
    }
}
