#include <globaldefs.h>
#include "System/Interrupts.h"
#include "System/Memory.h"

struct PacketHeader {
    unsigned short format;
    unsigned short length;
    unsigned short flags;
    unsigned short identifier;
    unsigned short protocol;
    unsigned short checksum;
    unsigned int source;
    unsigned int destination;
};
struct Packet {
    unsigned char prefix[8];
    PacketHeader header;
};
struct NetworkAddresses {
    unsigned char padding0[0x50];
    unsigned int address;
};
extern NetworkAddresses data_ov031_0224c980;
extern unsigned char data_ov031_0224968c[8];
extern unsigned char data_ov031_0224ce68[6];
unsigned int ComputeNormalizedChecksum_02200684(void*, unsigned int);
int IsHighNibbleE_02200790(unsigned int);
extern "C" void func_ov031_02200f74(unsigned char*, unsigned int, void*, int, unsigned int, unsigned short);
extern "C" void func_ov031_022008ac(void*, void*, void*, unsigned int, void*, int);
static inline int SwapHalfword(int value) { return (value >> 8) | (value << 8); }

// USA: func_ov031_02201044
extern "C" ARM void func_ov031_02201044(unsigned char* payload, int headerLength, void* data, int dataLength, unsigned int destination, int identifier) {
    unsigned short length = headerLength + 0x14 + dataLength;
    ((PacketHeader*)payload)[-1].length = SwapHalfword(length);
    ((PacketHeader*)payload)[-1].identifier = SwapHalfword((unsigned short)identifier);
    ((PacketHeader*)payload)[-1].checksum = 0;
    int checksum = ComputeNormalizedChecksum_02200684((PacketHeader*)payload - 1, 0x14);
    ((PacketHeader*)payload)[-1].checksum = SwapHalfword(checksum);
    if (destination != 0x7f000001 && destination != data_ov031_0224c980.address) {
        func_ov031_02200f74((unsigned char*)((PacketHeader*)payload - 1), headerLength + 0x14, data, dataLength, destination, 0x800);
    }
    if (destination != 0x7f000001 && destination != data_ov031_0224c980.address) {
        if (!IsHighNibbleE_02200790(destination)) return;
    }
    VectorizedInvertedMemcpy(data_ov031_0224968c, ((Packet*)payload)[-1].prefix, 8);
    int irqState = DisableIRQInterrupts();
    func_ov031_022008ac(data_ov031_0224ce68, data_ov031_0224ce68, (Packet*)payload - 1, headerLength + 0x1c, data, dataLength);
    SetIRQInterruptState(irqState);
}
