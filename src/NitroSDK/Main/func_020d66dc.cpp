#include <globaldefs.h>

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);
extern "C" unsigned short func_020d46fc(void);
extern "C" void func_020ca390(int, void*, unsigned int);
extern "C" int func_020d59bc(void* arg0, void* arg1, void* arg2, unsigned short arg3, unsigned short arg4, unsigned short arg5, int arg6);
extern "C" int func_020d6318(void*);

struct Struct_020d66dc {
    unsigned short unknown_0_[4];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_[2];
    unsigned short unknown_e_;
    unsigned char unknown_10_[4];
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    unsigned short unknown_18_;
    unsigned char unknown_1a_[2];
    unsigned short unknown_1c_;
};

struct Struct_020d66dc_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[0x1fe];
};

struct Struct_020d5fd0_2 {
    Struct_020d66dc_2 unknown_0_[4];
    Struct_020d66dc unknown_800_;
};

// USA: func_020d66dc
extern "C" ARM void func_020d66dc(Struct_020d5fd0_2* arg0, int arg1) {
    unsigned int var0 = DisableIRQInterrupts();
    if (arg0->unknown_0_[arg0->unknown_800_.unknown_8_].unknown_0_ == 0) {
        unsigned short var1 = func_020d46fc();
        unsigned short var2 = arg0->unknown_800_.unknown_8_;
        unsigned short var3 = (var2 + 1) & 3;
        int var4 = (arg0->unknown_800_.unknown_18_ == 1) ? ((var3 + 1) & 3) : var3;

        func_020ca390(0, &arg0->unknown_0_[var4], 0x200);

        arg0->unknown_0_[var4].unknown_0_ = arg0->unknown_800_.unknown_e_ & (var1 | 1);
        arg0->unknown_800_.unknown_8_ = var3;
        unsigned short var5 = arg0->unknown_800_.unknown_e_;
        arg0->unknown_0_[var2].unknown_0_ = var5;
        if (arg1 == 1) {
            arg0->unknown_0_[var2].unknown_0_ &= ~1;
        }

        SetIRQInterruptState(var0);

        unsigned short var6 = (unsigned short)(arg0->unknown_800_.unknown_e_ & var1);
        unsigned short var7 = arg0->unknown_800_.unknown_16_;
        unsigned short var8 = arg0->unknown_800_.unknown_14_;
        int var9 = func_020d59bc((void*)func_020d6318, arg0, &arg0->unknown_0_[var2], var8, var6, var7, 1);

        if (var9 == 7) {
            arg0->unknown_800_.unknown_0_[var2] = 0xffff;
            arg0->unknown_800_.unknown_a_ = (arg0->unknown_800_.unknown_a_ + 1) & 3;
        } else {
            if (var9 == 0 || var9 == 2) {
                return;
            }
            arg0->unknown_800_.unknown_1c_ = 5;
        }
    } else {
        SetIRQInterruptState(var0);
    }
}
