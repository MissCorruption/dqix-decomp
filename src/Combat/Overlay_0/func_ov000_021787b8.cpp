#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205ba68;
struct Struct_0205bacc;

struct Struct_ov000_02178074_4 {
#if defined(jpn)
    char unknown_0_[0x28];
#else
    char unknown1_0_[0x5c];
#endif
    char* unknown_5c_;
};
struct Struct_ov000_021787b8_2 {
    char unknown_0_[0xa0];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    unsigned char unknown_b0_;
    unsigned char unknown_b1_;
    char unknown_b2_[0xa];
};
struct Struct_ov000_021787b8_3 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x48];
};
struct Struct_ov000_021787b8_4 {
    char unknown_0_[0x188];
    Struct_ov000_021787b8_2 unknown_188_;
    Struct_ov000_021787b8_3 unknown_244_;
};

extern "C" Struct_ov000_02178074_4* func_020421a0();
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);
extern "C" int func_ov000_0217538c(void* arg0);
extern "C" int func_ov000_021753d8(void* arg0, int arg1);
extern "C" void func_ov000_0217ab8c(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02178938(void* arg0, void* arg1, int arg2, void* arg3);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov000_021787b8 {
    char unknown_0_[0x1d];
    signed char unknown_1d_;
    char unknown_1e_[0x44 - 0x1e];
    int unknown_44_;
    int unknown_48_;
};

// USA: func_ov000_021787b8
extern "C" ARM void func_ov000_021787b8(Struct_ov000_021787b8_4* arg0, struct Struct_ov000_021787b8* arg1, int arg2, int arg3) {
    if (arg1 == 0) {
        return;
    }
    int var0 = arg1->unknown_44_;
    int var1 = arg1->unknown_48_;
    int var2 = func_ov000_0217538c(arg0);
    int var3 = func_ov000_021753d8(arg0, arg1->unknown_1d_);
    func_ov000_0217ab8c(arg1, arg2, arg3);
    Struct_ov000_021787b8_2* var4 = &arg0->unknown_188_;
#if defined(jpn)
    var4->unknown_a0_ = 1;
#else
    var4->unknown_a0_ = 0x10;
#endif
    var4->unknown_a2_ = 1;
    var4->unknown_a4_ = (var0 >> 3) + 0xe;
#if defined(jpn)
    var4->unknown_a6_ = (var1 >> 3) + 1;
#else
    var4->unknown_a6_ = var1 >> 3;
#endif
    var4->unknown_a8_ = 0xc;
    var4->unknown_aa_ = 6;
    var4->unknown_ac_ = 0xa;
    var4->unknown_ae_ = 0x10;
    var4->unknown_b1_ = 0xe;
    func_0205ba68((struct Struct_0205ba68*)&arg0->unknown_244_, 1, var2, 0);
    arg0->unknown_244_.unknown_4_ = 1;
    func_0205bacc((struct Struct_0205bacc*)&arg0->unknown_244_, var2);
    func_0205bb04(&arg0->unknown_244_, var3);
    char* var5 = func_020421a0()->unknown_5c_;
#if defined(jpn)
    memset(var5, 0, 0x800);
#else
    memset(var5, 0, 0x960);
#endif
    func_ov000_02178938(arg0, arg1, arg3, var5);
#if defined(jpn)
    func_0205d304(var4, var5, 0, 1, 0, 1, 0);
#else
    func_0205d304(var4, var5, 0, 1, 0, 1, 0, 0);
#endif
}
