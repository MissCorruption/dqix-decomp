#include <globaldefs.h>

#if defined(jpn)
#define func_ov023_021fc408 func_ov023_021fb700
#endif

struct Struct_ov004_0216b120 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    char unknown_a_[0x1c - 0xa];
    int unknown_1c_;
    char unknown_20_[0x24 - 0x20];
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    unsigned short unknown_28_;
    unsigned short unknown_2a_;
    unsigned short unknown_2c_;
    unsigned char unknown_2e_;
};

extern "C" void func_ov023_021f6ed8(void*);

// USA: func_ov023_021fc408
extern "C" ARM int func_ov023_021fc408(struct Struct_ov004_0216b120* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 0x13;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_1c_ = 2;
    arg0->unknown_24_ = arg4;
    arg0->unknown_26_ = arg5;
    arg0->unknown_28_ = arg6;
    arg0->unknown_2a_ = arg7;
    arg0->unknown_2c_ = arg8;
    arg0->unknown_2e_ = arg9;
    return 1;
}
