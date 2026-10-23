#include "Resource/ActionDataTables.h"
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "NitroSDK/Matrix.h"

#if defined(jpn)
enum { Enum_ov025_021e3178_12 = 0x4, Enum_ov025_021e3178_336 = 0x144, Enum_ov025_021e3178_28629 = 0x71c5 };
#else
enum { Enum_ov025_021e3178_12 = 0xc, Enum_ov025_021e3178_336 = 0x150, Enum_ov025_021e3178_28629 = 0x6fd5 };
#endif

struct Struct_ov025_021e3178_5 { int unknown_0_, unknown_4_, unknown_8_; };

struct Struct_ov025_021e3178_6 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    int unknown_c_;
};

struct Struct_ov025_021e3178_7 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
    char unknown_22_[0xe];
    struct Struct_ov025_021e3178_7* unknown_30_;
};

struct Struct_ov025_021e3178_8 {
    struct Struct_ov025_021e3178_8* unknown_0_;
    char unknown_4_[0xa];
    short unknown_e_;
    char unknown_10_[0xb];
    unsigned char unknown_1b_;
    char unknown_1c_[4];
    struct Struct_ov025_021e3178_8* unknown_20_;
};

struct Struct_ov025_021e3178_9 {
    short unknown_0_;
    char unknown_2_[2];
    short unknown_4_;
    char unknown_6_[2];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_[6];
    struct Struct_ov025_021e3178_7* unknown_10_;
    struct Struct_ov025_021e3178_8* unknown_14_;
    unsigned short unknown_18_;
};

struct Struct_ov025_021e3178 {
    char unknown_0_[0x14];
    unsigned char unknown_14_[3];
    unsigned char unknown_17_;
    char unknown_18_[4];
    unsigned char unknown_1c_;
    char unknown_1d_[3];
    unsigned short unknown_20_;
    char unknown_22_[4];
    unsigned char unknown_26_[6];
};

static inline unsigned char* inline_02000c9c_9(Struct_ov025_021e3178* arg0) { return arg0->unknown_14_; }

struct Struct_ov025_021e3178_2 {
    char unknown_0_[0x18];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    unsigned int unknown_19_4_ : 20;
};

struct Struct_ov025_021e3178_3 {
    char unknown_0_[6];
    unsigned short unknown_6_;
    char unknown_8_[4];
};

struct Struct_ov025_021e3178_4 {
    char unknown_0_[Enum_ov025_021e3178_336];
    unsigned char* unknown_150_;
};

extern int data_ov025_021ef988;
extern int data_ov025_021eef40[];

extern "C" void func_ov025_021eb044(void* arg0, ...);
extern "C" int func_ov000_0215fd90(void* arg0, unsigned char arg1);
extern "C" void func_ov000_02162c14(void* arg0, int arg1, struct Struct_ov025_021e3178_3* arg2);
extern "C" void* func_ov000_02160130(void);
extern "C" struct Struct_ov025_021e3178_2* func_02079e2c(char*, int);
struct Struct_ov000_0215440c_2;
extern "C" struct Struct_ov025_021e3178* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
struct Struct_ov000_0215440c;
extern "C" struct Struct_ov025_021e3178* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" struct Struct_ov025_021e3178* func_ov000_0215feb4(char*, int, int);
extern "C" void* func_ov000_0215fff4(void* arg0, int arg1, int arg2);
extern "C" int func_020850d0(unsigned char* arg0);
extern "C" void __clear(void* arg0, int arg1);

#define NOTIFY() func_ov025_021eb044(*(void**)((char*)&data_ov025_021ef988 + Enum_ov025_021e3178_12), arg0->unknown_8_)

// USA: func_ov025_021e3178
extern "C" ARM int func_ov025_021e3178(struct Struct_ov025_021e3178_6* arg0, struct Struct_ov025_021e3178_9* arg1) {
    GameState* var0 = GameState::GetInstance();
    if (arg0->unknown_8_ == 0) return 1;
    switch (arg0->unknown_a_) {
    case 1:
    case 2:
    case 3:
    case 4: {
        Vector3fix var1;
        struct Struct_ov025_021e3178_7* var2;
        void* var3;
        int var4;
        int var5;
        __clear(&var1, 0xc);
        var4 = 0;
        var5 = 0;
        for (var2 = arg1->unknown_10_; var2; var2 = var2->unknown_30_) {
            var3 = var0->GetGameObjectByIndex(var2->unknown_20_);
            if (var3) {
                Struct_ov025_021e3178_5 var6 = *(Struct_ov025_021e3178_5*)((char*)var3 + 0x44);
                Vector3fix_Add(&var1, (Vector3fix*)&var6, &var1);
                var5 += ((Object3D*)var3)->GetRadius() / 2;
                var4++;
            }
        }
        if (var4 > 0) {
            int var7 = var4 << 12;
            Vector3fixMultiplyScalar(&var1, fix32_Divide(0x1000, var7), &var1);
            var5 = fix32_Divide(var5, var7);
        }
        Vector3fix var8;
        __clear(&var8, 0xc);
        int var9 = 0;
        int var10 = 0;
        for (struct Struct_ov025_021e3178_8* var11 = arg1->unknown_14_; var11; var11 = var11->unknown_20_) {
            void* var12 = var0->GetGameObjectByIndex(var11->unknown_e_);
            if (var12) {
                Struct_ov025_021e3178_5 var13 = *(Struct_ov025_021e3178_5*)((char*)var12 + 0x44);
                Vector3fix_Add(&var8, (Vector3fix*)&var13, &var8);
                var10 += ((Object3D*)var12)->GetRadius() / 2;
                var9++;
            }
        }
        if (var9 > 0) {
            int var14 = var9 << 12;
            Vector3fixMultiplyScalar(&var8, fix32_Divide(0x1000, var14), &var8);
            var10 = fix32_Divide(var10, var14);
        }
        int var15 = Vector3fix_Distance(&var1, &var8) - var5 - var10;
        switch (arg0->unknown_a_) {
        case 1:
            if (var15 < arg0->unknown_c_) NOTIFY();
            break;
        case 2:
            if (var15 > arg0->unknown_c_) NOTIFY();
            break;
        case 3:
            if (var15 <= arg0->unknown_c_) NOTIFY();
            break;
        case 4:
            if (var15 >= arg0->unknown_c_) NOTIFY();
            break;
        }
        break;
    }
    case 5: {
        if (arg1->unknown_8_ == 1 && arg1->unknown_9_ == 1) {
            struct Struct_ov025_021e3178* var16 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, 0);
            struct Struct_ov025_021e3178* var17 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
            if (var16 && var17) {
                if (var16->unknown_20_ == *(short*)((char*)var17 + 0xe)) NOTIFY();
            }
        }
        break;
    }
    case 6: {
        struct Struct_ov025_021e3178_2* var18 = func_02079e2c((char*)func_020797dc(), arg1->unknown_0_);
        if (!var18) return 0;
        unsigned short var19 = arg1->unknown_0_;
        if (var19 == 0x74) {
            for (struct Struct_ov025_021e3178_8* var20 = arg1->unknown_14_; var20; var20 = var20->unknown_20_) {
                if (var20->unknown_1b_) {
                    NOTIFY();
                    return 1;
                }
            }
        } else if (var19 == 0xa5) {
            if (arg1->unknown_4_ > 0) {
                NOTIFY();
                return 1;
            }
        } else if (var18->unknown_18_5_ == 0x12) {
            for (struct Struct_ov025_021e3178_8* var21 = arg1->unknown_14_; var21; var21 = var21->unknown_20_) {
                for (struct Struct_ov025_021e3178_8* var22 = var21->unknown_0_; var22; var22 = var22->unknown_20_) {
                    if (func_ov000_0215fd90(var22, 3)) {
                        NOTIFY();
                        return 1;
                    }
                }
            }
        }
        break;
    }
    case 11: {
        if (arg1->unknown_9_ == 0) break;
        struct Struct_ov025_021e3178* var23 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
        if (!var23) break;
        for (int var24 = 0; var24 < var23->unknown_17_; var24++) {
            int var25 = ((unsigned char*)((int)var23 + 0x14))[var24];
            if (!(var25 != 8 && var25 != 6 && var25 != 7)) {
                NOTIFY();
                break;
            }
        }
        break;
    }
    case 10: {
        if (arg1->unknown_9_ == 0) break;
        for (int var26 = 0; var26 < arg1->unknown_9_; var26++) {
            struct Struct_ov025_021e3178* var27 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, var26);
            if (var27) {
                unsigned char* var28 = var27->unknown_14_;
                for (int var29 = 1; var29 < var27->unknown_17_; var29++) {
                    int var30 = var28[var29];
                    if (var30 == 3) {
                        NOTIFY();
                        break;
                    }
                    if (var30 == 8 || var30 == 7 || var30 == 6) break;
                }
            }
        }
        break;
    }
    case 7: {
        if (arg1->unknown_9_ == 0) break;
        for (int var31 = 0; var31 < arg1->unknown_9_; var31++) {
            struct Struct_ov025_021e3178* var32 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, var31);
            if (var32) {
                unsigned char* var33 = var32->unknown_14_;
                for (int var34 = 1; var34 < var32->unknown_17_; var34++) {
                    int var35 = var33[var34];
                    if (!(var35 != 2 && var35 != 5 && var35 != 4 && var35 != 3)) {
                        NOTIFY();
                        break;
                    }
                }
            }
        }
        break;
    }
    case 13: {
        if (arg1->unknown_9_ == 0) break;
        for (int var36 = 0; var36 < arg1->unknown_9_; var36++) {
            struct Struct_ov025_021e3178* var37 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, var36);
            if (var37) {
                for (int var38 = 1; var38 < var37->unknown_17_; var38++) {
                    if (var37->unknown_14_[var38] == 1) {
                        NOTIFY();
                        break;
                    }
                }
            }
        }
        break;
    }
    case 8: {
        for (int var39 = 0; var39 < arg1->unknown_8_; var39++) {
            struct Struct_ov025_021e3178* var40 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, var39);
            if (var40) {
                for (int var41 = 0; var41 < 6; var41++) {
                    if (var40->unknown_26_[var41]) {
                        NOTIFY();
                        break;
                    }
                }
            }
        }
        break;
    }
    case 12:
    case 14:
    case 17: {
        for (int var42 = 0; var42 < arg1->unknown_8_; var42++) {
            struct Struct_ov025_021e3178* var43 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, var42);
            if (var43) {
                for (int var44 = 0; var44 < 6; var44++) {
                    int var45 = 0;
                    for (int var46 = 0; var46 < var43->unknown_26_[var44]; var46++) {
                        void* var47 = func_ov000_0215feb4((char*)var43, var46, var44 & 0xff);
                        if (var47) {
                            if (func_ov000_0215fd90(var47, 0x22) && arg0->unknown_a_ == 0xc) {
                                NOTIFY();
                                var45 = 1;
                                break;
                            }
                            if (func_ov000_0215fd90(var47, 0x25) && arg0->unknown_a_ == 0xe) {
                                NOTIFY();
                                var45 = 1;
                                break;
                            }
                            if (arg0->unknown_a_ == 0x11 && (func_ov000_0215fd90(var47, 0x23) || func_ov000_0215fd90(var47, 7))) {
                                NOTIFY();
                                var45 = 1;
                                break;
                            }
                        }
                    }
                    if (var45) break;
                }
            }
        }
        break;
    }
    case 15: {
        void* var48 = func_ov000_02160130();
        if (var48 && *(unsigned char*)((char*)var48 + Enum_ov025_021e3178_28629)) NOTIFY();
        break;
    }
    case 22:
        if (arg1->unknown_18_ == 0x1ef) {
            NOTIFY();
            break;
        }
    case 16: {
        for (struct Struct_ov025_021e3178_8* var49 = arg1->unknown_14_; var49; var49 = var49->unknown_20_) {
            for (struct Struct_ov025_021e3178_8* var50 = var49->unknown_0_; var50; var50 = var50->unknown_20_) {
                if (func_ov000_0215fd90(var50, 7)) {
                    NOTIFY();
                    return 1;
                }
            }
        }
        break;
    }
    case 18: {
        struct Struct_ov025_021e3178_7* var51 = arg1->unknown_10_;
        if (!var51) break;
        int var52 = var51->unknown_20_;
        void* var53 = func_ov000_02160130();
        if (!var53) break;
        struct Struct_ov025_021e3178_3 var54;
        func_ov000_02162c14(var53, var52, &var54);
        if (var54.unknown_6_ == 0x520e) {
            NOTIFY();
            return 1;
        }
        break;
    }
    case 23: {
        struct Struct_ov025_021e3178_7* var55 = arg1->unknown_10_;
        if (!var55) break;
        int var56 = var55->unknown_20_;
        GameState* var57 = GameState::GetInstance();
        if (!var57) break;
        struct Struct_ov025_021e3178_4* var58 = (Struct_ov025_021e3178_4*)func_0200ff1c(var57, var56);
        if (!var58) break;
        if (func_020850d0(var58->unknown_150_)) {
            NOTIFY();
            return 1;
        }
        break;
    }
    case 19:
    case 20:
    case 21: {
        if (arg1->unknown_9_ == 0) break;
        int var59 = 0;
        int var60 = 0;
        for (int var61 = 0; var61 < arg1->unknown_9_; var61++) {
            struct Struct_ov025_021e3178* var62 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, var61);
            if (var62) {
                for (int var63 = 1; var63 < var62->unknown_17_; var63++) {
                    if (var62->unknown_14_[var63] == 0xa) {
                        var59 = 1;
                        if (arg0->unknown_a_ == 0x14) {
                            NOTIFY();
                            break;
                        }
                    }
                }
                struct Struct_ov025_021e3178_7* var64 = *(struct Struct_ov025_021e3178_7**)var62;
                if (var64 && *(unsigned char*)((char*)var64 + 0x1c)) {
                    var60 = 1;
                    if (arg0->unknown_a_ == 0x13) {
                        NOTIFY();
                        break;
                    }
                }
            }
        }
        if (arg0->unknown_a_ == 0x15 && var59 && var60) NOTIFY();
        break;
    }
    case 9: {
        struct Struct_ov025_021e3178_2* var65 = func_02079e2c((char*)func_020797dc(), arg1->unknown_0_);
        if (!var65) return 0;
        struct Struct_ov025_021e3178* var66 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
        if (!var66) return 0;
        if (!var66) return 0;
        void* var67 = func_ov000_0215fff4(var66, 0, 0);
        if (!var67) return 0;
        if (!var67) return 0;
        for (int* var68 = data_ov025_021eef40; *var68 != -1; var68++) {
            if (func_ov000_0215fd90(var67, *var68)) {
                NOTIFY();
                return 1;
            }
        }
        break;
    }
    default:
    case 0:
        func_ov025_021eb044(*(void**)((char*)&data_ov025_021ef988 + Enum_ov025_021e3178_12));
        break;
    }
    return 1;
}
