#include <globaldefs.h>
#include "World/Object3D.h"

#if defined(jpn)
#define func_ov009_02188454 func_ov009_02189214
#endif

struct Struct_ov009_021863d0 {
    char unknown_0_[0xc12];
    unsigned char unknown_c12_;
};

struct Struct_ov009_02187b34 {
    short unknown_0_[10];
    unsigned char unknown_14_[4];
    short unknown_18_;
    short unknown_1a_;
};

struct Struct_ov005_0215840c_2 {
    char unknown_0_[0x488];
    Struct_ov009_02187b34 unknown_488_;
};

struct Struct_ov009_021842a0_2 {
#if defined(jpn)
    char unknown_0_[0x7bc];
#else
    char unknown1_0_[0x7f8];
#endif
    Struct_ov009_021863d0* unknown_7f8_;
    Struct_ov009_021863d0* unknown_7fc_;
    char unknown_800_[0xd88 - 0x800];
    Struct_ov005_0215840c_2* unknown_d88_;
    char unknown_d8c_[0xd9c - 0xd8c];
    unsigned int unknown_d9c_;
    signed char unknown_da0_[2];
    unsigned char unknown_da2_;
    unsigned char unknown_da3_;
    unsigned char unknown_da4_[2];
};

extern "C" void func_ov023_021e60e0(void*, unsigned int);
extern "C" Vector3i func_ov023_021e613c(Struct_ov009_021863d0* arg0);
struct Struct_ov009_02188454;
extern "C" void func_ov023_021e6088(void*, Struct_ov009_02188454*);
extern "C" Object3D* func_ov023_021e6194(Struct_ov009_021863d0* arg0);
extern "C" void func_ov009_02188bf8(unsigned char*, int, short*, short*);
extern "C" void func_ov023_021e5e68(Struct_ov009_021863d0* arg0, int arg1, int arg2);
extern "C" int func_020d2ff0(const char* arg0);

// USA: func_ov009_02188454
extern "C" ARM void func_ov009_02188454(Struct_ov009_021842a0_2* arg0) {
    if (arg0->unknown_d9c_ & 4) {
        Struct_ov009_021863d0* var0 = arg0->unknown_7fc_;
        if (var0 != NULL && var0->unknown_c12_ != 0)
            return;

        if (arg0->unknown_d9c_ & 0x40000) {
            func_ov023_021e60e0(arg0->unknown_7f8_, 0x1eb);
            arg0->unknown_d9c_ &= ~0x40000;
        }
        const Vector3i& var1 = func_ov023_021e613c(arg0->unknown_7f8_);
        func_ov023_021e6088(arg0->unknown_7fc_, (Struct_ov009_02188454*)&var1);

        Object3D* var2 = func_ov023_021e6194(arg0->unknown_7f8_);
        Object3D* var3 = func_ov023_021e6194(arg0->unknown_7fc_);
        const BCFG::AnimationRecord* var4 = var3->activeAnimationRecord_;
        int var5 = 0;
        int var6 = 0;
        const BCFG::AnimationRecord* var7 = var2->activeAnimationRecord_;
        if (var4 != NULL)
            var5 = func_020d2ff0(var4->name);
        if (var7 != NULL)
            var6 = func_020d2ff0(var7->name);
        if (var5 == var6 && var7 != NULL) {
            var3->MaybeSetRegularAnimation(var7->name, 0);
            var3->SetCurrentAnimationTime(var2->animationTime_);
        }

        Struct_ov009_021863d0* var8 = arg0->unknown_7f8_;
        arg0->unknown_7f8_ = arg0->unknown_7fc_;
        arg0->unknown_7fc_ = var8;

        if (arg0->unknown_d9c_ & 0x20000) {
            unsigned char var9 = arg0->unknown_da3_;
            Struct_ov009_02187b34* var10 = &arg0->unknown_d88_->unknown_488_;
            unsigned char var11 = arg0->unknown_da4_[var9];
            func_ov009_02188bf8((unsigned char*)arg0, var11, &var10->unknown_18_, &var10->unknown_1a_);
            func_ov023_021e5e68(arg0->unknown_7f8_, var10->unknown_18_, var10->unknown_1a_);
            func_ov023_021e5e68(arg0->unknown_7fc_, var10->unknown_18_, var10->unknown_1a_);
            arg0->unknown_d9c_ &= ~0x20000;
        }
        arg0->unknown_d9c_ &= ~4;
    }
}
