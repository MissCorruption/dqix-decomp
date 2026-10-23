#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205d6a0;
struct Struct_0205bacc;
struct Struct_0205bcdc;

extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" void func_0205cef8(void* arg0);
extern "C" void func_0205cf04(void* arg0);
extern "C" void func_0205cf28(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);
extern "C" void func_0205bcdc(struct Struct_0205bcdc* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);

struct Struct_ov000_0217636c_2 {
#if defined(jpn)
    char unknown_0_[0x28];
#else
    char unknown1_0_[0x5c];
#endif
    void* unknown_5c_;
};
extern "C" struct Struct_ov000_0217636c_2* func_020421a0();

#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov000_0217636c_3 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_ov000_0217636c {
    char unknown_0_[4];
    struct Struct_ov000_0217636c_3 unknown_4_;
    char unknown_c_[0x54 - 0xc];
    struct Struct_ov000_0217636c_3 unknown_54_;
    char unknown_5c_[0xa0 - 0x5c];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_;
    unsigned char unknown_b1_;
};

struct Struct_ov000_0215ab88 {
    char unknown_0_[0x38];
    struct Struct_ov000_0217636c* unknown_38_;
    char unknown_3c_[0x44 - 0x3c];
    int unknown_44_;
    int unknown_48_;
};

extern "C" void func_ov000_02176500(struct Struct_ov000_0215ab88* arg0, void* arg1, int arg2);

// USA: func_ov000_0217636c
extern "C" ARM void func_ov000_0217636c(struct Struct_ov000_0215ab88* arg0, int arg1) {
    struct Struct_ov000_0217636c* var0 = arg0->unknown_38_;
    if (var0 != 0) {
        int var1 = arg0->unknown_44_;
        int var2 = arg0->unknown_48_;
        func_0205d6a0((struct Struct_0205d6a0*)var0, 1);
        func_0205cef8(var0);
        func_0205cf04(var0);
        func_0205cf28((unsigned char*)var0, 2, 3, 0);
        func_0205bacc((struct Struct_0205bacc*)&var0->unknown_4_, 6);
        func_0205bacc((struct Struct_0205bacc*)&var0->unknown_54_, 6);
        func_0205bcdc((struct Struct_0205bcdc*)&var0->unknown_4_, 0);
        func_0205bb04(&var0->unknown_54_, 0);
        var0->unknown_4_.unknown_4_ = 1;
        var0->unknown_54_.unknown_4_ = 1;
        var0->unknown_a0_ = 2;
        var0->unknown_a2_ = 1;
        var0->unknown_a4_ = (var1 >> 3) + 9;
        var0->unknown_a6_ = (var2 >> 3) + 1;
        var0->unknown_a8_ = 0xc;
        var0->unknown_aa_ = 0xe;
        var0->unknown_ac_ = 0xa;
        var0->unknown_ae_ = 0xe;
        var0->unknown_b1_ = 0xd;
        void* var3 = func_020421a0()->unknown_5c_;
#if defined(jpn)
        memset(var3, 0, 0x800);
#else
        memset(var3, 0, 0x960);
#endif
        func_ov000_02176500(arg0, var3, arg1);
#if defined(jpn)
        func_0205d304(arg0->unknown_38_, var3, 0, 1, 0, 1, 0);
#else
        func_0205d304(arg0->unknown_38_, var3, 0, 1, 0, 1, 0, 0);
#endif
    }
}
