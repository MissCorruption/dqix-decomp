#include <globaldefs.h>
#include "Resource/ActionDataTables.h"

#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov000_0215d63c_2 {
    char unknown_0_[0xc];
    unsigned short unknown_c_;
    char unknown_e_[0x2a - 0xe];
    short unknown_2a_;
    short unknown_2c_;
    char unknown_2e_[0x36 - 0x2e];
    short unknown_36_;
    char unknown_38_[0x3b - 0x38];
    unsigned char unknown_3b_0_ : 1;
    unsigned char unknown_3b_1_ : 1;
    unsigned char unknown_3b_2_ : 1;
};

struct Struct_ov000_0215ab88 {
    char unknown_0_[0x138];
    Struct_ov000_0215d63c_2* unknown_138_;
    char unknown_13c_[0x184 - 0x13c];
    unsigned char unknown_184_;
};

struct Struct_ov000_0215767c_8 {
    char unknown_0_[0x1c];
    short unknown_1c_;
    short unknown_1e_;
    unsigned short unknown_20_;
    char unknown_22_[0x30 - 0x22];
    int unknown_30_;
};

struct Struct_ov000_0215767c_9 {
    char unknown_0_[0xe];
    short unknown_e_;
    char unknown_10_[0x17 - 0x10];
    unsigned char unknown_17_;
    char unknown_18_[0x24 - 0x18];
};

struct Struct_ov000_0215767c_10 {
    unsigned short unknown_0_;
    char unknown_2_[6];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_[6];
    Struct_ov000_0215767c_8* unknown_10_;
    char unknown_14_[0x28 - 0x14];
};

struct Struct_ov000_0215767c {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    char unknown_6_[0x10 - 8];
    unsigned int unknown_10_;
    char unknown_14_[0x18 - 0x14];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    char unknown_1a_[0x30 - 0x1c];
    short unknown_2e_;
};

struct Struct_ov000_0215d63c {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    char unknown_3_;
    unsigned char unknown_4_;
};

struct Struct_ov000_0215767c_2 {
    char unknown_0_[0x8e00];
    unsigned char unknown_8e00_;
    char unknown_8e01_[0x8e14 - 0x8e01];
    signed char unknown_8e14_;
    char unknown_8e15_[0x8e18 - 0x8e15];
    char* unknown_8e18_;
    char unknown_8e1c_[4];
    int unknown_8e20_;
    int unknown_8e24_;
    char unknown_8e28_[0x8e49 - 0x8e28];
    unsigned char unknown_8e49_;
    char unknown_8e4a_[0x8e70 - 0x8e4a];
    Struct_ov000_0215767c_8* unknown_8e70_;
    Struct_ov000_0215767c_9* unknown_8e74_;
    Struct_ov000_0215767c_10* unknown_8e78_;
    int unknown_8e7c_;
    unsigned char unknown_8e80_;
    unsigned char unknown_8e81_;
};

struct Struct_ov000_02182c74 { short unknown_0_[16]; };
struct Struct_ov000_02182b04 { short unknown_0_[8]; };
struct Struct_ov000_02182a60 { signed char unknown_0_[4]; };
struct Struct_020749ac { int unknown_0_; float unknown_4_; };
struct Struct_ov000_0215d63c_3 { char unknown_0_[0x7c]; };
struct Struct_ov000_0215767c_3 { char unknown_0_[0x678]; };

extern "C" int func_ov000_02153e40(void* arg0, short* arg1, int arg2, int arg3);
void UpdateCombatantAttack(int, int);
void UpdateCombatantDefense(int, int);
void UpdateCombatantAgility(int, int);
void UpdateCombatantCharm(int, int);
void UpdateCombatantMagicalMight(int, int);
void UpdateCombatantMagicalMending(int, int);
extern "C" void func_ov024_021f67f8(void);
extern "C" void __clear(void* arg0, int arg1);
struct Random;
int NextRandomMax(Random*, int);
extern "C" int func_ov000_0215fc60(char*);
float NextRandomFloatBetween(Random*, float, float);
extern "C" void func_020749ac(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" Struct_ov000_0215ab88* func_0200fea4(GameState*, int);
struct Struct_02053dc0;
extern "C" Struct_ov000_0215d63c* func_02053dc0(Struct_02053dc0*);
extern "C" void func_020dc548(signed char arg0, signed char* arg1, signed char* arg2);
extern "C" void func_ov000_02160030(void* arg0);
struct Struct_ov000_02157d14;
extern "C" void func_ov000_02157d14(Struct_ov000_02157d14*);
extern "C" void func_ov000_02157cdc(void* arg0);
extern "C" int func_ov000_02155f9c(void* arg0, int arg1, int arg2);
extern "C" void func_ov024_021f73b8(Struct_ov000_0215767c_3* arg0);
extern "C" void func_ov024_021f9030(Struct_ov000_0215767c_3* arg0, void* arg1, int arg2, Struct_ov000_0215767c_10* arg3);
extern "C" int func_ov000_02159d94(void*, int);
extern "C" void func_0208a910(int* arg0);
extern "C" int func_0208a91c(int* arg0, void* arg1, int arg2, int* arg3, short* arg4);
extern "C" Struct_ov000_0215767c* func_02079e2c(char* arg0, int arg1);
struct Struct_02070b6c_3;
extern "C" void* func_02070fd0(Struct_02070b6c_3*, int);
struct Struct_0204887c;
extern "C" void func_0204887c(Struct_0204887c*, char*);
struct Struct_ov000_0215767c_4;
struct Struct_ov000_0215767c_5;
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*, Struct_ov000_0215767c_4*);
struct Struct_ov000_0215767c_6;
struct Struct_ov000_0215767c_7;
extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*, Struct_ov000_0215767c_6*);
extern "C" int func_ov000_0215f57c(void* arg0, int arg1);
extern "C" void func_ov000_0215f110(char*);
extern "C" void func_ov000_0215f1ac(void* arg0);
struct Struct_02010088;
extern "C" int func_02010088(Struct_02010088*);
struct GameObject;
extern "C" int func_ov000_02153c0c(GameObject*);
extern "C" int func_ov000_021599dc(GameObject*);
extern "C" Struct_ov000_0215767c_10* func_ov000_0215e9d8(void* arg0);
extern "C" Struct_ov000_0215767c_8* func_ov000_0215e918(void* arg0);
struct Struct_ov000_0215440c;
extern "C" Struct_ov000_0215767c_9* func_ov000_021600f8(Struct_ov000_0215440c*, int);
struct Struct_ov000_0215440c_2;
extern "C" Struct_ov000_0215767c_8* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" void func_ov000_0215767c(void* arg0, Struct_ov000_0215767c_10* arg1, Struct_ov000_0215767c_10* arg2);
extern "C" void func_ov024_021eb510(void*);
extern "C" void func_ov024_021eb5d0(Struct_ov000_0215d63c_3* arg0, void* arg1, Struct_ov000_0215767c_10* arg2, Struct_ov000_0215767c_10* arg3, int arg4);
extern "C" void func_ov000_02157d3c(void* arg0, Struct_ov000_0215767c_10* arg1, int arg2);
extern "C" void func_ov000_0215bf5c(void* arg0, Struct_ov000_0215767c_10* arg1);
extern "C" void func_ov000_0215bbbc(void* arg0, Struct_ov000_0215767c_10* arg1);
extern "C" void func_ov000_0215c2d0(void* arg0, Struct_ov000_0215767c_10* arg1);
extern "C" void func_ov000_0215b278(void* arg0, Struct_ov000_0215767c_10* arg1);
extern "C" void func_ov000_0215ae80(void* arg0);
extern "C" void func_ov000_0215b5a0(void* arg0, Struct_ov000_0215767c_10* arg1);
extern "C" void func_ov000_0215ab88(void* arg0);
extern "C" void func_ov000_0215b198(void* arg0);
extern "C" void func_ov000_0215c4cc(void* arg0);

extern Struct_ov000_02182c74 data_ov000_02182d34;
extern Struct_ov000_02182a60 data_ov000_02182a60;
extern Struct_ov000_02182b04 data_ov000_02182ba4;
extern Struct_ov000_02182b04 data_ov000_02182b04;

static inline Struct_ov000_0215ab88* inline_ov000_02153aa4(int arg0) {
    GameState* var0 = GameState::GetInstance();
    return (Struct_ov000_0215ab88*)var0->GetCombatantByIndex(arg0);
}

static inline Struct_ov000_0215ab88* inline_ov000_0215d63c(int arg0) {
    GameState* var0 = GameState::GetInstance();
    return func_0200fea4(var0, arg0);
}

// USA: func_ov000_0215d63c
extern "C" ARM void ProcessCombatTurn(Struct_ov000_0215767c_2* arg0, SafeAllocator* arg1) {
    long var0;
    void* var1 = GameState::GetInstance();
    Struct_02108e10* var2 = func_020797dc();
    Struct_ov000_02182c74 var3 = data_ov000_02182d34;
    long var4 = func_ov000_02153e40(arg0, var3.unknown_0_, 0x10, 1);

    for (long var5 = 0; var5 < var4; var5++) {
        int var6 = var3.unknown_0_[var5];
        UpdateCombatantAttack((int)arg0, var6);
        UpdateCombatantDefense((int)arg0, var6);
        UpdateCombatantAgility((int)arg0, var6);
        UpdateCombatantCharm((int)arg0, var6);
        UpdateCombatantMagicalMight((int)arg0, var6);
        UpdateCombatantMagicalMending((int)arg0, var6);
    }

    func_ov024_021f67f8();

    Struct_020749ac var7[16];
    __clear(var7, sizeof(var7));
    unsigned char var8 = 0;
    for (long var9 = 0; var9 < var4; var9++) {
        short var10 = var3.unknown_0_[var9];
        Struct_ov000_0215ab88* var11 = inline_ov000_02153aa4(var10);
        if (var11 == 0) {
            continue;
        }
        if (arg0->unknown_8e20_ == 0) {
            if (arg0->unknown_8e49_ == 2) {
                int var12 = 0;
                if (var3.unknown_0_[var9] >= 0 && var3.unknown_0_[var9] <= 3) {
                    var12 = 1;
                }
                if (var12) {
                    continue;
                }
                if (var8 != 0 && NextRandomMax((Random*)arg0, 100) >= 0x43) {
                    continue;
                }
            } else if (arg0->unknown_8e49_ == 1) {
                int var13 = 0;
                if (var3.unknown_0_[var9] >= 0 && var3.unknown_0_[var9] <= 3) {
                    var13 = 1;
                }
                if (!var13) {
                    continue;
                }
            }
        }
        if (func_ov000_0215fc60((char*)arg0) != 0) {
            int var14 = var3.unknown_0_[var9];
            int var15 = 0;
            if (!(var14 < 0 || var14 > 3)) {
                var15 = 1;
            }
            if (var15 && var14 != 0) {
                continue;
            }
        }
        var7[var8].unknown_0_ = var3.unknown_0_[var9];
        unsigned int var16 = var11->unknown_138_->unknown_c_;
        var7[var8].unknown_4_ = (float)var16 * NextRandomFloatBetween((Random*)arg0, 0.51f, 1.0f);
        var8++;
    }

    var4 = var8;
    func_020749ac(var7, 0, var8 - 1, 1);
    memset(&var3, 0, sizeof(var3));
    for (var0 = 0; var0 < var4; var0++) {
        var3.unknown_0_[var0] = var7[var0].unknown_0_;
    }

    arg0->unknown_8e70_ = (Struct_ov000_0215767c_8*)arg1->Allocate(0x48 * sizeof(Struct_ov000_0215767c_8));
    arg0->unknown_8e80_ = 0;
    arg0->unknown_8e74_ = (Struct_ov000_0215767c_9*)arg1->Allocate(0x88 * sizeof(Struct_ov000_0215767c_9));
    arg0->unknown_8e81_ = 0;
    arg0->unknown_8e78_ = (Struct_ov000_0215767c_10*)arg1->Allocate(0x48 * sizeof(Struct_ov000_0215767c_10));
    arg0->unknown_8e7c_ = 0;

    for (long var17 = 0; var17 < var4; var17++) {
        int var18 = 0;
        if (var3.unknown_0_[var17] >= 0 && var3.unknown_0_[var17] <= 3) {
            var18 = 1;
        }
        if (var18) {
            Struct_ov000_0215ab88* var19 = (Struct_ov000_0215ab88*)func_0200ff1c((GameState*)var1, var3.unknown_0_[var17]);
            if (var19 != 0) {
                Struct_ov000_0215d63c* var20 = func_02053dc0((Struct_02053dc0*)var19);
                if (var20 != 0 && (var20->unknown_4_ & 1)) {
                    Struct_ov000_02182a60 var21 = data_ov000_02182a60;
                    signed char var22 = 0;
                    func_020dc548(var3.unknown_0_[var17], var21.unknown_0_, &var22);
                    for (unsigned int var23 = 0; var23 < var22; var23++) {
                        Struct_ov000_0215ab88* var24 = (Struct_ov000_0215ab88*)func_0200ff1c((GameState*)var1, var21.unknown_0_[var23]);
                        if (var24 != 0) {
                            Struct_ov000_0215d63c* var25 = func_02053dc0((Struct_02053dc0*)var24);
                            if (var25 != 0) {
                                var25->unknown_4_ |= 1;
                            }
                        }
                    }
                }
            }
        }
    }

    for (long var26 = 0; var26 < var4; var26++) {
        Struct_ov000_0215767c_10* var27 = &arg0->unknown_8e78_[arg0->unknown_8e7c_];
        func_ov000_02160030(var27);
        var27->unknown_8_ = 1;
        var27->unknown_10_ = &arg0->unknown_8e70_[arg0->unknown_8e80_];
        func_ov000_02157d14((Struct_ov000_02157d14*)var27->unknown_10_);
        var27->unknown_10_->unknown_20_ = var3.unknown_0_[var26];

        Struct_ov000_02182b04 var28 = data_ov000_02182ba4;
        int var29 = 0;
        int var30 = 0;
        if (var3.unknown_0_[var26] >= 0 && var3.unknown_0_[var26] <= 3) {
            var30 = 1;
        }
        if (var30) {
            Struct_ov000_0215ab88* var31 = (Struct_ov000_0215ab88*)func_0200ff1c((GameState*)var1, var3.unknown_0_[var26]);
            if (var31 != 0) {
                Struct_ov000_0215d63c* var32 = func_02053dc0((Struct_02053dc0*)var31);
                if (var32 != 0 && (var32->unknown_4_ & 1)) {
                    continue;
                }
            }
        }

        if (func_ov000_02155f9c(arg0, var3.unknown_0_[var26], 1) != 0) {
            var27->unknown_0_ = 0x1f7;
        } else {
            var27->unknown_0_ = 2;
            int var33 = 0;
            if (var3.unknown_0_[var26] >= 0 && var3.unknown_0_[var26] <= 3) {
                var33 = 1;
            }
            if (var33) {
                Struct_ov000_0215ab88* var34 = (Struct_ov000_0215ab88*)func_0200ff1c((GameState*)var1, var3.unknown_0_[var26]);
                if (var34 != 0) {
                    Struct_ov000_0215d63c* var35 = func_02053dc0((Struct_02053dc0*)var34);
                    if (var35 != 0) {
                        var27->unknown_0_ = var35->unknown_0_;
                    }
                    if (var27->unknown_0_ == 0) {
                        continue;
                    }
                    Struct_ov000_0215767c_3 var36;
                    func_ov024_021f73b8(&var36);
                    func_ov024_021f9030(&var36, arg0, var3.unknown_0_[var26], var27);
                    if (var27->unknown_0_ == 0x92) {
                        int var37 = var35->unknown_2_;
                        Struct_ov000_0215ab88* var38 = inline_ov000_02153aa4(var37);
                        if (var38 != 0) {
                            var38->unknown_138_->unknown_2c_ = var3.unknown_0_[var26];
                        }
                        var34->unknown_138_->unknown_2a_ = var35->unknown_2_;
                        var29 = 1;
                        var28.unknown_0_[0] = var35->unknown_2_;
                    }
                }
            } else {
                int var39 = func_ov000_02159d94(arg0, (short)var27->unknown_10_->unknown_20_);
                int var40 = (short)var27->unknown_10_->unknown_20_;
                Struct_ov000_0215ab88* var41 = inline_ov000_0215d63c(var40);
                if (var39 != 2) {
                    int var42;
                    func_0208a910(&var42);
                    var27->unknown_0_ = func_0208a91c(&var42, arg0, (unsigned short)var27->unknown_10_->unknown_20_, &var29, var28.unknown_0_);
                    Struct_ov000_0215767c* var43 = func_02079e2c((char*)var2, (short)var27->unknown_0_);
                    if (var43 != 0) {
                        while (var43->unknown_18_5_ == 0x22) {
                            void* var44 = func_02070fd0((Struct_02070b6c_3*)(arg0->unknown_8e18_ + 0x684), var43->unknown_2e_);
                            if (var44 != 0) {
                                func_0204887c((Struct_0204887c*)var41, (char*)var44);
                                var41->unknown_138_->unknown_36_ = var43->unknown_2e_;
                            }
                            memset(var28.unknown_0_, -1, sizeof(var28));
                            var29 = 0;
                            var27->unknown_0_ = func_0208a91c(&var42, arg0, (unsigned short)var27->unknown_10_->unknown_20_, &var29, var28.unknown_0_);
                            var43 = func_02079e2c((char*)var2, (short)var27->unknown_0_);
                            if (var43 == 0) {
                                break;
                            }
                        }
                    }
                }
                if (var27->unknown_0_ == 0x92 || var27->unknown_0_ == 0x3a1) {
                    Struct_ov000_0215ab88* var45 = inline_ov000_02153aa4(var28.unknown_0_[0]);
                    if (var45 != 0) {
                        var45->unknown_138_->unknown_2c_ = var3.unknown_0_[var26];
                    }
                    var41->unknown_138_->unknown_2a_ = var28.unknown_0_[0];
                }
            }
        }

        var27->unknown_9_ = 0;
        for (int var46 = 0; var46 < var29; var46++) {
            Struct_ov000_0215767c_9* var47 = &arg0->unknown_8e74_[arg0->unknown_8e81_];
            func_ov000_02157cdc(var47);
            var47->unknown_e_ = var28.unknown_0_[var46];
            var47->unknown_17_ = 1;
            func_ov000_021600cc((Struct_ov000_0215767c_5*)var27, (Struct_ov000_0215767c_4*)var47);
            arg0->unknown_8e81_++;
        }
        arg0->unknown_8e7c_++;
        arg0->unknown_8e80_++;

        int var48 = func_ov000_0215f57c(arg0, var3.unknown_0_[var26]);
        for (int var49 = 0; var49 < var48; var49++) {
            Struct_ov000_0215767c_10* var50 = &arg0->unknown_8e78_[arg0->unknown_8e7c_];
            func_ov000_02160030(var50);
            var50->unknown_8_ = 1;
            var50->unknown_10_ = &arg0->unknown_8e70_[arg0->unknown_8e80_];
            func_ov000_02157d14((Struct_ov000_02157d14*)var50->unknown_10_);
            var50->unknown_10_->unknown_20_ = var3.unknown_0_[var26];

            Struct_ov000_02182b04 var51 = data_ov000_02182b04;
            int var52 = 0;
            if (func_ov000_02155f9c(arg0, var3.unknown_0_[var26], 1) != 0) {
                var50->unknown_0_ = 0x1f7;
            } else {
                var50->unknown_0_ = 2;
                int var53 = func_ov000_02159d94(arg0, (short)var50->unknown_10_->unknown_20_);
                Struct_ov000_0215ab88* var54 = func_0200fea4((GameState*)var1, var50->unknown_10_->unknown_20_);
                if (var53 != 2) {
                    int var55;
                    func_0208a910(&var55);
                    var50->unknown_0_ = func_0208a91c(&var55, arg0, (unsigned short)var50->unknown_10_->unknown_20_, &var52, var51.unknown_0_);
                    Struct_ov000_0215767c* var56 = func_02079e2c((char*)var2, (short)var50->unknown_0_);
                    if (var56 != 0) {
                        while (var56->unknown_18_5_ == 0x22) {
                            void* var57 = func_02070fd0((Struct_02070b6c_3*)(arg0->unknown_8e18_ + 0x684), var56->unknown_2e_);
                            if (var57 != 0) {
                                func_0204887c((Struct_0204887c*)var54, (char*)var57);
                                var54->unknown_138_->unknown_36_ = var56->unknown_2e_;
                            }
                            memset(var51.unknown_0_, -1, sizeof(var51));
                            var52 = 0;
                            var50->unknown_0_ = func_0208a91c(&var55, arg0, (unsigned short)var50->unknown_10_->unknown_20_, &var52, var51.unknown_0_);
                            var56 = func_02079e2c((char*)var2, (short)var50->unknown_0_);
                            if (var56 == 0) {
                                break;
                            }
                        }
                    }
                }
                if (var50->unknown_0_ == 0x92 || var50->unknown_0_ == 0x3a1) {
                    Struct_ov000_0215ab88* var58 = inline_ov000_02153aa4(var51.unknown_0_[0]);
                    if (var58 != 0) {
                        var58->unknown_138_->unknown_2c_ = var50->unknown_10_->unknown_20_;
                    }
                    var54->unknown_138_->unknown_2a_ = var51.unknown_0_[0];
                }
            }

            var50->unknown_9_ = 0;
            for (int var59 = 0; var59 < var52; var59++) {
                Struct_ov000_0215767c_9* var60 = &arg0->unknown_8e74_[arg0->unknown_8e81_];
                func_ov000_02157cdc(var60);
                var60->unknown_e_ = var51.unknown_0_[var59];
                var60->unknown_17_ = 1;
                func_ov000_021600cc((Struct_ov000_0215767c_5*)var50, (Struct_ov000_0215767c_4*)var60);
                arg0->unknown_8e81_++;
            }
            arg0->unknown_8e7c_++;
            arg0->unknown_8e80_++;
        }
    }

    func_ov000_0215f110((char*)arg0);
    func_ov000_0215f1ac(arg0);

    for (var0 = 0; var0 < arg0->unknown_8e7c_; var0++) {
        Struct_ov000_0215767c_10* var61 = &arg0->unknown_8e78_[var0];
        int var62 = (short)var61->unknown_10_->unknown_20_;
        Struct_ov000_0215ab88* var63 = inline_ov000_02153aa4(var62);
        if (var63 == 0) {
            continue;
        }
        if (func_02010088((Struct_02010088*)var63) != 0) {
            continue;
        }
        if (var63->unknown_138_->unknown_3b_2_) {
            continue;
        }
        if (func_ov000_02153c0c((GameObject*)var63) != 0) {
            continue;
        }
        if (var63->unknown_138_->unknown_3b_0_) {
            continue;
        }
        int var64 = (var61->unknown_10_->unknown_20_ >= 0 && var61->unknown_10_->unknown_20_ <= 3) ? 1 : 0;
        if (!var64) {
            Struct_ov000_0215ab88* var65 = inline_ov000_0215d63c((short)var61->unknown_10_->unknown_20_);
            if (var65 != 0 && var65->unknown_184_ != 0) {
                continue;
            }
        }

        int var66 = func_ov000_021599dc((GameObject*)var63);
        Struct_ov000_0215767c_10* var67 = func_ov000_0215e9d8(arg0);
        if (var67 == 0) {
            break;
        }
        func_ov000_02160030(var67);
        func_ov000_0215767c(arg0, var61, var67);
        Struct_ov000_0215d63c_3 var68;
        func_ov024_021eb510(&var68);
        func_ov024_021eb510(&var68);
        func_ov024_021eb5d0(&var68, arg0, var67, var61, 0);
        if (func_ov000_02155f9c(arg0, var3.unknown_0_[var0], 1) != 0) {
            var66 = 0;
        }
        func_ov000_02157d3c(arg0, var67, var66);
        arg0->unknown_8e24_++;
        if (arg0->unknown_8e14_ != 0) {
            func_ov000_0215bf5c(arg0, var67);
            func_ov000_0215bbbc(arg0, var67);
            func_ov000_0215c2d0(arg0, var67);
            break;
        }

        func_ov000_0215b278(arg0, var67);
        if (var66 == 0) {
            func_ov000_0215bf5c(arg0, var67);
        }
        func_ov000_0215ae80(arg0);
        func_ov000_0215b5a0(arg0, var67);
        func_ov000_0215ab88(arg0);
        func_ov000_0215b198(arg0);
        if (var66 == 0) {
            func_ov000_0215bbbc(arg0, var67);
            func_ov000_0215c2d0(arg0, var67);
        }
        func_ov000_0215c4cc(arg0);
        if (var66 == 0) {
            continue;
        }

        Struct_ov000_0215767c* var69 = func_02079e2c((char*)func_020797dc(), (short)var67->unknown_0_);
        int var70 = 1;
        if (var69 != 0 && (var69->unknown_10_ & 0x400) && var69->unknown_4_0_ != 0x1c) {
            Struct_ov000_0215767c_10* var71 = &arg0->unknown_8e78_[0x47];
            Struct_ov000_0215767c_10* var72 = func_ov000_0215e9d8(arg0);
            if (var72 != 0) {
                func_ov000_02160030(var72);
                func_ov000_02160030(var71);
                var72->unknown_0_ = var71->unknown_0_ = var67->unknown_0_;
                for (int var73 = 0; var73 < var67->unknown_9_; var73++) {
                    Struct_ov000_0215767c_9* var74 = func_ov000_021600f8((Struct_ov000_0215440c*)var67, var73);
                    int var75 = var74->unknown_e_;
                    Struct_ov000_0215ab88* var76 = inline_ov000_02153aa4(var75);
                    if (var76 == 0) {
                        continue;
                    }
                    if (func_02010088((Struct_02010088*)var76) != 0) {
                        continue;
                    }
                    if (func_ov000_02153c0c((GameObject*)var76) != 0) {
                        break;
                    }
                    Struct_ov000_0215767c_9* var77 = &arg0->unknown_8e74_[arg0->unknown_8e81_];
                    func_ov000_02157cdc(var77);
                    var77->unknown_e_ = var74->unknown_e_;
                    var77->unknown_17_ = 1;
                    func_ov000_021600cc((Struct_ov000_0215767c_5*)var71, (Struct_ov000_0215767c_4*)var77);
                    arg0->unknown_8e81_++;
                }
                for (int var78 = 0; var78 < var67->unknown_8_; var78++) {
                    Struct_ov000_0215767c_8* var79 = func_ov000_02160094((Struct_ov000_0215440c_2*)var67, var78);
                    int var80 = (short)var79->unknown_20_;
                    Struct_ov000_0215ab88* var81 = inline_ov000_02153aa4(var80);
                    if (var81 == 0) {
                        break;
                    }
                    if (func_02010088((Struct_02010088*)var81) != 0) {
                        break;
                    }
                    if (func_ov000_02153c0c((GameObject*)var81) != 0) {
                        break;
                    }
                    Struct_ov000_0215767c_8* var82 = func_ov000_0215e918(arg0);
                    if (var82 == 0) {
                        break;
                    }
                    memset(var82, 0, 0x30);
                    var82->unknown_1c_ = -1;
                    var82->unknown_30_ = 0;
                    var82->unknown_20_ = var79->unknown_20_;
                    func_ov000_02160068((Struct_ov000_0215767c_7*)var72, (Struct_ov000_0215767c_6*)var82);
                    arg0->unknown_8e00_++;
                    var82 = &arg0->unknown_8e70_[arg0->unknown_8e80_];
                    memset(var82, 0, 0x30);
                    var82->unknown_1c_ = -1;
                    var82->unknown_30_ = 0;
                    var82->unknown_20_ = var79->unknown_20_;
                    func_ov000_02160068((Struct_ov000_0215767c_7*)var71, (Struct_ov000_0215767c_6*)var82);
                    arg0->unknown_8e80_++;
                }
                if (var71->unknown_9_ != 0 && var67->unknown_8_ == var72->unknown_8_) {
                    var70 = 0;
                    Struct_ov000_0215d63c_3 var83;
                    func_ov024_021eb510(&var83);
                    func_ov024_021eb510(&var83);
                    func_ov024_021eb5d0(&var83, arg0, var72, var71, 1);
                    func_ov000_02157d3c(arg0, var72, 0);
                    arg0->unknown_8e24_++;
                    if (arg0->unknown_8e14_ == 0) {
                        func_ov000_0215b278(arg0, var67);
                    }
                    func_ov000_0215bf5c(arg0, var67);
                    if (arg0->unknown_8e14_ == 0) {
                        func_ov000_0215ae80(arg0);
                        func_ov000_0215b5a0(arg0, var72);
                        func_ov000_0215ab88(arg0);
                        func_ov000_0215b198(arg0);
                    }
                    func_ov000_0215bbbc(arg0, var72);
                    func_ov000_0215c2d0(arg0, var72);
                    if (arg0->unknown_8e14_ == 0) {
                        func_ov000_0215c4cc(arg0);
                    }
                }
            }
        }
        if (var70) {
            func_ov000_02157d3c(arg0, var67, 0);
            func_ov000_0215bf5c(arg0, var67);
            func_ov000_0215bbbc(arg0, var67);
            func_ov000_0215c2d0(arg0, var67);
        }
        if (arg0->unknown_8e14_ != 0) {
            break;
        }
    }

    arg1->Free(arg0->unknown_8e78_);
    arg1->Free(arg0->unknown_8e74_);
    arg1->Free(arg0->unknown_8e70_);
    arg0->unknown_8e70_ = 0;
    arg0->unknown_8e80_ = 0;
    arg0->unknown_8e74_ = 0;
    arg0->unknown_8e81_ = 0;
    arg0->unknown_8e78_ = 0;
    arg0->unknown_8e7c_ = 0;
}
