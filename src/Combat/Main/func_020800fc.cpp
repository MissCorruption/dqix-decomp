#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_020800fc_3;
struct Struct_020800fc_4 {
    short* unknown_0_;
    unsigned int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    char unknown_14_[4];
};
struct Struct_0207f524 {
    Struct_020800fc_3* unknown_0_;
    short unknown_4_;
};
struct Struct_02012538 {
    Struct_020800fc_4* unknown_0_;
    short unknown_4_;
};
struct Struct_020800fc_2 {
    void* unknown_0_;
    Struct_0207f524 unknown_4_;
    Struct_02012538 unknown_c_;
#if defined(jpn)
    char unknown_14_[0x2f - 0x14];
#else
    char unknown1_14_[0x3b - 0x14];
#endif
    signed char unknown_3b_;
    signed char unknown_3c_;
};

struct Struct_020800fc_3 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x18 - 6];
    struct Struct_020800fc_3* unknown_18_;
    struct Struct_020800fc_3* unknown_1c_;
    struct Struct_020800fc_3* unknown_20_;
    struct Struct_020800fc_3* unknown_24_;
    char unknown_28_[0x2a - 0x28];
    unsigned char unknown_2a_;
};

struct Struct_020800fc {
    unsigned int unknown_0_;
};

extern "C" void* func_020810b4(unsigned char* arg0, short arg1);
extern "C" int func_02080e40(void* arg0, int arg1, int arg2, int arg3);
extern "C" struct Struct_020800fc_3* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);
extern "C" struct Struct_020800fc_3* func_0208036c(void* arg0, struct Struct_020800fc_3* arg1, int arg2, struct Struct_020800fc* arg3, unsigned char arg4);

// USA: func_020800fc
extern "C" ARM int func_020800fc(struct Struct_020800fc_2* arg0, short* arg1, short arg2, int arg3, unsigned char arg4, unsigned char arg5) {
    struct Struct_020800fc var0;
    struct Struct_020800fc_3* var1;
    struct Struct_020800fc_3* var2;
    struct Struct_020800fc_4* var3;
    int var4;
    int var5;
    int var6;

    var0.unknown_0_ = 0;
    *arg1 = arg2;
    if (g_touchInput.pressed_ != 0) {
        var3 = (struct Struct_020800fc_4*)func_020810b4((unsigned char*)arg0, arg2);
        if (var3 != NULL) {
            g_touchInput.GetTouchPoint(&var4, &var5);
            var6 = func_02080e40(arg0, var3->unknown_8_, (short)var4, (short)var5);
            if (var6 >= 0) {
                *arg1 = (short)var6;
            }
            if (arg5 != 0) {
                short var7 = (short)(var3->unknown_a_ + var3->unknown_e_);
                short var8 = (short)(var3->unknown_c_ + var3->unknown_10_);
                if ((short)(var8 << 3) - arg0->unknown_3c_ <= var5 && var5 < (short)(var8 << 3)) {
                    short var9 = (short)(var3->unknown_a_ << 3);
                    if (var9 <= var4 && var4 < var9 + arg0->unknown_3b_) {
                        var0.unknown_0_ |= 0x20;
                    }
                    if ((short)(var7 << 3) - arg0->unknown_3b_ <= var4 && var4 < (short)(var7 << 3)) {
                        var0.unknown_0_ |= 0x10;
                    }
                }
            }
        }
        return var0.unknown_0_;
    }

    if (arg4 == 0) {
        return var0.unknown_0_;
    }
    var2 = func_0207f6ac(&arg0->unknown_4_, *arg1);
    if (var2 == NULL) {
        return var0.unknown_0_;
    }
    var1 = NULL;
    switch (arg3) {
    case 0x10:
        var1 = var2->unknown_24_;
        var0.unknown_0_ |= 8;
        break;
    case 0x20:
        var1 = var2->unknown_20_;
        var0.unknown_0_ |= 4;
        break;
    case 0x40:
        var1 = var2->unknown_18_;
        var0.unknown_0_ |= 1;
        break;
    case 0x80:
        var1 = var2->unknown_1c_;
        var0.unknown_0_ |= 2;
        break;
    }
    if (var1 != NULL) {
        if (var1->unknown_2a_ & 2) {
            var1 = func_0208036c(arg0, var2, arg3, &var0, arg5);
        }
        if (var1 != NULL) {
            *arg1 = var1->unknown_4_;
        }
    } else {
        if (arg4 == 1) {
            var2 = func_0208036c(arg0, var2, arg3, &var0, arg5);
        } else if (arg4 == 2 && arg5 != 0) {
            switch (arg3) {
            case 0x10:
                var0.unknown_0_ |= 0x10;
                break;
            case 0x20:
                var0.unknown_0_ |= 0x20;
                break;
            }
        }
        *arg1 = var2->unknown_4_;
    }
    return var0.unknown_0_;
}
