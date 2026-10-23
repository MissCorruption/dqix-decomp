#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"

extern "C" void func_020419f4(int arg0, int arg1);

#if defined(jpn)
#define data_021077fc data_0210773c
#endif
extern int data_021077fc;

struct Struct_020417b0 {
    int unknown_0_;
    int unknown_4_;
};

static inline void inline_020417b0(int arg0, int arg1, int arg2) {
    *(volatile unsigned int*)0x04000470 = arg0;
    *(volatile unsigned int*)0x04000470 = arg1;
    *(volatile unsigned int*)0x04000470 = arg2;
}

static inline void inline_020417b0_2(int arg0, int arg1, int arg2) {
    *(volatile unsigned int*)0x0400046c = arg0;
    *(volatile unsigned int*)0x0400046c = arg1;
    *(volatile unsigned int*)0x0400046c = arg2;
}

static inline void inline_020417b0_3(unsigned short arg0, unsigned short arg1, unsigned short arg2) {
    *(volatile unsigned int*)0x0400048c = (unsigned short)arg0 | ((unsigned short)arg1 << 16);
    *(volatile unsigned int*)0x0400048c = (unsigned short)arg2;
}

// USA: func_020417b0
extern "C" ARM void func_020417b0(Struct_0204166c* arg0, int arg1, Struct_020417b0* arg2, int arg3) {
    if (arg0->unknown_8_ < 0) return;
    if (arg0->unknown_16_0_) return;
    if (arg3 == 0) return;

    *(volatile unsigned int*)0x04000444 = 0;
#if defined(jpn)
    inline_020417b0(arg0->unknown_c_ << 12, arg0->unknown_10_ << 12, (arg0->unknown_14_ + 0x400) << 12);
#else
    inline_020417b0(arg0->unknown_c_ << 12, arg0->unknown_10_ << 12, ((short)arg0->unknown_14_ + 0x400) << 12);
#endif
    inline_020417b0_2(0x1000, 0x1000, 0x1000);

    *(volatile unsigned int*)0x04000444 = 0;
    inline_020417b0(0, 0x10000, 0);
    inline_020417b0_2(0x1000, -0x1000, 0x1000);

    *(volatile unsigned int*)0x04000444 = 0;
    *(volatile unsigned int*)0x040004c0 = 0x7fffffff;
    *(volatile unsigned int*)0x040004c4 = 0x4210;
    *(volatile unsigned int*)0x040004a8 = 0x6c900000u | (arg0->unknown_4_ >> 3);
    *(volatile unsigned int*)0x040004ac = (unsigned int)data_021077fc >> 4;
    *(volatile unsigned int*)0x040004a4 = 0x3e0000c0 | (arg3 << 16);
    inline_020417b0_2(0x10000, 0x10000, 0x1000);

    *(volatile unsigned int*)0x04000500 = 1;
    *(volatile unsigned int*)0x04000480 = arg1;

    int var0 = 16;
    float var1 = 0.0f;
    int var2 = (int)(var0 * var1);
    float var3 = 1.0f - var1;
    if (arg2 != NULL) {
        if (arg0->unknown_10_ < arg2->unknown_4_) {
            var2 += arg2->unknown_4_ - arg0->unknown_10_;
        }
        if (var2 > 16) {
            var2 = 16;
        }
        var3 = (16.0f - var2) / 16.0f;
    }
    int var4 = var2 << 12;
    func_020419f4(0, var4);
    inline_020417b0_3(0, (int)(4096.0f * var3), 0);
    func_020419f4(0x10000, var4);
    inline_020417b0_3(0x1000, (int)(4096.0f * var3), 0);
    func_020419f4(0x10000, 0x10000);
    inline_020417b0_3(0x1000, 0, 0);
    func_020419f4(0, 0x10000);
    inline_020417b0_3(0, 0, 0);

    *(volatile unsigned int*)0x04000504 = 0;
    *(volatile unsigned int*)0x04000448 = 1;
    *(volatile unsigned int*)0x04000448 = 1;
    *(volatile unsigned int*)0x04000448 = 1;
}
