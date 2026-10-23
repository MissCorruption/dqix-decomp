#include <globaldefs.h>

#include "std_library_functions.h"

struct Struct_0205d0e0 {
    char unknown_0_[0xC2];
    short unknown_c2_;
    unsigned char unknown_c4_;
    char unknown_c5_[0xE0 - 0xC5];
};

struct Struct_0205d81c {
    char unknown_0_[0x54];
    char unknown_54_[0x98 - 0x54];
    int unknown_98_;
    struct Struct_0205d0e0* unknown_9c_;
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
    char unknown_b2_;
    unsigned char unknown_b3_;
    unsigned char unknown_b4_;
};

struct Struct_ov000_02179018 {
    char unknown_0_[0x188];
    struct Struct_0205d81c unknown_188_;
};

struct Struct_ov000_02179018_2 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
};

extern "C" int func_020421a0();
extern "C" int func_0205bafc(void* arg0);
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_ov000_02179194(struct Struct_ov000_02179018* arg0, struct Struct_ov000_02179018_2* arg1);
extern "C" void func_ov000_0217ab8c(struct Struct_ov000_02179018_2* arg0, int arg1, int arg2);
extern "C" void func_ov000_0217936c(struct Struct_ov000_02179018* arg0, struct Struct_ov000_02179018_2* arg1, void* arg2);
#if defined(jpn)
extern "C" void func_0205d304(struct Struct_0205d81c* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(struct Struct_0205d81c* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif
extern "C" void func_ov000_02176210(struct Struct_0205d81c* arg0, int arg1, int arg2);

// USA: func_ov000_02179018
extern "C" ARM void func_ov000_02179018(struct Struct_ov000_02179018* arg0, struct Struct_ov000_02179018_2* arg1, int arg2, int arg3) {
    func_ov000_02179194(arg0, arg1);
    int var0 = arg1->unknown_44_;
    int var1 = arg1->unknown_48_;
    func_ov000_0217ab8c(arg1, arg2, arg3);
    struct Struct_0205d81c* var2 = &arg0->unknown_188_;
#if defined(jpn)
    var2->unknown_a0_ = 0xe;
#else
    var2->unknown_a0_ = 0x10;
#endif
    var2->unknown_a2_ = 9;
#if defined(jpn)
    var2->unknown_a4_ = (var0 >> 3) + 9;
#else
    var2->unknown_a4_ = (var0 >> 3) + 0x10;
#endif
    var2->unknown_a6_ = var1 >> 3;
    var2->unknown_a8_ = 0xc;
    var2->unknown_aa_ = 8;
    var2->unknown_ac_ = 0xa;
    var2->unknown_ae_ = 0xc;
    var2->unknown_b1_ = 0x10;
    int var3 = 0;
    if (func_0205bafc(var2->unknown_54_) > 4) {
        var3 = 1;
    }
#if defined(jpn)
    void* var4 = *(void**)(func_020421a0() + 0x28);
    memset(var4, 0, 0x800);
#else
    void* var4 = *(void**)(func_020421a0() + 0x5c);
    memset(var4, 0, 0x960);
#endif
    func_ov000_0217936c(arg0, arg1, var4);
#if defined(jpn)
    func_0205d304(var2, var4, 0, 0, var3, 1, 0);
#else
    func_0205d304(var2, var4, 0, 0, var3, 1, 0, 0);
#endif
    struct Struct_0205d0e0* var5 = func_0205d81c(var2, 0x23);
    if (var5 != 0) {
        var5->unknown_c2_ = 0;
    }
    func_ov000_02176210(&arg0->unknown_188_, 0x10, 0x23);
}
