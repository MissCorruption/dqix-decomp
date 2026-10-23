#include <globaldefs.h>

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern "C" int func_020d6884(void*, int, int, int);
extern "C" int func_020ca3b8(int, int, int);
extern "C" void func_020ca390(int, void*, unsigned int);
unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);

struct Struct_020d6610 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[0x1fc];
};

struct Struct_020d6610_2 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[4];
    unsigned short unknown_e_;
    unsigned short unknown_10_;
    unsigned char unknown_12_[6];
    unsigned short unknown_18_;
};

struct Struct_020d5fd0 {
    struct Struct_020d6610 unknown_0_[4];
    struct Struct_020d6610_2 unknown_800_;
};

// USA: func_020d6610
extern "C" ARM void func_020d6610(struct Struct_020d5fd0* arg0, int arg1, int arg2) {
    unsigned short var0 = (unsigned short)(1 << arg1);
    unsigned short var1 = arg0->unknown_800_.unknown_e_;
    if (!(var1 & var0)) return;
    int var2 = arg0->unknown_800_.unknown_8_;
    if (!(arg0->unknown_0_[var2].unknown_0_ & var0)) {
        if (arg0->unknown_800_.unknown_18_ != 1) return;
        var2 = (var2 + 1) & 3;
        if (!(arg0->unknown_0_[var2].unknown_0_ & var0)) return;
    }
    int var3 = func_020d6884(arg0, var1, (int)&arg0->unknown_0_[var2] + 4, arg1);
    if (arg2 != 0) {
        func_020ca3b8(arg2, var3, arg0->unknown_800_.unknown_10_);
    } else {
        func_020ca390(0, (void*)var3, arg0->unknown_800_.unknown_10_);
    }
    unsigned int var4 = DisableIRQInterrupts();
    arg0->unknown_0_[var2].unknown_0_ &= ~var0;
    arg0->unknown_0_[var2].unknown_2_ |= var0;
    SetIRQInterruptState(var4);
}
