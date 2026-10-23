#if defined(jpn)
#define R(j,u) (j)
#define data_ov005_0215cbd4 data_ov005_0215dfb4
#define data_ov005_0215cd60 data_ov005_0215e140
#define data_ov014_02189480 data_ov014_0218a2c0
#define data_ov014_02189498 data_ov014_0218a2d8
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194564 data_ov015_02195184
#define data_ov015_02194570 data_ov015_02195190
#define data_ov015_021945a0 data_ov015_021951c0
#define data_ov015_021945d0 data_ov015_021951f0
#define data_ov024_021ff17c data_ov023_021ff17c
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov008_02189284 {
    char unknown_0_[0x1f4];
    void* unknown_1f4_;
    void* unknown_1f8_;
    void* unknown_1fc_;
    SafeAllocator unknown_200_[6];
};

// USA: func_ov008_02189284
extern "C" ARM void func_ov008_02189284(Struct_ov008_02189284* arg0, SafeAllocator* arg1) {
    arg0->unknown_200_[0].CreateTypeA(arg1->Allocate(0xa000), 0xa000);
    arg0->unknown_200_[1].CreateTypeA(arg1->Allocate(R(0x800, 0xc00)), R(0x800, 0xc00));
    arg0->unknown_200_[2].CreateTypeA(arg1->Allocate(0x5c00), 0x5c00);
    arg0->unknown_200_[3].CreateTypeA(arg1->Allocate(0x800), 0x800);
    arg0->unknown_200_[4].CreateTypeA(arg1->Allocate(R(0x1c00, 0x2400)), R(0x1c00, 0x2400));
    arg0->unknown_200_[5].CreateTypeA(arg1->Allocate(0x5400), 0x5400);
    arg0->unknown_1f8_ = arg1->Allocate(0x140);
    arg0->unknown_1f4_ = arg1->Allocate(0x54);
    arg0->unknown_1fc_ = arg1->Allocate(0x8);
}
