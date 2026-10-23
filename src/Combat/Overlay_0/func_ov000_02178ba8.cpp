#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x28
#define REGION_OFFSET_1 0x800
#else
#define REGION_OFFSET_0 0x5c
#define REGION_OFFSET_1 0x960
#endif

#include "std_library_functions.h"

struct Struct_0205d0e0 {
    char unknown_0_[0xc2];
    short unknown_c2_;
};

struct Struct_0205d81c {
    char unknown_0_[0x54];
    int unknown_54_;
    char unknown_58_[0xa0 - 0x58];
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

struct Struct_ov000_02178ba8 {
    char unknown_0_[REGION_OFFSET_0];
    void* unknown_5c_;
};

struct Struct_ov000_02178ba8_2 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
};

struct Struct_ov000_02178ba8_3 {
    char unknown_0_[0x188];
    Struct_0205d81c unknown_188_;
};

extern "C" Struct_ov000_02178ba8* func_020421a0();
extern "C" int func_0205bafc(void* arg0);
extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c* arg0, int arg1);
extern "C" void func_ov000_02178d28(Struct_ov000_02178ba8_3* arg0, Struct_ov000_02178ba8_2* arg1);
extern "C" void func_ov000_0217ab8c(Struct_ov000_02178ba8_2* arg0, int arg1, int arg2);
extern "C" void func_ov000_02178f28(Struct_ov000_02178ba8_3* arg0, Struct_ov000_02178ba8_2* arg1, void* arg2);
#if defined(jpn)
extern "C" void func_0205d304(Struct_0205d81c* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(Struct_0205d81c* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif
extern "C" void func_ov000_02176210(Struct_0205d81c* arg0, int arg1, int arg2);

// USA: func_ov000_02178ba8
extern "C" ARM void func_ov000_02178ba8(Struct_ov000_02178ba8_3* arg0, Struct_ov000_02178ba8_2* arg1, int arg2, int arg3) {
    func_ov000_02178d28(arg0, arg1);
    int var0 = arg1->unknown_44_;
    int var1 = arg1->unknown_48_;
    func_ov000_0217ab8c(arg1, arg2, arg3);
    Struct_0205d81c* var2 = &arg0->unknown_188_;
#if defined(jpn)
    var2->unknown_a0_ = 0xd;
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
    var2->unknown_b1_ = 0xf;
    int var3 = 0;
    if (func_0205bafc(&var2->unknown_54_) > 4) {
        var3 = 1;
    }
    void* var4 = func_020421a0()->unknown_5c_;
    memset(var4, 0, REGION_OFFSET_1);
    func_ov000_02178f28(arg0, arg1, var4);
#if defined(jpn)
    func_0205d304(var2, var4, 0, 0, var3, 1, 0);
#else
    func_0205d304(var2, var4, 0, 0, var3, 1, 0, 0);
#endif
    Struct_0205d0e0* var5 = func_0205d81c(var2, 0x22);
    if (var5 != NULL) {
        var5->unknown_c2_ = 0;
    }
    func_ov000_02176210(&arg0->unknown_188_, 0xf, 0x22);
}
