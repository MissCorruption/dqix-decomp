#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" char *func_020421a0(void);
extern "C" char *func_02012fe4(void);
extern "C" void *func_0205ec34(void);
extern "C" void func_ov003_02170960(void *arg0, int arg1, int arg2);
#if defined(jpn)
extern "C" void func_ov003_021701e4(void *arg0, int arg1);
#endif

struct Struct_ov003_0216efdc_2;
struct Struct_ov003_0216efdc_3;
extern "C" Struct_ov003_0216efdc_3 *func_ov003_0216f414(Struct_ov003_0216efdc_2 *arg0, int arg1);
extern "C" int func_0206dfb0(int arg0, unsigned char *arg1, int arg2);
extern "C" void func_0206df6c(void *arg0, unsigned char *arg1, int arg2, int arg3);

struct Struct_ov003_0216efdc_3 {
    unsigned char unknown_0_[0x16];
    unsigned char unknown_16_;
};

struct Struct_ov003_0216efdc_4 {
#if defined(jpn)
    char unknown_0_[0x868];
#else
    char unknown1_0_[0x998];
#endif
    int unknown_998_;
    char unknown_99c_[4];
    int unknown_9a0_;
};

struct Struct_ov003_0216efdc_5 {
    unsigned char unknown_0_[0xb38];
    int unknown_b38_;
};

struct Struct_02010604_4 {
    volatile unsigned short unknown_0_0_ : 2;
    volatile unsigned short unknown_0_2_ : 14;
};

struct Struct_ov003_0216efdc {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    signed char unknown_2_;
    char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    signed char unknown_6_;
    signed char unknown_7_;
    unsigned char unknown_8_;
    signed char unknown_9_;
    char unknown_a_[2];
    short unknown_c_;
    short unknown_e_;
    char unknown_10_[0x20 - 0x10];
    unsigned short unknown_20_;
    char unknown_22_[0xd4 - 0x22];
    void *unknown_d4_;
};

#if defined(jpn)
enum { Enum_ov003_0216efdc_6208 = 0x1860 };
#else
enum { Enum_ov003_0216efdc_6208 = 0x1840 };
#endif

// USA: func_ov003_0216efdc
extern "C" ARM void func_ov003_0216efdc(Struct_ov003_0216efdc *arg0) {
    Struct_ov003_0216efdc_4 *var0     = (Struct_ov003_0216efdc_4 *) func_020421a0();
    Struct_ov003_0216efdc_5 *var1 = (Struct_ov003_0216efdc_5 *) (func_02012fe4() + Enum_ov003_0216efdc_6208);
    int var2                = var1->unknown_b38_;
    int var3                  = arg0->unknown_2_;
    if (var3 == 0) {
        volatile unsigned short *var4 = (volatile unsigned short *) 0x4000008;
        var4[0]                       = (var4[0] & ~3);
        var4[1]                       = (var4[1] & ~3) | 1;
        var4[2]                       = (var4[2] & ~3) | 2;
        var4[3]                       = (var4[3] & ~3) | 3;
        if (arg0->unknown_d4_ != 0) {
            Struct_ov003_0216efdc_3 *var5 = func_ov003_0216f414((Struct_ov003_0216efdc_2 *) arg0->unknown_d4_, 0x19);
            if (var5 != 0) {
                var5->unknown_16_ |= 2;
            }
            var5 = func_ov003_0216f414((Struct_ov003_0216efdc_2 *) arg0->unknown_d4_, 0x1a);
            if (var5 != 0) {
                var5->unknown_16_ &= ~2;
            }
        }
        void *var6 = func_0205ec34();
        if (func_0206dfb0((int) var6, (unsigned char *) var6 + 0x8c, 0x783) != 0) {
            arg0->unknown_2_ = 1;
            return;
        }
        func_0206df6c(var6, (unsigned char *) var6 + 0x8c, 0x783, 1);
#if defined(jpn)
        func_ov003_021701e4(arg0, 0x1f);
#else
        func_ov003_02170960(arg0, 0x1f, 0);
#endif
        var0->unknown_998_ = 1;
        arg0->unknown_20_ |= 1;
        arg0->unknown_2_ = 0x65;
    } else if (var3 == 0x65) {
        if (var0->unknown_9a0_ == 0 && var0->unknown_998_ == 0) {
            arg0->unknown_2_ = 1;
        }
    } else if (var3 == 1) {
        if (g_keyManager.TestKeysPressed(2) != 0 || arg0->unknown_e_ == 5) {
            arg0->unknown_1_  = 6;
            arg0->unknown_2_ = 0;
            return;
        }
        if (var2 == 0) {
            return;
        }
        if (g_keyManager.TestKeyRepeat(0x10) != 0 || arg0->unknown_e_ == 0x11) {
            arg0->unknown_0_++;
            if (arg0->unknown_0_ > arg0->unknown_4_) {
                arg0->unknown_0_ = 1;
            }
            int var7;
            if (arg0->unknown_0_ == arg0->unknown_4_ && (var7 = var2 % 8) != 0) {
                arg0->unknown_5_ = var7;
            } else {
                arg0->unknown_5_ = 8;
            }
            if (arg0->unknown_6_ > arg0->unknown_5_ - 1) {
                arg0->unknown_6_ = arg0->unknown_5_ - 1;
            }
            arg0->unknown_7_  = -1;
            arg0->unknown_1_  = 2;
            arg0->unknown_2_ = 0;
        } else if (g_keyManager.TestKeyRepeat(0x20) != 0 || arg0->unknown_e_ == 0x10) {
            arg0->unknown_0_--;
            if (arg0->unknown_0_ < 1) {
                arg0->unknown_0_ = arg0->unknown_4_;
            }
            int var8;
            if (arg0->unknown_0_ == arg0->unknown_4_ && (var8 = var2 % 8) != 0) {
                arg0->unknown_5_ = var8;
            } else {
                arg0->unknown_5_ = 8;
            }
            if (arg0->unknown_6_ > arg0->unknown_5_ - 1) {
                arg0->unknown_6_ = arg0->unknown_5_ - 1;
            }
            arg0->unknown_7_  = -1;
            arg0->unknown_1_  = 2;
            arg0->unknown_2_ = 0;
        } else if (g_keyManager.TestKeyRepeat(0x80) != 0) {
            arg0->unknown_6_ = arg0->unknown_6_ + 1;
            if (arg0->unknown_6_ > arg0->unknown_5_ - 1) {
                arg0->unknown_6_ = 0;
            }
            arg0->unknown_7_  = -1;
            arg0->unknown_1_  = 2;
            arg0->unknown_2_ = 0;
        } else if (g_keyManager.TestKeyRepeat(0x40) != 0) {
            arg0->unknown_6_ = arg0->unknown_6_ - 1;
            if (arg0->unknown_6_ < 0) {
                arg0->unknown_6_ = arg0->unknown_5_ - 1;
                if (arg0->unknown_6_ < 0) {
                    arg0->unknown_6_ = 0;
                }
            }
            arg0->unknown_7_  = -1;
            arg0->unknown_1_  = 2;
            arg0->unknown_2_ = 0;
        } else {
            int var9 = -2;
            if (arg0->unknown_e_ <= 0xd) {
                if (arg0->unknown_e_ >= 6) {
                    var9 = arg0->unknown_e_ - 6;
                }
            }
            if (g_keyManager.TestKeysPressed(0x401) != 0 || var9 == arg0->unknown_7_) {
                arg0->unknown_8_  = 0;
                arg0->unknown_9_  = -1;
                arg0->unknown_1_  = 5;
                arg0->unknown_2_ = 0;
                return;
            }
            if (arg0->unknown_c_ > 0xd) {
                return;
            }
            if (arg0->unknown_c_ < 6) {
                return;
            }
            if (g_touchInput.IsPressed() == 0) {
                return;
            }
            arg0->unknown_6_ = arg0->unknown_c_ - 6;
            if (arg0->unknown_6_ > arg0->unknown_5_ - 1) {
                arg0->unknown_6_ = arg0->unknown_5_ - 1;
            }
            if (arg0->unknown_7_ != arg0->unknown_6_) {
                arg0->unknown_7_  = arg0->unknown_6_;
                arg0->unknown_1_  = 2;
                arg0->unknown_2_ = 0;
                return;
            }
        }
    }
}
