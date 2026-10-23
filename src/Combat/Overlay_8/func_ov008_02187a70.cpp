#if defined(jpn)
#define R(j,u) (j)
#define func_ov012_02189d68 func_ov012_0218a804
#define data_ov009_0218ac04 data_ov009_0218bb6c
#define data_ov013_02187d94 data_ov013_02188cd0
#define func_ov008_02187b20 func_ov008_021888fc
#define func_ov012_0218432c func_ov012_021853a0
#define func_ov012_0218930c func_ov012_02189be8
#define func_ov012_0218adac func_ov012_0218bba0
#define func_ov013_02185900 func_ov013_02186aec
#define func_ov023_021e6de4 func_ov023_021e7148
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov008_02187b20(void* arg0, void* arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov008_02187a70 {
    char unknown_0_[0xb8];
    void* unknown_b8_;
    char unknown_bc_[0x1d0 - 0xbc];
    unsigned short unknown_1d0_;
    unsigned short unknown_1d2_;
    unsigned short unknown_1d4_;
    unsigned short unknown_1d6_;
    unsigned short unknown_1d8_;
    unsigned short unknown_1da_;
    unsigned short unknown_1dc_;
    unsigned short unknown_1de_;
    char unknown_1e0_[0x1e1 - 0x1e0];
    unsigned char unknown_1e1_;
    char unknown_1e2_[0x1e5 - 0x1e2];
    unsigned char unknown_1e5_;
    unsigned char unknown_1e6_;
    unsigned char unknown_1e7_;
};

// USA: func_ov008_02187a70
extern "C" ARM void func_ov008_02187a70(Struct_ov008_02187a70* arg0, int arg1) {
    arg0->unknown_1d0_ = 0x12;
    arg0->unknown_1d2_ = R(0xc,0xb);
    arg0->unknown_1d4_ = 0xd;
    arg0->unknown_1d6_ = 3;
    arg0->unknown_1d8_ = 2;
    arg0->unknown_1da_ = 1;
    arg0->unknown_1dc_ = 0xa;
    arg0->unknown_1de_ = 0xf;
    arg0->unknown_1e7_ = 0xa;
    arg0->unknown_1e1_ = 3;
    arg0->unknown_1e5_ = 1;
    arg0->unknown_1e6_ = 1;
    memset(arg0->unknown_b8_, 0, R(0x800,0x960));
    func_ov008_02187b20(arg0, arg0->unknown_b8_, arg1);
#if defined(jpn)
    func_0205d304((char*)arg0 + 0x130, arg0->unknown_b8_, 0, 0, 0, 0, 0);
#else
    func_0205d304((char*)arg0 + 0x130, arg0->unknown_b8_, 0, 0, 0, 0, 0, 0);
#endif
}
