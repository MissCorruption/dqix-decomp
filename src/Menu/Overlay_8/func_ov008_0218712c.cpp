#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#if defined(jpn)
#define func_ov008_0218712c func_ov008_02188008
#endif

#include "std_library_functions.h"

struct Struct_ov008_0218712c {
    unsigned char unknown_0_[0xb8];
    void* unknown_b8_;
    unsigned char unknown_bc_[0x130 - 0xbc];
    unsigned char unknown_130_[0xa0];
    short unknown_1d0_[8];
    unsigned char unknown_1e0_;
    unsigned char unknown_1e1_;
    unsigned char unknown_1e2_[3];
    unsigned char unknown_1e5_;
    unsigned char unknown_1e6_;
    unsigned char unknown_1e7_;
};

extern "C" {
    void func_ov008_02187278(Struct_ov008_0218712c*, void*, int, void*);
#if defined(jpn)
    void func_0205d304(void*, void*, int, int, bool, bool, void*);
#else
    void func_0205d304(void*, void*, int, int, bool, bool, void*, bool);
#endif

    void func_ov008_0218712c(Struct_ov008_0218712c* arg0, void* arg1) {
        arg0->unknown_1d0_[0] = LOW_REGION(10, 5);
        arg0->unknown_1d0_[1] = 2;
        arg0->unknown_1d0_[2] = LOW_REGION(1, 7);
        arg0->unknown_1d0_[3] = LOW_REGION(6, 7);
        arg0->unknown_1d0_[4] = 2;
        arg0->unknown_1d0_[5] = 4;
        arg0->unknown_1d0_[6] = 10;
        arg0->unknown_1d0_[7] = 16;
        arg0->unknown_1e7_ = 10;
        arg0->unknown_1e1_ = 1;
        arg0->unknown_1e5_ = 1;
        arg0->unknown_1e6_ = 1;
        memset(arg0->unknown_b8_, 0, LOW_REGION(0x800, 0x960));
        func_ov008_02187278(arg0, arg0->unknown_b8_, 0, arg1);
#if defined(jpn)
        func_0205d304(arg0->unknown_130_, arg0->unknown_b8_, 0, 0, false, false, 0);
#else
        func_0205d304(arg0->unknown_130_, arg0->unknown_b8_, 0, 0, false, false, 0, false);
#endif

        arg0->unknown_1d0_[0] = LOW_REGION(10, 5);
        arg0->unknown_1d0_[1] = 2;
        arg0->unknown_1d0_[2] = LOW_REGION(1, 7);
        arg0->unknown_1d0_[3] = LOW_REGION(11, 12);
        arg0->unknown_1d0_[4] = 2;
        arg0->unknown_1d0_[5] = 4;
        arg0->unknown_1d0_[6] = 10;
        arg0->unknown_1d0_[7] = 16;
        arg0->unknown_1e7_ = 10;
        arg0->unknown_1e1_ = 2;
        arg0->unknown_1e5_ = 1;
        arg0->unknown_1e6_ = 1;
        memset(arg0->unknown_b8_, 0, LOW_REGION(0x800, 0x960));
        func_ov008_02187278(arg0, arg0->unknown_b8_, 1, arg1);
#if defined(jpn)
        func_0205d304(arg0->unknown_130_, arg0->unknown_b8_, 0, 0, false, false, 0);
#else
        func_0205d304(arg0->unknown_130_, arg0->unknown_b8_, 0, 0, false, false, 0, false);
#endif
    }
}
