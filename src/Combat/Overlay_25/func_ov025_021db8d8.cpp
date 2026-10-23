#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

struct Struct_ov000_02169b04;
struct Struct_ov000_02169b54;
struct Struct_ov000_0215440c_2;
struct Struct_ov000_02163a7c;

struct Struct_ov000_02169b04_2 {
    char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov025_021db8d8 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
};

struct Struct_ov025_021db8d8_2 {
    char unknown_0_[0xe];
    short unknown_e_;
};

struct Struct_ov025_021db8d8_3 {
    char unknown_0_[0x10];
    struct Struct_ov025_021db8d8* unknown_10_;
    struct Struct_ov025_021db8d8_2* unknown_14_;
};

struct Struct_ov025_021db8d8_4 {
    unsigned char unknown_0_0_ : 2;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 5;
};

struct Struct_ov025_021db8d8_5 {
#if defined(jpn)
    char unknown_0_[0x800];
    char unknown_c00_[0xa7c - 0x800];
#else
    char unknown1_0_[0xc00];
    char unknown_c00_[0xe7c - 0xc00];
#endif
    struct Struct_ov025_021db8d8_3* unknown_e7c_;
};

struct Struct_ov025_021db8d8_6 {
#if defined(jpn)
    char unknown1_0_[0x218];
    void* unknown_29c_;
    char unknown_21c_[0x224 - 0x21c];
    struct Struct_ov000_02169b04* unknown_2a8_;
    char unknown_228_[0x3e8 - 0x228];
    unsigned int unknown_46c_;
    char unknown_3ec_[0x7f2 - 0x3ec];
    unsigned short unknown_876_;
    char unknown_7f4_[0xe28 - 0x7f4];
    int unknown_eac_;
    char unknown_e2c_[0x57c8 - 0xe2c];
    int unknown_55d8_;
    char unknown_57cc_[0x5b41 - 0x57cc];
    struct Struct_ov025_021db8d8_4 unknown_5951_;
#else
    char unknown_0_[0x29c];
    void* unknown_29c_;
    char unknown_2a0_[0x2a8 - 0x2a0];
    struct Struct_ov000_02169b04* unknown_2a8_;
    char unknown_2ac_[0x46c - 0x2ac];
    unsigned int unknown_46c_;
    char unknown_470_[0x876 - 0x470];
    unsigned short unknown_876_;
    char unknown_878_[0xeac - 0x878];
    int unknown_eac_;
    char unknown_eb0_[0x55d8 - 0xeb0];
    int unknown_55d8_;
    char unknown_55dc_[0x5951 - 0x55dc];
    struct Struct_ov025_021db8d8_4 unknown_5951_;
#endif
};

extern "C" struct Struct_ov025_021db8d8_3* func_ov000_02160f20(void*);
extern "C" void* func_ov000_02160f60(void*);
extern "C" unsigned int func_02049444(unsigned char*);
extern "C" int func_020493ec(unsigned char*);
extern "C" int func_020493c8(unsigned char*);
extern "C" void func_020493dc(unsigned char*, unsigned char);
extern "C" void func_02049390(unsigned char*, unsigned char);
extern "C" struct Struct_ov000_02169b04_2* func_ov000_02169b04(struct Struct_ov000_02169b04*, int);
extern "C" struct Struct_ov000_02169b04_2* func_ov000_02169b54(struct Struct_ov000_02169b54*, int);
extern "C" struct Struct_ov025_021db8d8* func_ov000_02160094(struct Struct_ov000_0215440c_2*, int);
extern "C" void func_ov000_02167dd8(unsigned char*);
extern "C" void func_ov000_02163a7c(struct Struct_ov000_02163a7c*);
extern "C" int func_ov025_021dfa9c(void* arg0, void* arg1);
extern "C" void func_ov000_021626a0(void* arg0, int arg1, int arg2);
extern "C" int func_ov000_02153e40(void* arg0, short* arg1, int arg2, int arg3);
extern "C" void func_02048cf0(GameObject* arg0, int arg1);
extern "C" void func_ov000_0216e678(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov000_0216d464(void* arg0);
extern "C" void func_02048e2c(GameObject* arg0);
extern "C" void func_ov025_021dc220(void* arg0);
extern "C" void func_ov025_021eb7fc(void* arg0);

#if defined(jpn)
#define SUB_021db8d8 0x394
#else
#define SUB_021db8d8 0x18
#endif

// USA: func_ov025_021db8d8
extern "C" ARM void func_ov025_021db8d8(struct Struct_ov025_021db8d8_6* arg0) {
    int var0;
    struct Struct_ov000_02169b04_2* var1;
    GameState* var2;
    void* var3;
    int var4;
    int var5;
    struct Struct_ov000_02169b04_2* var6;
    int var7;
    GameState* var8;
    int var9;
    int var10;
    int var11;
    GameState* var12;
    struct Struct_ov000_02169b04* var13;
    var2 = GameState::GetInstance();
    var3 = arg0->unknown_29c_;
    struct Struct_ov025_021db8d8_5* var14 = (struct Struct_ov025_021db8d8_5*)((char*)arg0 + SUB_021db8d8);
    struct Struct_ov025_021db8d8_3* var15 = func_ov000_02160f20(arg0);
    var4 = -1;
    if (var15->unknown_10_) {
        var4 = var15->unknown_10_->unknown_20_;
    }
    GameObject* var16 = var2->GetCombatantByIndex(var4);
    int var17 = -1;
    if (var15->unknown_14_) {
        var17 = var15->unknown_14_->unknown_e_;
    }
    int var18 = 0;
    if (var16 && func_02049444((unsigned char*)var16)) {
        var18 = 1;
    }
    int var19 = 0;
    var13 = arg0->unknown_2a8_;
    if (var13) {
        struct Struct_ov000_02169b04_2* var20 = func_ov000_02169b04(var13, 0xc);
        var5 = 1;
        var1 = func_ov000_02169b04(var13, 0x3d);
        var6 = func_ov000_02169b04(var13, 7);
        if (var20 && ((var1 && var20 == func_ov000_02169b54((struct Struct_ov000_02169b54*)var1, 0xc)) ||
                     (var6 && var20 == func_ov000_02169b54((struct Struct_ov000_02169b54*)var6, 0xc)))) {
            var5 = 0;
        }
        if (var5) {
            if (var20 && var20->unknown_8_ != 0xa) {
                var19 = 1;
            } else if (func_ov000_02169b04(var13, 0x20)) {
                var19 = 1;
            } else if (func_ov000_02169b04(var13, 0x22)) {
                var19 = 1;
            }
        }
    }
    if (func_ov025_021dfa9c(arg0, arg0->unknown_29c_)) {
        var18 = 0;
        var19 = 1;
    }
    int var21 = 0;
    if (var18 || !var19) {
        func_ov000_021626a0(arg0, 4, 1);
        var7 = 0;
        GameObject* var22 = var2->GetCombatantByIndex(var17);
        if (var22 && func_020493ec((unsigned char*)var22) != 0xff) {
            void* var23 = func_ov000_02160f60(arg0);
            if (var23) {
                struct Struct_ov025_021db8d8* var24 = func_ov000_02160094((struct Struct_ov000_0215440c_2*)var23, 0);
                if (var24 && var24->unknown_20_ == var17) {
                    var7 = 1;
                }
            }
        }
        if (var16 && var22) {
            Vector3fix var25 = var16->obj3D_.position_;
            Vector3fix var26 = var22->obj3D_.position_;
            var0 = Vector3fix_Distance(&var25, &var26);
            if (var0 < (var16->obj3D_.GetRadius() + var22->obj3D_.GetRadius()) >> 1) {
                var7 = 1;
            }
        }
        if (arg0->unknown_55d8_ != 0) {
            var8 = GameState::GetInstance();
            short var27[12];
            int var28 = func_ov000_02153e40(var3, var27, 12, 0);
            int var29;
            for (int var30 = 0; var30 < var28; var30++) {
                GameObject* var31 = var8->GetCombatantByIndex(var27[var30]);
                if (var31 && func_02049444((unsigned char*)var31) >= 5) {
                    var29 = 1;
                    goto checked;
                }
            }
            var29 = 0;
        checked:
            if (!var29 && !var7) {
                goto quiet;
            }
        }
        {
            int var32;
            var12 = GameState::GetInstance();
            int var33 = -1;
            if (var15->unknown_10_) {
                var33 = var15->unknown_10_->unknown_20_;
            }
            GameObject* var34 = var12->GetCombatantByIndex(var33);
            int var35 = -1;
            if (var15->unknown_14_) {
                var35 = var15->unknown_14_->unknown_e_;
            }
            var10 = var11 = 0xff;
            if (var34) {
                var11 = func_020493ec((unsigned char*)var34);
                var10 = func_020493c8((unsigned char*)var34);
            }
            short var36[12];
            var9 = func_ov000_02153e40(var3, var36, 12, 0);
            for (var32 = 0; var32 < var9; var32++) {
                GameObject* var37 = var12->GetCombatantByIndex(var36[var32]);
                if (var37) {
                    func_02048cf0(var37, var35 == var36[var32]);
                }
            }
            if (var34) {
                func_020493dc((unsigned char*)var34, var11);
                if (var11 != 0xff && var10 != 0xff) {
                    func_02049390((unsigned char*)var34, var10);
                }
            }
            func_ov000_02167dd8((unsigned char*)arg0);
            var14->unknown_e7c_ = var15;
            func_ov000_0216e678(var14->unknown_c00_, var4, var17, 0, 1);
            func_ov000_02163a7c((struct Struct_ov000_02163a7c*)arg0);
            arg0->unknown_5951_.unknown_0_2_ = 0;
            var18 = 0;
            if (var19) {
                arg0->unknown_876_ = 0x1f4;
            }
            goto shown;
        }
    quiet:
        var14->unknown_e7c_ = var15;
        func_ov000_0216e678(var14->unknown_c00_, var4, var17, 0, 0);
        func_ov000_02167dd8((unsigned char*)arg0);
    shown:
        var21 = 1;
        func_ov000_0216d464(var14->unknown_c00_);
    }
    if (arg0->unknown_5951_.unknown_0_2_ && var19) {
        arg0->unknown_46c_ |= 0x40;
    }
    if (var18 || (arg0->unknown_5951_.unknown_0_2_ && !var19)) {
        int var38;
        int var39;
        GameState* var40 = GameState::GetInstance();
        short var41[12];
        var39 = func_ov000_02153e40(var3, var41, 12, 0);
        for (var38 = 0; var38 < var39; var38++) {
            GameObject* var42 = var40->GetCombatantByIndex(var41[var38]);
            if (var42) {
                func_02048e2c(var42);
            }
        }
        if (var18) {
            arg0->unknown_eac_ = 2;
        } else {
            func_ov025_021dc220(arg0);
        }
    } else {
        func_ov025_021dc220(arg0);
    }
    if (var21) {
        func_ov025_021eb7fc(&arg0->unknown_2a8_);
    }
}
