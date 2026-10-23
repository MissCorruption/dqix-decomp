#include <globaldefs.h>
#include "GameState/GameState.h"

struct Random;
struct Struct_02088514;

struct Struct_ov000_02182b44 {
    short unknown_0_[8];
};

struct Struct_ov000_0215a23c {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

struct Struct_ov000_0215a23c_2 {
    char unknown_0_[0x29c];
    unsigned int unknown_29c_0_ : 4;
    unsigned int unknown_29c_4_ : 5;
    unsigned int unknown_29d_1_ : 23;
    char unknown_2a0_[0x2ac - 0x2a0];
    short unknown_2ac_;
};

struct Struct_ov000_0215a23c_3 {
    char unknown_0_[0x138];
    Struct_ov000_0215a23c* unknown_138_;
#if defined(jpn)
    char unknown_13c_[0x144 - 0x13c];
#else
    char unknown1_13c_[0x150 - 0x13c];
#endif
    unsigned char* unknown_150_;
};

extern "C" {
extern const Struct_ov000_02182b44 data_ov000_02182b44;
extern const Struct_ov000_02182b44 data_ov000_02182b54;
void __clear(void* arg0, int arg1);
int func_ov000_0215e9fc(void* arg0, short* arg1, int arg2, int arg3);
int func_ov000_0215eb1c(void* arg0, short* arg1, int arg2, int arg3);
void func_ov000_0215c758(void* arg0, short* arg1, int arg2, int arg3, short* arg4, short* arg5,
                         unsigned long long* arg6);
short func_ov000_0215a004(void* arg0, int arg1, int arg2, int arg3, unsigned long long* arg4, int arg5, int arg6, int arg7);
int func_ov000_02159dbc(void* arg0, int arg1);
Struct_ov000_0215a23c_3* func_0200fea4(GameState* arg0, int arg1);
Struct_ov000_0215a23c_2* func_02053c6c(Struct_ov000_0215a23c_3* arg0);
}

extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" int func_02085230(unsigned char* arg0);
extern "C" int func_ov000_02158324(GameObject* arg0);
extern "C" int func_ov000_0215830c(GameObject* arg0);
extern "C" int func_0202053c(void* arg0);
extern "C" short func_ov000_0215a16c(void* arg0, int arg1, int arg2, short* arg3);
extern "C" short func_ov000_0215a1d4(void* arg0, int arg1, int arg2, short* arg3);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_02088514(Struct_02088514* arg0);
float NextRandomFloatBetween(Random* random, float minimum, float maximum);

static inline Struct_ov000_0215a23c_3* inline_ov000_021537b8_2(int arg0) {
    GameState* var0 = GameState::GetInstance();
    return (Struct_ov000_0215a23c_3*)var0->GetCombatantByIndex(arg0);
}

static inline Struct_ov000_0215a23c_3* inline_ov000_0215a23c(int arg0) {
    GameState* var0 = GameState::GetInstance();
    return func_0200fea4(var0, arg0);
}

// USA: func_ov000_0215a23c
extern "C" ARM void func_ov000_0215a23c(void* arg0) {
    if (func_ov000_0215fc60((char*)arg0) != 0) {
        return;
    }
    GameState* var0 = GameState::GetInstance();
    Struct_ov000_02182b44 var1 = data_ov000_02182b44;
    short var2[8];
    short var3[8];
    unsigned long long var4[8];
    __clear(var2, sizeof(var2));
    __clear(var3, sizeof(var3));
    __clear(var4, sizeof(var4));
    short* var5 = var2;
    short* var6 = var1.unknown_0_;
    short* var7 = var3;
    unsigned long long* var8 = var4;
    short var9 = 0;
    Struct_ov000_02182b44 var10 = data_ov000_02182b54;
    short* var11 = var10.unknown_0_;
    int var12 = func_ov000_0215e9fc(arg0, var11, 8, 1);

    for (int var13 = 0; var13 < var12; var13++) {
        Struct_ov000_0215a23c_3* var14 = (Struct_ov000_0215a23c_3*)func_0200ff1c(var0, var11[var13]);
        if (var14 != 0) {
            int var15 = 0;
            if (func_02085230(var14->unknown_150_)) {
                var15 += 0x19;
            }
            if (func_ov000_02158324((GameObject*)var14)) {
                int var16 = 10;
                int var17 = func_0202053c(var14) >> 1;
                if (var17 > 10) {
                    var16 = var17;
                }
                var15 += var16;
            }
            if (var15 > 0) {
                var5[var9] = func_ov000_0215a16c(arg0, var11[var13], var15, &var3[var9]);
                var6[var9] = var11[var13];
                var4[var9] = 0;
                var4[var9] |= 0x4000000000ULL;
                if (var3[var9] > 0) {
                    var9++;
                }
            }
        }
    }
    if (var9 > 0) {
        func_ov000_0215c758(arg0, var6, var9, 0, var5, var7, var8);
    }

    var9 = 0;
    for (int var18 = 0; var18 < var12; var18++) {
        Struct_ov000_0215a23c_3* var19 = (Struct_ov000_0215a23c_3*)func_0200ff1c(var0, var11[var18]);
        if (var19 == 0) {
            continue;
        }
        Struct_ov000_0215a23c_2* var20 = func_02053c6c(var19);
        if (var20 == 0) {
            continue;
        }
        int var21 = 0;
        if (func_ov000_0215830c((GameObject*)var19)) {
            var21 = func_0202053c(var19) / 10;
            if (var21 < 3) {
                var21 = 3;
            }
        }
        if (func_02083b00(var19->unknown_150_, 0x3f) && var20->unknown_2ac_ > 0 && var20->unknown_29c_4_ == 3) {
            float var22 = (float)(unsigned int)func_0202053c(var19) / 10.0f;
            var21 += (int)(1.0f + NextRandomFloatBetween((Random*)arg0, 0.0f, var22));
        }
        if (var21 > 0) {
            var5[var9] = func_ov000_0215a1d4(arg0, var11[var18], var21, &var3[var9]);
            var6[var9] = var11[var18];
            var4[var9] |= 0x800000000ULL;
            if (var3[var9] > 0) {
                var9++;
            }
        }
    }
    if (var9 > 0) {
        func_ov000_0215c758(arg0, var6, var9, 1, var5, var7, var8);
    }

    var9 = 0;
    for (int var23 = 0; var23 < var12; var23++) {
        Struct_ov000_0215a23c_3* var24 = inline_ov000_021537b8_2(var11[var23]);
        if (var24 != 0 && func_02088514((Struct_02088514*)var24->unknown_138_)) {
            int var25 = var24->unknown_138_->unknown_4_ >> 4;
            if (var25 > 999) {
                var25 = 999;
            }
            if (var25 <= 0) {
                var25 = 1;
            }
            if (var25 > 0) {
                var4[var9] |= 2;
                var5[var9] = func_ov000_0215a004(arg0, var11[var23], var11[var23], var25, &var4[var9], 0, 0, 1);
                var3[var9] = var25;
                var6[var9] = var11[var23];
                var9++;
            }
        }
    }
    if (var9 > 0) {
        func_ov000_0215c758(arg0, var6, var9, 2, var5, var7, var8);
    }

    var12 = func_ov000_0215eb1c(arg0, var10.unknown_0_, 0x10, 1);
    for (int var26 = 0; var26 < var12; var26++) {
        Struct_ov000_0215a23c_3* var27 = inline_ov000_0215a23c(var11[var26]);
        if (var27 != 0) {
            int var28 = 0;
            short var29 = 0;
            if (func_ov000_0215830c((GameObject*)var27)) {
                var28 = func_ov000_02159dbc(arg0, var11[var26]);
                if (var28 < 3) {
                    var28 = 3;
                }
            }
            func_ov000_0215a1d4(arg0, var11[var26], var28, &var29);
        }
    }

    var9 = 0;
    for (int var30 = 0; var30 < var12; var30++) {
        Struct_ov000_0215a23c_3* var31 = inline_ov000_021537b8_2(var11[var30]);
        if (var31 != 0 && func_02088514((Struct_02088514*)var31->unknown_138_)) {
            int var32 = var31->unknown_138_->unknown_4_ >> 4;
            if (var32 > 999) {
                var32 = 999;
            }
            if (var32 <= 0) {
                var32 = 1;
            }
            if (var32 > 0) {
                var4[var9] |= 2;
                var5[var9] = func_ov000_0215a004(arg0, var11[var30], var11[var30], var32, &var4[var9], 0, 0, 1);
                var3[var9] = var32;
                var6[var9] = var11[var30];
                var9++;
            }
        }
    }
    if (var9 > 0) {
        func_ov000_0215c758(arg0, var6, var9, 2, var5, var7, var8);
    }
}
