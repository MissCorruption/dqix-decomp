#include <globaldefs.h>

extern "C" void func_0203fc28(int arg0, int arg1);

extern unsigned short data_020e79d8[];

struct Struct_0203f98c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;

    unsigned short inline_0203f98c() const { SDK_NULL_ASSERT(this); return unknown_4_; }
    unsigned short inline_0203f98c_2() const { SDK_NULL_ASSERT(this); return unknown_6_; }
};

struct Struct_0203f98c_2 {
    char unknown_0_[0x2a];
    unsigned short unknown_2a_;
    short unknown_2c_;
    short unknown_2e_;
    char unknown_30_[0x50 - 0x30];
    unsigned int unknown_50_;
};

static inline void inline_0203f98c_3(unsigned int arg0, int arg1) {
    *(volatile unsigned int*)0x040004ac = arg0 >> (4 - (arg1 == 2));
}

static inline void inline_0203f98c_4(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    *(volatile unsigned int*)0x040004a4 = arg0 | (arg1 << 4) | arg2 | arg5 | (arg3 << 24) | (arg4 << 16);
}

// USA: func_0203f98c
extern "C" ARM void func_0203f98c(struct Struct_0203f98c_2* arg0, struct Struct_0203f98c* arg1, unsigned int arg2, unsigned int arg3, unsigned short arg4, unsigned short arg5, unsigned short arg6) {
    *(volatile unsigned int*)0x04000444 = 0;
    *(volatile unsigned int*)0x040004a8 = (arg2 >> 3) | (arg4 << 26) | 0x40000000 | (arg1->inline_0203f98c() << 20) | (arg1->inline_0203f98c_2() << 23) | 0x20000000;
    inline_0203f98c_3(arg3, arg4);
    inline_0203f98c_4(0, 0, 0xc0, arg0->unknown_2e_, arg0->unknown_2c_, 0x8000);

    unsigned int var0 = data_020e79d8[arg1->inline_0203f98c()] << 12;
    unsigned int var1 = data_020e79d8[arg1->inline_0203f98c_2()] << 12;
    unsigned int var2 = arg1->unknown_0_ << 12;
    unsigned int var3 = arg1->unknown_2_ << 12;

    if (arg0->unknown_50_ & 2) {
        var2 = (arg5 << 12) - (var0 + var2);
    }
    if (arg0->unknown_50_ & 4) {
        var3 = (arg6 << 12) - (var1 + var3);
    }

    *(volatile unsigned int*)0x04000470 = var2;
    *(volatile unsigned int*)0x04000470 = var3;
    *(volatile unsigned int*)0x04000470 = 0;
    *(volatile unsigned int*)0x0400046c = var0;
    *(volatile unsigned int*)0x0400046c = var1;
    *(volatile unsigned int*)0x0400046c = 0x1000;
    *(volatile unsigned int*)0x04000500 = 1;
    *(volatile unsigned int*)0x04000480 = arg0->unknown_2a_;

    if (arg0->unknown_50_ & 2) {
        if (arg0->unknown_50_ & 4) {
            func_0203fc28(var0, 0);
            *(volatile unsigned int*)0x04000494 = 0x10000000;
            *(volatile unsigned int*)0x04000488 = 0;
            *(volatile unsigned int*)0x04000494 = 0x10001000;
            func_0203fc28(0, var1);
            *(volatile unsigned int*)0x04000494 = 0x1000;
            func_0203fc28(var0, var1);
            *(volatile unsigned int*)0x04000494 = 0;
        } else {
            func_0203fc28(var0, var1);
            *(volatile unsigned int*)0x04000494 = 0x10000000;
            func_0203fc28(0, var1);
            *(volatile unsigned int*)0x04000494 = 0x10001000;
            *(volatile unsigned int*)0x04000488 = 0;
            *(volatile unsigned int*)0x04000494 = 0x1000;
            func_0203fc28(var0, 0);
            *(volatile unsigned int*)0x04000494 = 0;
        }
    } else {
        if (arg0->unknown_50_ & 4) {
            *(volatile unsigned int*)0x04000488 = 0;
            *(volatile unsigned int*)0x04000494 = 0x10000000;
            func_0203fc28(var0, 0);
            *(volatile unsigned int*)0x04000494 = 0x10001000;
            func_0203fc28(var0, var1);
            *(volatile unsigned int*)0x04000494 = 0x1000;
            func_0203fc28(0, var1);
            *(volatile unsigned int*)0x04000494 = 0;
        } else {
            func_0203fc28(0, var1);
            *(volatile unsigned int*)0x04000494 = 0x10000000;
            func_0203fc28(var0, var1);
            *(volatile unsigned int*)0x04000494 = 0x10001000;
            func_0203fc28(var0, 0);
            *(volatile unsigned int*)0x04000494 = 0x1000;
            *(volatile unsigned int*)0x04000488 = 0;
            *(volatile unsigned int*)0x04000494 = 0;
        }
    }

    *(volatile unsigned int*)0x04000504 = 0;
    *(volatile unsigned int*)0x04000448 = 1;
}
