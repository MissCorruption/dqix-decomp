#if defined(jpn)

#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov000_02171ffc func_ov000_02173834
#endif
#include "GameState/GameState.h"

struct Struct_02054000;
extern "C" void* func_02054000(struct Struct_02054000* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);

struct Struct_ov000_02171ffc {
    unsigned int unknown_0_0_ : 1;
    unsigned int unknown_0_1_ : 1;
    unsigned int unknown_0_2_ : 30;
};

struct Struct_ov000_02171ffc_2 {
    char unknown_0_[0x2f4];
    struct Struct_ov000_02171ffc unknown_2f4_;
};

struct Struct_ov000_02171ffc_3 {
    char unknown_0_[LOW_REGION(0x144, 0x150)];
    struct Struct_ov000_02171ffc_2* unknown_150_;
};

struct Struct_ov000_02171ffc_4 {
    char unknown_0_[0x18];
    short unknown_18_;
};

struct Struct_ov000_0215767c_8 {
    char unknown_0_[0x16];
    short unknown_16_;
};

struct Struct_ov000_02171ffc_5 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    char unknown_c_[0x14 - 0xc];
    unsigned int unknown_14_0_ : 28;
    unsigned int unknown_17_4_ : 4;
};

struct Struct_ov000_0215ab88 {
    char unknown_0_[0x1c];
    signed char unknown_1c_;
    char unknown_1d_[0x26 - 0x1d];
    short unknown_26_;
    char unknown_28_[0x2c - 0x28];
    short unknown_2c_;
    char unknown_2e_[0x4c - 0x2e];
    int unknown_4c_;
};

extern "C" struct Struct_ov000_0215767c_8* func_ov000_02171d90(struct Struct_ov000_0215ab88* arg0, int arg1);
extern "C" struct Struct_ov000_02171ffc_5* func_ov000_02170cf8(struct Struct_ov000_0215ab88* arg0, int arg1);

// USA: func_ov000_02171ffc
extern "C" ARM int func_ov000_02171ffc(struct Struct_ov000_0215ab88* arg0) {
    struct Struct_ov000_02171ffc_3* var0 = (struct Struct_ov000_02171ffc_3*)func_0200ff1c(GameState::GetInstance(), arg0->unknown_4c_);
    if (var0 == 0) {
        return 2;
    }
    short var1 = arg0->unknown_26_;
    int var2 = 2;
    if (arg0->unknown_1c_ == 4) {
        struct Struct_ov000_0215767c_8* var3 = func_ov000_02171d90(arg0, arg0->unknown_2c_);
        if (var3 == 0) {
            return var2;
        }
        var1 = var3->unknown_16_;
    }
    if (var1 == 0x20a) {
        return 3;
    }
    struct Struct_ov000_02171ffc_5* var4 = func_ov000_02170cf8(arg0, (unsigned short)var1);
    if (var4 == 0) {
        return 2;
    }
    if (var1 == 1) {
        if (var0 != 0) {
            struct Struct_ov000_02171ffc_4* var5 = (struct Struct_ov000_02171ffc_4*)func_02054000((struct Struct_02054000*)var0);
            if (var5 != 0 && var5->unknown_18_ > 0) {
                struct Struct_ov000_02171ffc* var6 = &var0->unknown_150_->unknown_2f4_;
                if (var6->unknown_0_1_) {
                    var2 = 3;
                } else if (var6->unknown_0_0_) {
                    var2 = 4;
                }
            }
        }
    } else {
        int var7 = var4->unknown_9_0_;
        if (var7 == 1) {
            var2 = var4->unknown_17_4_;
        } else if (var7 == 2) {
            var2 = var4->unknown_17_4_;
        }
    }
    if (var2 == 6 && var0 != 0) {
#if defined(jpn)
        var2 = func_02083b00((unsigned char*)var0->unknown_150_, 0xe6) ? 3 : 2;
#else
        var2 = 2;
        if (func_02083b00((unsigned char*)var0->unknown_150_, 0xe6)) {
            var2 = 3;
        }
#endif
    }
    return var2;
}
