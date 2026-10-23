#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov004_0215eb40_2 {
    unsigned short unknown_0_[7];
    unsigned char unknown_e_[7];
    unsigned char unknown_15_;
};

struct Struct_ov004_02170b90 {
    struct Struct_ov004_0215eb40_2 unknown_0_[26];
    unsigned char unknown_23c_;
    unsigned char unknown_23d_;
    unsigned char unknown_23e_;
    unsigned char unknown_23f_;
};

struct Struct_0209a348 { void* unknown_0_; void* unknown_4_; };
struct Struct_0200f3a4_8 { int unknown_0_; int unknown_4_; };
struct Struct_0209a670 { char unknown_0_[4]; int unknown_4_; };

struct Struct_ov004_0215eb40_4 {
#if defined(jpn)
    unsigned short unknown_0_0_ : 12;
    unsigned short unknown_1_4_ : 4;
#else
    unsigned short unknown_0_0_ : 11;
    unsigned short unknown_1_3_ : 5;
#endif
    unsigned short unknown_2_;
    unsigned int unknown_4_0_ : 5;
    unsigned int unknown_4_5_ : 7;
    unsigned int unknown_5_4_ : 20;
    unsigned int unknown_8_;
};

struct Struct_0209a654_2 { struct Struct_ov004_0215eb40_4* unknown_0_; int unknown_4_; };

struct Struct_0201099c_9 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
    unsigned int unknown_9_1_ : 23;
    unsigned char unknown_c_[8];
    unsigned short unknown_14_;
};

struct Struct_0201099c_10;

class Struct_ov004_0215eb40 {
public:
    virtual void inline_ov004_0215eb40(); virtual void inline_ov004_0215eb40_2(); virtual void inline_ov004_0215eb40_3(); virtual void inline_ov004_0215eb40_4();
    virtual void inline_ov004_0215eb40_5(); virtual void inline_ov004_0215eb40_6(); virtual void inline_ov004_0215eb40_7(); virtual void inline_ov004_0215eb40_8();
    virtual void inline_ov004_0215eb40_9(); virtual void inline_ov004_0215eb40_10(); virtual void inline_ov004_0215eb40_11(); virtual void inline_ov004_0215eb40_12();
    virtual void inline_ov004_0215eb40_13(); virtual void inline_ov004_0215eb40_14(); virtual void inline_ov004_0215eb40_15(); virtual void inline_ov004_0215eb40_16();
    virtual void inline_ov004_0215eb40_17(); virtual void inline_ov004_0215eb40_18(); virtual void inline_ov004_0215eb40_19(); virtual void inline_ov004_0215eb40_20();
    virtual void inline_ov004_0215eb40_21(); virtual void inline_ov004_0215eb40_22(); virtual void inline_ov004_0215eb40_23(); virtual void inline_ov004_0215eb40_24();
    virtual void inline_ov004_0215eb40_25(); virtual void inline_ov004_0215eb40_26(); virtual void inline_ov004_0215eb40_27(); virtual void inline_ov004_0215eb40_28();
    virtual void inline_ov004_0215eb40_29(); virtual void inline_ov004_0215eb40_30(); virtual void inline_ov004_0215eb40_31(); virtual void inline_ov004_0215eb40_32();
    virtual void inline_ov004_0215eb40_33(); virtual void inline_ov004_0215eb40_34(); virtual void inline_ov004_0215eb40_35(); virtual void inline_ov004_0215eb40_36();
    virtual void inline_ov004_0215eb40_37(); virtual void inline_ov004_0215eb40_38(); virtual void inline_ov004_0215eb40_39(); virtual void inline_ov004_0215eb40_40();
    virtual void inline_ov004_0215eb40_41(); virtual void inline_ov004_0215eb40_42(); virtual void inline_ov004_0215eb40_43(); virtual void inline_ov004_0215eb40_44();
    virtual void inline_ov004_0215eb40_45(); virtual void inline_ov004_0215eb40_46(); virtual void inline_ov004_0215eb40_47(); virtual void inline_ov004_0215eb40_48();
    virtual void inline_ov004_0215eb40_49(); virtual void inline_ov004_0215eb40_50(); virtual void inline_ov004_0215eb40_51(); virtual void inline_ov004_0215eb40_52();
    virtual void inline_ov004_0215eb40_53(); virtual void inline_ov004_0215eb40_54(); virtual void inline_ov004_0215eb40_55(); virtual void inline_ov004_0215eb40_56();
    virtual void inline_ov004_0215eb40_57(); virtual void inline_ov004_0215eb40_58();
    virtual Struct_0201099c_10* inline_ov004_0215eb40_59();
};

struct Struct_ov004_0215eb40_3 { unsigned char unknown_0_[0x454]; short unknown_454_[8]; };
struct Struct_0209a678_2 { unsigned char unknown_0_[0x464]; unsigned char unknown_464_[0x20]; };

extern struct Struct_ov004_02170b90 data_ov004_02170b90[] __attribute__((aligned(4)));
extern unsigned char data_ov004_021707e8;
extern unsigned char data_ov004_0216fdd0[];
extern char data_0212633c[];

extern "C" void func_0209a338(struct Struct_0200f3a4_8*);
extern "C" void func_0209a348(struct Struct_0209a348*, void*);
extern "C" int func_0209a670(struct Struct_0209a670*);
extern "C" struct Struct_ov004_0215eb40_4* func_0209a654(struct Struct_0209a654_2*, unsigned int);
extern "C" void func_02083acc(unsigned char*, int);
extern "C" void func_02083b28(unsigned char*, int);
extern "C" int func_02083b00(unsigned char*, int);
extern "C" void* func_02053c6c(unsigned char*);
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10*, int);
extern "C" void* func_ov004_0215e47c(void*, int);
extern "C" void func_ov004_0215ee90(void*);

// USA: func_ov004_0215eb40
extern "C" ARM void func_ov004_0215eb40(void* arg0) {
    struct Struct_0209a348 var0;
    GameState* var1;
    unsigned char* var2;
    unsigned char* var3;
    BackgroundLoader* var4;
    struct Struct_0201099c_10* var5;
    int var6;
    int var7;
    short* var8;
    int var9;
    int var10;
    int var11;
    struct Struct_ov004_0215eb40_4* var12;
    unsigned char var13[2];

    func_ov004_0215ee90(data_ov004_02170b90);
    var1 = GameState::GetInstance();
    var2 = (unsigned char*)(void*)func_0200ff1c(var1, *(int*)((char*)&data_ov004_021707e8 + 0x1c));
    var3 = (unsigned char*)func_02053c6c(var2);
    if (var2 == 0 || var3 == 0) {
        return;
    }
    var4 = BackgroundLoader::GetInstance();
    var4->MaybeWaitIdle();
    char* var14 = data_0212633c;
    func_0209a338((struct Struct_0200f3a4_8*)&var0);
    func_0209a348(&var0, var14);
    func_02010828(var1);

    var5 = 0;
    {
        Struct_ov004_0215eb40* var15 = (Struct_ov004_0215eb40*)func_ov004_0215e47c(arg0, 0x8d);
        if (var15 != 0) {
            var5 = var15->inline_ov004_0215eb40_59();
        }
    }
    if (var5 == 0) {
        goto afterSlots;
    }

    for (var6 = 0x56f9; var6 <= 0x5712; var6++) {
        var7 = 0;
        var8 = ((struct Struct_ov004_0215eb40_3*)*(void**)((char*)var2
#if defined(jpn)
            + 0x144))->unknown_454_;
#else
            + 0x150))->unknown_454_;
#endif
        for (var9 = 0; var9 < 8; var9++) {
            if (var8[var9] == var6) {
                var7 = 1;
                break;
            }
        }
        struct Struct_0201099c_9* var16 = func_020dedd0(var5, (short)var6);
        if (var16 == 0) {
            continue;
        }
        if (var16->unknown_8_4_ != 0x1f) {
            continue;
        }
        if (var7) {
            func_02083acc(var3, var16->unknown_14_);
        } else {
            func_02083b28(var3, var16->unknown_14_);
        }
    }

afterSlots:
    var13[0] = data_ov004_0216fdd0[0];
    var13[1] = data_ov004_0216fdd0[1];
    var10 = func_0209a670((struct Struct_0209a670*)&var0);
    var12 = func_0209a654((struct Struct_0209a654_2*)&var0, 0);
    for (var11 = 0; var11 < var10; var12++, var11++) {
        signed char var17 = var12->unknown_4_0_;
        int var18 = (signed char)(var17 - 1);
        if (var18 < 0) {
            continue;
        }
        unsigned short var19 = var12->unknown_0_0_;
        bool var20 = func_02083b00(var3, var19);
        if (!var20) {
            continue;
        }
        unsigned char var21 = var12->unknown_4_5_;
        unsigned char var22 = ((struct Struct_0209a678_2*)var3)->unknown_464_[var17];
        int var23 = -1;
        if ((int)var12->unknown_2_ > 0) {
            var23 = 0;
        } else if (var12->unknown_2_ == 0) {
            if (var22 >= var21) {
                var23 = 1;
            }
        }
        if (var23 == -1) {
            continue;
        }

        struct Struct_ov004_02170b90* var24 = &data_ov004_02170b90[var23];
        unsigned char var25 = var21 ? var21 : 0x6e;
        struct Struct_ov004_0215eb40_2* var26 = &var24->unknown_0_[var18];
        unsigned short* var27 = var26->unknown_0_;
        unsigned char* var28 = var26->unknown_e_;
        unsigned char var29 = var26->unknown_15_;
        int var30 = 0;
        while (var30 < var29) {
            if (var25 < *var28) {
                break;
            }
            var30++;
            var27++;
            var28++;
        }
        int var31 = var29 - var30;
        if (var31 > 0) {
            memmove(var27 + 1, var27, var31 * sizeof(*var27));
            memmove(var28 + 1, var28, var31);
        }
        *var27 = var19;
        *var28 = var25;
        var26->unknown_15_ = var26->unknown_15_ + 1;
        if ((signed char)var13[var23] == var18) {
            continue;
        }
        var13[var23] = var18;
        var24->unknown_23d_ = var24->unknown_23d_ + 1;
        if (var24->unknown_23d_ & 1) {
            var24->unknown_23f_ = var24->unknown_23f_ + 1;
        }
        if (var24->unknown_23e_ < var17) {
            var24->unknown_23e_ = var17;
        }
    }

    var4->RemoveLock();
}
