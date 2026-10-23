#include <globaldefs.h>
#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

#include "std_library_functions.h"

extern "C" void func_ov008_02187708(void* arg0, void* arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov008_02184a4c_13 {
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

// USA: func_ov008_02187664
extern "C" ARM void func_ov008_02187664(Struct_ov008_02184a4c_13* arg0, int arg1) {
    arg0->unknown_1d0_ = 0x1e;
    arg0->unknown_1d2_ = LOW_REGION(2, 3);
    arg0->unknown_1d4_ = 2;
    arg0->unknown_1d6_ = 0;
    arg0->unknown_1d8_ = LOW_REGION(0, 1);
    arg0->unknown_1da_ = LOW_REGION(3, 2);
    arg0->unknown_1dc_ = 0xa;
    arg0->unknown_1de_ = 0xa;
    arg0->unknown_1e7_ = 0xa;
    arg0->unknown_1e1_ = 0;
    arg0->unknown_1e5_ = 1;
    arg0->unknown_1e6_ = 1;
    memset(arg0->unknown_b8_, 0, LOW_REGION(0x800, 0x960));
    func_ov008_02187708(arg0, arg0->unknown_b8_, arg1);
#if defined(jpn)
    func_0205d304((char*)arg0 + 0x130, arg0->unknown_b8_, 0, 0, 0, 0, 0);
#else
    func_0205d304((char*)arg0 + 0x130, arg0->unknown_b8_, 0, 0, 0, 0, 0, 0);
#endif
}
