#include <globaldefs.h>

#include "std_library_functions.h"

struct Struct_0205d0e0 {
    char unknown_0_[0xAA];
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xC2 - 0xB0];
    short unknown_c2_;
    unsigned char unknown_c4_;
    char unknown_c5_[0xE0 - 0xC5];
};

struct Struct_0205d81c {
    char unknown_0_[0x98];
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

struct Struct_ov000_02179f94 {
    char unknown_0_[0x188];
    struct Struct_0205d81c unknown_188_;
};

extern "C" int func_020421a0();
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_ov000_0217a19c(struct Struct_ov000_02179f94* arg0, void* arg1);
extern "C" void func_ov000_0217c638(struct Struct_ov000_02179f94* arg0, int arg1, int arg2);
extern "C" void func_ov000_0217a2dc(struct Struct_ov000_02179f94* arg0, void* arg1, void* arg2);
#if defined(jpn)
extern "C" void func_0205d304(struct Struct_0205d81c* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(struct Struct_0205d81c* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

static inline short inline_ov000_02179f94(const struct Struct_0205d0e0* arg0) { return arg0->unknown_aa_; }
static inline short inline_ov000_02179f94_2(const struct Struct_0205d0e0* arg0) { return arg0->unknown_ac_; }
static inline short inline_ov000_02179f94_3(const struct Struct_0205d0e0* arg0) { return arg0->unknown_ae_; }

// USA: func_ov000_02179f94
extern "C" ARM void func_ov000_02179f94(struct Struct_ov000_02179f94* arg0, void* arg1, int arg2, int arg3) {
    func_ov000_0217a19c(arg0, arg1);
    func_ov000_0217c638(arg0, arg2, arg3);
    struct Struct_0205d81c* var0 = &arg0->unknown_188_;
    var0->unknown_a0_ = 0x16;
    var0->unknown_a2_ = 6;
    var0->unknown_a4_ = 5;
#if defined(jpn)
    var0->unknown_a6_ = 6;
#else
    var0->unknown_a6_ = 5;
#endif
    var0->unknown_a8_ = 0xc;
#if defined(jpn)
    var0->unknown_aa_ = 0xa;
#else
    var0->unknown_aa_ = 8;
#endif
    var0->unknown_ac_ = 0xa;
    var0->unknown_ae_ = 0xe;
    var0->unknown_b1_ = 0x17;
#if defined(jpn)
    void* var1 = *(void**)(func_020421a0() + 0x28);
    memset(var1, 0, 0x800);
#else
    void* var1 = *(void**)(func_020421a0() + 0x5c);
    memset(var1, 0, 0x960);
#endif
    func_ov000_0217a2dc(arg0, arg1, var1);
#if defined(jpn)
    func_0205d304(var0, var1, 0, 1, 0, 1, 0);
#else
    func_0205d304(var0, var1, 0, 1, 0, 1, 0, 0);
#endif
    struct Struct_0205d0e0* var2 = func_0205d81c(var0, 0x18);
    if (var2 == 0) {
        return;
    }
    var2->unknown_c2_ = 0;
    const struct Struct_0205d0e0* var3 = func_0205d81c(var0, 0x17);
    if (var3 == 0) {
        return;
    }
    short var4 = inline_ov000_02179f94_2(var3);
    short var5 = inline_ov000_02179f94_3(var3) + inline_ov000_02179f94(var3);
    var2->unknown_ac_ = var4;
    var2->unknown_ae_ = var5;
}
