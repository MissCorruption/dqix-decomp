#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
struct Random;

struct Struct_ov024_021e9f68 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x21 - 0x18];
    unsigned char unknown_21_;
};

struct Struct_ov024_021e9f68_2 {
    char unknown_0_[0x138];
    struct Struct_ov024_021e9f68* unknown_138_;
#if defined(jpn)
    char unknown_13c_[0x144 - 0x13c];
#else
    char unknown1_13c_[0x150 - 0x13c];
#endif
    unsigned char* unknown_150_;
};

struct Struct_ov024_021e9f68_3 {
    char unknown_0_[0xc];
    void* unknown_c_;
    struct Random* unknown_10_;
    char unknown_14_[0x20 - 0x14];
    short unknown_20_[4];
    short unknown_28_[8];
    unsigned char unknown_38_[4];
    unsigned char unknown_3c_[8];
    char unknown_44_[0x76 - 0x44];
    unsigned char unknown_76_;
    unsigned char unknown_77_;
};

struct Struct_ov024_021e9f68_4 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
};

struct Struct_ov024_021fe708 {
    short unknown_0_[8];
};

extern const struct Struct_ov024_021fe708 data_ov024_021fe768;
extern const struct Struct_ov024_021fe708 data_ov024_021fe708;

struct Struct_ov024_021e9f68_2* GetCombatantByID(int, int);
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov024_021e6798(GameObject*);
struct GameObject;
extern "C" int func_ov024_021e7ba8(GameObject*);
extern "C" void func_ov000_0215ff50(void* arg0, short arg1, unsigned char arg2);
extern "C" int func_02085474(unsigned char* arg0);
int NextRandomMax(struct Random* random, int maximum);
extern "C" int func_ov000_02155f9c(struct Random* arg0, int arg1, int arg2);
extern "C" int func_ov024_021ea500(struct Struct_ov024_021e9f68_3* arg0, struct Struct_ov024_021e9f68_4* arg1, int arg2);
extern "C" int func_ov000_0215eb1c(struct Random* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215e9fc(struct Random* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_02156558(struct Random* arg0, int arg1);

static inline int inline_ov024_021e9f68(struct Struct_ov024_021e9f68_2* arg0, int arg1) {
    return arg0->unknown_138_->unknown_21_ == arg1;
}

// USA: func_ov024_021e9f68
extern "C" ARM int func_ov024_021e9f68(struct Struct_ov024_021e9f68_3* arg0, short* arg1, short* arg2, struct Struct_ov024_021e9f68_4* arg3,
                                       unsigned char* arg4) {
    struct Struct_ov024_021e9f68_2* var0;
    GameState* var1;
    short var2;
    void* var3;
    struct Random* var4;
    unsigned char* var5;
    short* var6;
    if (arg0->unknown_c_ == 0) {
        return 0;
    }
    var0 = GetCombatantByID((int)arg0->unknown_10_, *arg2);
    if (!var0) {
        return 0;
    }
    if (func_02010088((struct Struct_02010088*)var0) || func_ov024_021e6798((GameObject*)var0)) {
        return 0;
    }
    var1 = GameState::GetInstance();
    var4 = arg0->unknown_10_;
    var2 = *arg1;
    var3 = arg0->unknown_c_;
    *arg4 = 0;
    if (func_ov024_021e7ba8((GameObject*)var0)) {
        return 0;
    }
    if ((arg3->unknown_10_ & 0x400) && arg3->unknown_9_0_ == 1 && *arg1 != *arg2) {
        if (var0->unknown_138_->unknown_14_ & 0x200) {
            func_ov000_0215ff50(var3, *arg1, 1);
            *arg1 = *arg2;
            *arg2 = var2;
            arg0->unknown_76_ = 0;
            *arg4 = 1;
            return 0;
        }
        int var7 = *arg2 >= 0 && *arg2 <= 3;
        if (var7) {
            struct Struct_ov024_021e9f68_2* var8 = (Struct_ov024_021e9f68_2*)func_0200ff1c(var1, *arg2);
            if (var8 && func_02085474(var8->unknown_150_) && NextRandomMax(var4, 4) == 0) {
                func_ov000_0215ff50(var3, *arg1, 1);
                *arg1 = *arg2;
                *arg2 = var2;
                arg0->unknown_76_ = 0;
                *arg4 = 1;
                return 0;
            }
        }
    }
    if ((arg3->unknown_10_ & 4) && arg3->unknown_9_0_ == 1 && (var0->unknown_138_->unknown_14_ & 0x4000000)) {
        func_ov000_0215ff50(var3, *arg1, 2);
        *arg1 = *arg2;
        *arg2 = var2;
        arg0->unknown_76_ = 0;
        return 0;
    }
    if (func_ov000_02155f9c(arg0->unknown_10_, *arg2, 0)) {
        return 0;
    }
    int var9 = 0;
    int var10 = *arg2;
    if (var10 >= 0 && var10 <= 3) {
        var9 = 1;
    }
    if (var9) {
        var5 = &arg0->unknown_38_[*arg2];
        var6 = &arg0->unknown_20_[*arg2];
    } else {
        var5 = &arg0->unknown_3c_[var10 - 0xc0];
        var6 = &arg0->unknown_28_[var10 - 0xc0];
    }
    int var11 = func_ov024_021ea500(arg0, arg3, *arg1);
    if ((arg3->unknown_10_ & 0x80) && var11 == 0) {
        if (inline_ov024_021e9f68(var0, 4)) {
            func_ov000_0215ff50(var3, *arg1, 3);
            *arg1 = *arg2;
            *arg2 = var2;
            arg0->unknown_76_ = 0;
            *var5 = 1;
            return 1;
        }
        if (inline_ov024_021e9f68(var0, 5)) {
            struct Struct_ov024_021fe708 var12 = data_ov024_021fe768;
            int var13 = *arg2 >= 0 && *arg2 <= 3;
            int var14;
            if (var13) {
                var14 = func_ov000_0215eb1c(arg0->unknown_10_, var12.unknown_0_, 8, 1);
            } else {
                var14 = func_ov000_0215e9fc(arg0->unknown_10_, var12.unknown_0_, 8, 1);
            }
            if (*var6 < 0) {
                *var6 = var12.unknown_0_[NextRandomMax(var4, var14)];
            }
            func_ov000_0215ff50(var3, *var6, 4);
            *arg1 = *arg2;
            *arg2 = *var6;
            arg0->unknown_76_ = 0;
            arg0->unknown_77_ = 1;
            return 0;
        }
        if (inline_ov024_021e9f68(var0, 9)) {
            int var15 = NextRandomMax(var4, 5);
            struct Struct_ov024_021fe708 var16 = data_ov024_021fe708;
            int var17 = *arg2 >= 0 && *arg2 <= 3;
            int var18;
            if (var17) {
                if (var15 < 2) {
                    var18 = func_ov000_0215e9fc(arg0->unknown_10_, var16.unknown_0_, 8, 1);
                } else {
                    var18 = func_ov000_0215eb1c(arg0->unknown_10_, var16.unknown_0_, 8, 1);
                }
            } else {
                if (var15 < 2) {
                    var18 = func_ov000_0215eb1c(arg0->unknown_10_, var16.unknown_0_, 8, 1);
                } else {
                    var18 = func_ov000_0215e9fc(arg0->unknown_10_, var16.unknown_0_, 8, 1);
                }
            }
            if (*var6 < 0) {
                *var6 = var16.unknown_0_[NextRandomMax(var4, var18)];
            }
            if (*arg2 == *var6) {
                func_ov000_0215ff50(var3, *var6, 10);
            } else {
                func_ov000_0215ff50(var3, *var6, 5);
                *arg1 = *arg2;
                arg0->unknown_76_ = 0;
                arg0->unknown_77_ = 1;
            }
            *arg2 = *var6;
            return 0;
        }
        int var19 = *arg2 >= 0 && *arg2 <= 3;
        if (var19) {
            struct Random* var20 = arg0->unknown_10_;
            if (*var5 == 0) {
                if (!func_ov000_02156558(var20, *arg2)) {
                    *var5 = 2;
                    return 0;
                }
                func_ov000_0215ff50(var3, *arg1, 3);
                *arg1 = *arg2;
                *arg2 = var2;
                *var5 = 1;
                arg0->unknown_76_ = 0;
                return 1;
            } else if (*var5 == 1) {
                func_ov000_0215ff50(var3, *arg1, 3);
                *arg1 = *arg2;
                *arg2 = var2;
                arg0->unknown_76_ = 0;
                return 1;
            }
        }
    }
    return 0;
}
