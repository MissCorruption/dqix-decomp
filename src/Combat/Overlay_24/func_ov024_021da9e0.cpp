#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021da9e0_3 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 1;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_ov024_021da9e0_5 { unsigned int unknown_0_0_ : 12; unsigned int unknown_1_4_ : 20; };
struct Struct_ov024_021da9e0_6 { unsigned int unknown_0_0_ : 5; unsigned int unknown_0_5_ : 27; };
struct Struct_ov024_021da9e0_7 { unsigned int unknown_0_0_ : 10; unsigned int unknown_1_2_ : 10; unsigned int unknown_2_4_ : 10; unsigned int unknown_3_6_ : 2; };

struct Struct_ov024_021da9e0_8 {
    char unknown_0_[4];
    struct Struct_ov024_021da9e0_5 unknown_4_;
    char unknown_8_[0x10];
    struct Struct_ov024_021da9e0_6 unknown_18_;
    char unknown_1c_[0xc];
    struct Struct_ov024_021da9e0_7 unknown_28_;
};

struct Struct_ov024_021da9e0_9 { int unknown_0_; struct Struct_ov024_021da9e0_9* unknown_4_; };

struct Struct_ov024_021da9e0_10 {
    unsigned long long unknown_0_;
    struct Struct_ov024_021da9e0_9* unknown_8_;
    char unknown_c_[0xa];
    unsigned short unknown_16_;
    char unknown_18_[7];
    unsigned char unknown_1f_;
    struct Struct_ov024_021da9e0_10* unknown_20_;
};

struct Struct_ov024_021da9e0 {
    struct Struct_ov024_021da9e0_10* unknown_0_[3];
    char unknown_c_[0xc];
    unsigned char unknown_18_[3];
    char unknown_1b_;
    struct Struct_ov024_021da9e0_3 unknown_1c_;
    struct Struct_ov024_021da9e0_3 unknown_1d_;
    char unknown_1e_[2];
    unsigned short unknown_20_;
};

struct Struct_ov024_021da9e0_2 {
    int unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    struct Struct_ov024_021da9e0* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x2c];
    struct Struct_ov024_021da9e0* unknown_48_[8];
    struct Struct_ov024_021da9e0_10* unknown_68_;
    char unknown_6c_[2];
    unsigned char unknown_6e_;
    char unknown_6f_;
    unsigned char unknown_70_;
    char unknown_71_[9];
    unsigned char unknown_7a_;
};

extern "C" float func_ov024_021db358(GameObject* arg0);
extern "C" int func_ov000_0215fc60(char*);
extern "C" int func_ov000_0215ffa0(void* arg0);
extern "C" void* func_ov000_0215fff4(void* arg0, int arg1, int arg2);
extern "C" struct Struct_ov024_021da9e0_10* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, GameObject* arg2, int arg3, unsigned long long arg4, int arg5);
extern "C" void func_ov000_0215ffc4(void* arg0, void* arg1, int arg2);
struct Struct_ov024_021da9e0_4;
extern "C" void func_ov024_021eb4e4(Struct_ov024_021da9e0_4*, int);
extern "C" unsigned long long func_ov024_021e4b14(struct Struct_ov024_021da9e0_2* arg0, int arg1, int arg2, struct Struct_ov024_021da9e0_8* arg3, int arg4);
extern "C" int func_ov000_02159f18(void* arg0, unsigned long long arg1, int arg2);
struct Struct_ov000_0215440c_2;
extern "C" struct Struct_ov024_021da9e0* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" struct Struct_ov024_021da9e0_8* func_02079e2c(char*, int);
extern "C" short func_ov000_0215a004(void* arg0, int arg1, int arg2, int arg3, void* arg4, struct Struct_ov024_021da9e0_8* arg5, int arg6, int arg7);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" int func_ov024_021eb08c(struct Struct_ov024_021da9e0_2* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov000_0215a908(void* arg0, int arg1);
extern "C" unsigned short func_ov024_021e9b24(struct Struct_ov024_021da9e0_2* arg0, int arg1, struct Struct_ov024_021da9e0_8* arg2, int arg3);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void func_ov000_0215ccbc(void* arg0, void* arg1, GameObject* arg2, short arg3, short arg4, short arg5, unsigned long long arg6, unsigned char arg7);

static inline int inline_ov024_021da9e0(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

static inline int inline_ov024_021da9e0_2(short arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

static inline unsigned short inline_ov024_021da9e0_3(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }

// USA: func_ov024_021da9e0
extern "C" ARM struct Struct_ov024_021da9e0_10* func_ov024_021da9e0(struct Struct_ov024_021da9e0_2* arg0, short arg1, int arg2, struct Struct_ov024_021da9e0_8* arg3, int arg4, int* arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    float var1 = func_ov024_021db358(var0);
    unsigned short var2 = arg3->unknown_4_.unknown_0_0_;
    if (var2 == 0x150) arg4 = 0;
    if (func_ov000_0215fc60((char*)arg0->unknown_10_) != 0 && var2 == 1 && arg2 == 0) {
        GameObject* var3 = func_0200ff1c(GameState::GetInstance(), 0);
        if (var3) {
            if (func_ov000_0215fc60((char*)arg0->unknown_10_) == 1) {
                unsigned short var4 = var0->currentStats_->primaryStats.currHP;
                arg4 = (int)(0.9f * (float)var4);
                if (var4 <= arg4) arg4 = var4 - 1;
                if (arg4 <= 0) arg4 = 1;
            } else if (func_ov000_0215fc60((char*)arg0->unknown_10_) == 2) {
                arg4 = var3->currentStats_->primaryStats.currHP;
            }
        }
    }
    if (arg0->unknown_7a_ != 0 || arg0->unknown_18_ != 0) {
        int var5 = 0;
        for (int var6 = 0; var6 < 8; var6++) {
            struct Struct_ov024_021da9e0* var7 = arg0->unknown_48_[var6];
            if (!var7) continue;
            if (var7 == arg0->unknown_c_) {
                arg0->unknown_48_[var6] = 0;
                continue;
            }
            if (var7 && func_ov000_0215ffa0(var7) == arg2) {
                for (int var8 = 1; var8 <= 2; var8++) {
                    struct Struct_ov024_021da9e0_10* var9 = var7->unknown_0_[var8];
                    if (!var9) continue;
                    struct Struct_ov024_021da9e0_10** var10 = &var7->unknown_0_[var8];
                    struct Struct_ov024_021da9e0_10* var11 = 0;
                    if (arg0->unknown_c_->unknown_18_[1] != 0)
                        var11 = (struct Struct_ov024_021da9e0_10*)func_ov000_0215fff4(arg0->unknown_c_, arg0->unknown_c_->unknown_18_[1] - 1, 1);
                    while (var9) {
                        struct Struct_ov024_021da9e0_9* var12 = var9->unknown_8_;
                        if (var12) {
                            if (!var11) {
                                var11 = func_ov000_0215e958(arg0->unknown_10_);
                                if (!var11) return 0;
                                func_ov000_0215cd44(arg0->unknown_10_, var11, var0, 0, 0, 0);
                                func_ov000_0215ffc4(arg0->unknown_c_, var11, 1);
                                ((unsigned char*)arg0->unknown_10_)[0x8e02]++;
                            }
                            struct Struct_ov024_021da9e0_9** var13 = &var11->unknown_8_;
                            while (*var13) var13 = &(*var13)->unknown_4_;
                            *var13 = var12;
                            var11->unknown_1f_ += var9->unknown_1f_;
                            var9->unknown_8_ = 0;
                            var9->unknown_1f_ = 0;
                            if (var9->unknown_0_ == 0 && var9->unknown_16_ == 0) {
                                *var10 = var9->unknown_20_;
                                var7->unknown_18_[var8]--;
                            }
                            var10 = &var9->unknown_20_;
                        }
                        var9 = var9->unknown_20_;
                    }
                }
                arg0->unknown_48_[var6] = 0;
                var5 = 1;
            }
        }
        if (var5) func_ov024_021eb4e4((Struct_ov024_021da9e0_4*)arg0, (int)arg0->unknown_c_);
    }
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var14;
    var14.unknown_0_ = 0;
    var14.unknown_4_ = 0;
    int var15 = 1;
    if (arg3->unknown_18_.unknown_0_0_ == 0x14 && arg6 == 0) var15 = 0;
    if (var15) var14.unknown1_0_ = func_ov024_021e4b14(arg0, arg1, arg2, arg3, arg4);
    if (func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 0xe) || func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 0x17))
        arg0->unknown_70_ = 0;
    struct Struct_ov024_021da9e0_10* var16 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var16) return 0;
    short var17 = 0;
    if (!func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 0xd) && !func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 0x29)) {
        struct Struct_ov024_021da9e0_8* var18 = arg3;
        if (arg0->unknown_4_) {
            struct Struct_ov024_021da9e0* var19 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg0->unknown_4_, 0);
            if (var19) {
                if (var19->unknown_20_ != arg1) var18 = 0;
                unsigned int var20 = arg3->unknown_4_.unknown_0_0_;
                if (var20 == 1 || var20 == 2 || var20 == 0xdb || var20 == 0xdf || var20 == 0xe0 || arg0->unknown_c_->unknown_1d_.unknown_0_0_)
                    var18 = func_02079e2c((char*)func_020797dc(), 1);
            }
        }
        var17 = func_ov000_0215a004(arg0->unknown_10_, arg1, arg2, arg4, &var14, var18, arg0->unknown_c_->unknown_1c_.unknown_0_7_ != 0, 0);
    }
    if (arg4 > 0) arg0->unknown_14_++;
    else func_ov000_02159eac(arg0->unknown_10_, &var14, 4);
    if (func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 2) || func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 0xd)) {
        *arg5 |= 2;
        arg0->unknown_c_->unknown_0_[1] = 0;
        arg0->unknown_c_->unknown_18_[1] = 0;
        arg0->unknown_c_->unknown_0_[2] = 0;
        arg0->unknown_c_->unknown_18_[2] = 0;
        if (arg0->unknown_4_ && func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 2) && arg3->unknown_4_.unknown_0_0_ != 0x61) {
            if (inline_ov024_021da9e0(arg2))
                func_ov000_0215a88c(arg0->unknown_10_, var16, (unsigned short)arg3->unknown_28_.unknown_0_0_);
            arg0->unknown_68_ = var16;
        }
    } else if (!func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 0x29)) {
        if (!inline_ov024_021da9e0(arg2) && inline_ov024_021da9e0_2(arg1) && arg4 > 0) {
            int var21 = 0;
            float var22 = func_ov024_021db358(var0);
            if (var1 >= 0.25f && var22 < 0.25f) {
                if (func_ov024_021eb08c(arg0, arg1, arg2, 4)) var21 = 1;
            } else if (var1 >= 0.5f && var22 < 0.5f) {
                if (func_ov024_021eb08c(arg0, arg1, arg2, 3)) var21 = 1;
            }
            if (var21) func_ov000_0215a908(arg0->unknown_10_, arg2);
        }
    }
    if (arg3->unknown_4_.unknown_0_0_ == 0x61) {
        if (arg0->unknown_18_ > 0) func_ov000_0215a88c(arg0->unknown_10_, var16, 0x1f0);
        unsigned short var23;
        if (arg4 > 0) {
            var23 = func_ov024_021e9b24(arg0, arg2, arg3, 0);
        } else {
            struct Struct_ov024_021da9e0* var24 = arg0->unknown_c_;
            if (var24 && (var24->unknown_1c_.unknown_0_1_ || var24->unknown_1c_.unknown_0_2_ || var24->unknown_1c_.unknown_0_3_ || var24->unknown_1c_.unknown_0_4_ || var24->unknown_1c_.unknown_0_5_ || var24->unknown_1c_.unknown_0_6_))
                var23 = 0;
            else
#if defined(jpn)
                var23 = 0x1b;
#else
                var23 = func_ov024_021da644(arg2, 0x26d, 0x1b);
#endif
        }
        if (var23) func_ov000_0215a88c(arg0->unknown_10_, var16, var23);
        if (arg0->unknown_4_ && func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 2)) {
            if (inline_ov024_021da9e0(arg2))
                func_ov000_0215a88c(arg0->unknown_10_, var16, (unsigned short)arg3->unknown_28_.unknown_0_0_);
            else
                func_ov000_0215a88c(arg0->unknown_10_, var16, (unsigned short)arg3->unknown_28_.unknown_1_2_);
            *arg5 |= 2;
            arg0->unknown_c_->unknown_0_[1] = 0;
            arg0->unknown_c_->unknown_18_[1] = 0;
            arg0->unknown_c_->unknown_0_[2] = 0;
            arg0->unknown_c_->unknown_18_[2] = 0;
        }
    }
    if (func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 0xd)) {
        arg4 = 0;
        var17 = 0;
        if (inline_ov024_021da9e0(arg2))
            func_ov000_0215a88c(arg0->unknown_10_, var16, 8);
        else
            func_ov000_0215a88c(arg0->unknown_10_, var16, 0x45);
        arg0->unknown_6e_ = 1;
    } else if (func_ov000_02159f18(arg0->unknown_10_, var14.unknown1_0_, 0x29)) {
        arg4 = 0;
        var17 = 1;
        func_ov000_0215a88c(arg0->unknown_10_, var16, 0xc8);
        arg0->unknown_6e_ = 1;
    }
    func_ov000_0215ccbc(arg0->unknown_10_, var16, var0, arg4, var17, inline_ov024_021da9e0_3(var0), var14.unknown1_0_, arg0->unknown_c_->unknown_1c_.unknown_0_7_ != 0);
    return var16;
}
