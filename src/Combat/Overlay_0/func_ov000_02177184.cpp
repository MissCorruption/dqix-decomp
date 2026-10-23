#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0204c87c;
struct Struct_0205d6a0;
extern "C" int func_0204c7e0(unsigned char* arg0);
extern "C" void func_0204c964(struct Struct_0204c87c* arg0);
extern "C" void* func_ov000_02174da4(int arg0, void* arg1);
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" void func_0205cf04(void* arg0);
extern "C" void func_0205cef8(void* arg0);
extern "C" void func_0205cf28(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205bb04(void* arg0, int arg1);
extern "C" void func_0205d7a0(unsigned char* arg0, int arg1);
extern "C" int func_020421a0(void);
extern "C" void func_ov000_0217737c(void* arg0, void* arg1);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif
extern "C" void func_ov000_0217a8f4(void* arg0);

struct Struct_ov000_02177184 {
    char unknown_0_[0x54];
    char unknown_54_[4];
    int unknown_58_;
    char unknown_5c_[0x9c - 0x5c];
    unsigned char* unknown_9c_;
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

struct Struct_ov000_02177184_2 {
    char unknown_0_[0x188];
    struct Struct_ov000_02177184 unknown_188_;
#if defined(jpn)
    char unknown_23c_[0x1fa1 - 0x188 - sizeof(struct Struct_ov000_02177184)];
#else
    char unknown1_23c_[0x1d69 - 0x188 - sizeof(struct Struct_ov000_02177184)];
#endif
    signed char unknown_1d69_;
    char unknown_1d6a_[0x1d72 - 0x1d6a];
    unsigned short unknown_1d72_;
};

// USA: func_ov000_02177184
extern "C" ARM void func_ov000_02177184(struct Struct_ov000_02177184_2* arg0, int arg1) {
    if (!arg1) {
        return;
    }
    struct Struct_ov000_02177184* var0 = &arg0->unknown_188_;
    unsigned char* var1 = var0->unknown_9c_;
    if (func_0204c7e0(var1)) {
        func_0204c964((struct Struct_0204c87c*)var1);
        arg0->unknown_1d72_ &= ~2;
        return;
    }
    int var2[4];
    func_ov000_02174da4((int)arg0, var2);
    int var3 = 0;
    for (int var4 = 0; var4 < 4; var4++) {
        if (var2[var4] >= 0) {
            var3++;
        }
    }
    arg0->unknown_1d69_ = 0;
    func_0205d6a0((struct Struct_0205d6a0*)var0, 1);
    func_0205cf04(var0);
    func_0205cef8(var0);
    func_0205cf28((unsigned char*)var0, 1, var3, 0);
    var0->unknown_58_ = 1;
    func_0205bb04(var0->unknown_54_, 0);
    if (var3 == 3) {
        var0->unknown_a0_ = 8;
        var0->unknown_a2_ = 6;
    }
    if (var3 == 4) {
        var0->unknown_a0_ = 8;
        var0->unknown_a2_ = 1;
    }
    var0->unknown_a4_ = 9;
    var0->unknown_a6_ = 1;
    if (var3 == 3) {
        var0->unknown_a8_ = 0xc;
        var0->unknown_aa_ = 8;
    }
    if (var3 == 4) {
        var0->unknown_a8_ = 0xc;
        var0->unknown_aa_ = 4;
    }
    var0->unknown_ac_ = 0xa;
    var0->unknown_ae_ = 0xb;
    var0->unknown_b1_ = 1;
    func_0205d7a0((unsigned char*)var0, arg0->unknown_1d69_);
#if defined(jpn)
    void* var5 = *(void**)(func_020421a0() + 0x28);
    memset(var5, 0, 0x800);
#else
    void* var5 = *(void**)(func_020421a0() + 0x5c);
    memset(var5, 0, 0x960);
#endif
    func_ov000_0217737c(arg0, var5);
#if defined(jpn)
    func_0205d304(var0, var5, 0, 1, 0, 1, 0);
#else
    func_0205d304(var0, var5, 0, 1, 0, 1, 0, 0);
#endif
    func_ov000_0217a8f4(arg0);
}
