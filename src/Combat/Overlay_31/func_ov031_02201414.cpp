#include <globaldefs.h>

struct GlobalStruct0224c980_02201414 {
    unsigned char pad[0x50];
    unsigned int field50;
};
extern GlobalStruct0224c980_02201414 data_ov031_0224c980;

struct Socket02201414 {
    unsigned char pad0[0xa];
    unsigned short localPort;
    unsigned char padc[0xc];
    unsigned short remotePort;
    unsigned char pad1a[2];
    unsigned int remoteAddress;
    unsigned char pad20[0x2c];
    unsigned char* buffer;
};

extern "C" unsigned int func_ov031_022005b4(void* p, unsigned int len, unsigned int seed);
unsigned int NormalizeChecksum_02200668(unsigned int value);
extern "C" int func_ov031_0220116c(void*, int, void*, unsigned int, unsigned int, int);

#define SwapBytes16_02201414(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201414
extern "C" ARM void func_ov031_02201414(void* data, unsigned int length, Socket02201414* socket) {
    unsigned char* udp = socket->buffer + 0x22;
    int high = (unsigned short)(data_ov031_0224c980.field50 >> 16);
    *(unsigned short*)(udp - 0xc) = SwapBytes16_02201414(high);
    int low = (unsigned short)data_ov031_0224c980.field50;
    *(unsigned short*)(udp - 0xa) = SwapBytes16_02201414(low);
    high = (unsigned short)(socket->remoteAddress >> 16);
    *(unsigned short*)(udp - 0x8) = SwapBytes16_02201414(high);
    low = (unsigned short)socket->remoteAddress;
    *(unsigned short*)(udp - 0x6) = SwapBytes16_02201414(low);
    *(unsigned short*)(udp - 0x4) = 0x1100;
    unsigned short total = (unsigned short)(length + 8);
    *(unsigned short*)(udp + 0x4) = SwapBytes16_02201414(total);
    *(unsigned short*)(udp - 0x2) = *(unsigned short*)(udp + 0x4);
    *(unsigned short*)(udp + 0x2) = SwapBytes16_02201414(socket->remotePort);
    *(unsigned short*)(udp + 0x0) = SwapBytes16_02201414(socket->localPort);
    *(unsigned short*)(udp + 0x6) = 0;
    unsigned int sum = func_ov031_022005b4(udp - 0xc, 0x14, 0);
    sum = func_ov031_022005b4(data, length, sum);
    int checksum = NormalizeChecksum_02200668((unsigned short)sum);
    *(unsigned short*)(udp + 0x6) = SwapBytes16_02201414(checksum);
    func_ov031_0220116c(udp, 8, data, length, socket->remoteAddress, 0x11);
}
