#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0203bdb0_1312 = 0x620 };
enum { Enum_0203bdb0_4 = 0 };
#else
enum { Enum_0203bdb0_1312 = 0x520 };
enum { Enum_0203bdb0_4 = 4 };
#endif

#include "NitroSDK/DMA.h"

extern "C" int LoadToMainOAM(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubOAM(int arg0, int arg1, unsigned int arg2);

extern int data_021052b4;
extern int data_021056b4;

struct Struct_0203bdb0 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    unsigned char unknown_d_;
};

// USA: func_0203bdb0
extern "C" ARM void func_0203bdb0(struct Struct_0203bdb0* arg0) {
    if (arg0->unknown_c_ != 0) {
        LoadToMainOAM((int)&data_021052b4, 0, 0x400);
        DMAMemsetSynchronous(3, (unsigned int)&data_021052b4, 0xc0, 0x400);
    }
    if (arg0->unknown_d_ != 0) {
        LoadToSubOAM((int)&data_021056b4, 0, 0x400);
        DMAMemsetSynchronous(3, (unsigned int)&data_021056b4, 0xc0, 0x400);
    }
    if (arg0->unknown_c_ != 0 || arg0->unknown_d_ != 0) {
        *(short*)((char*)arg0 + Enum_0203bdb0_1312) = Enum_0203bdb0_4;
    }
}
