#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Main/BattleList.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);
struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);
extern "C" int func_020882f8(unsigned char* arg0);
struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);
struct Struct_02088660;
extern "C" int func_02088660(struct Struct_02088660* arg0);
struct Struct_ov024_021fa7ec_5;
extern "C" int func_ov024_021fb430(struct Struct_ov024_021fa7ec_5* arg0);
struct Struct_ov024_021fa7ec_6;
extern "C" int func_ov024_021fb448(struct Struct_ov024_021fa7ec_6* arg0);
struct Struct_ov024_021fa7ec_8;
extern "C" int func_ov024_021fb478(struct Struct_ov024_021fa7ec_8* arg0);
struct Struct_ov024_021eda78_5;
extern "C" int func_ov024_021edc08(struct Struct_ov024_021eda78_5* arg0);
struct Struct_ov024_021e4604;
extern "C" int func_ov024_021e47dc(struct Struct_ov024_021e4604* arg0);
struct Struct_ov024_021f6a1c;
extern "C" void func_ov024_021f6a1c(struct Struct_ov024_021f6a1c* arg0, void* arg1);
extern "C" void func_ov024_021f6a4c(void* arg0, void* arg1);
extern "C" void func_ov024_021fd858(void* arg0);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021fd954 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x138 - 0x6];
    struct ModifiableCombatStats* unknown_138_;
#if defined(jpn)
    char unknown_13c_[0x144 - 0x13c];
#else
    char unknown1_13c_[0x150 - 0x13c];
#endif
    unsigned char* unknown_150_;
};

struct Struct_ov024_021fd954* GetCombatantByID(int unused, int id);

struct Struct_ov024_021fd954_2 {
    float unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
};
struct Struct_ov024_021fd954_3 {
    char unknown_0_[0xc8];
    Struct_ov024_021fd954_3() { memset(this, 0, sizeof(*this)); }
};
struct Struct_ov024_021fd954_4 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    char unknown_c_[4];
    unsigned int unknown_10_;
    unsigned int unknown_14_0_ : 28;
    unsigned int unknown_17_4_ : 4;
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 27;
};
struct Struct_ov024_021fd954_5 {
    char unknown_0_[0x8e18];
    unsigned char* unknown_8e18_;
};
struct Struct_ov024_021fbec4 {
    struct Struct_ov024_021fd954_5* unknown_0_;
    short unknown_4_;
    struct Struct_ov024_021fd954* unknown_8_;
    char unknown_c_[0x64c - 0xc];
    struct Struct_ov024_021fd954_4* unknown_64c_;
    char unknown_650_[0x658 - 0x650];
    struct Struct_ov024_021fd954_3* unknown_658_;
    struct Struct_ov024_021fd954_2 unknown_65c_;
    struct Struct_ov024_021fd954* unknown_668_;
    int unknown_66c_;
};

// USA: func_ov024_021fd954
extern "C" ARM void func_ov024_021fd954(struct Struct_ov024_021fbec4* arg0, int arg1) {
    struct Struct_ov024_021fd954_4* var0;
    int var1;
    int var2;
    struct Struct_ov024_021fd954* var3;
    int var4;
    struct Struct_ov024_021fd954* var5;
    var5 = arg0->unknown_8_;
    func_02053c6c((unsigned char*)var5);
    var0 = arg0->unknown_64c_;
    if (var0->unknown_9_0_ == 1) return;
    var1 = var0->unknown_17_4_;
    if (var1 == 6) {
        if (func_02083b00(var5->unknown_150_, 0xe6)) {
            var1 = 3;
        } else {
            var1 = 2;
        }
    }
    if (var1 != 2 && var1 != 1 && var1 != 4 && var1 != 3) return;

    struct Struct_ov024_021fd954_3 var6;
    memset(&var6, 0, sizeof(var6));
    var4 = 0;
    for (var2 = 0; var2 < 4; var2++) {
        if (var1 == 1 && var2 != arg0->unknown_4_) continue;
        if (!func_020a35e0(arg0->unknown_0_->unknown_8e18_, var2 & 0xff)) continue;
        var3 = GetCombatantByID((int)arg0->unknown_0_, (short)var2);
        if (!var3) continue;
        if (func_02010088((struct Struct_02010088*)var3)) continue;
        if ((var0->unknown_10_ & 0x400) && (*(unsigned int*)((char*)var3->unknown_138_ + 0x14) & 0x200)) continue;

        bool var7 = false;
        int var8 = 8;
        if (arg1 == 2) {
            if (func_02088514((struct Struct_02088514*)var3->unknown_138_)) var7 = true;
        } else if (arg1 == 3) {
            if (func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var3)) var7 = true;
        } else if (arg1 == 4) {
            if (func_020882f8((unsigned char*)var3->unknown_138_)) var7 = true;
        } else if (arg1 == 7) {
            if (func_ov024_021de25c((struct Struct_ov024_021de124*)var3)) var7 = true;
        } else if (arg1 == 0x11) {
            struct ModifiableCombatStats* var9 = var3->unknown_138_;
            if (var9->attackBuff <= 0) var7 = true;
            if (var9->primaryStats.attack >= 999) var7 = false;
            var8 = 7;
        } else if (arg1 == 0x12) {
            struct ModifiableCombatStats* var10 = var3->unknown_138_;
            if (var10->defenseBuff <= 0) var7 = true;
            if (var10->primaryStats.defense >= 999) var7 = false;
            var8 = 7;
        } else if (arg1 == 0x13) {
            struct ModifiableCombatStats* var11 = var3->unknown_138_;
            if (var11->agilityBuff <= 0) var7 = true;
            if (var11->primaryStats.agility >= 999) var7 = false;
            var8 = 7;
        } else if (arg1 == 0x14) {
            struct ModifiableCombatStats* var12 = var3->unknown_138_;
            if (var12->magicalMightBuff <= 0) var7 = true;
            if ((unsigned short)var12->primaryStats.magicalMight >= 999) var7 = false;
            var8 = 7;
        } else if (arg1 == 0x15) {
            struct ModifiableCombatStats* var13 = var3->unknown_138_;
            if (var13->magicalMendingBuff <= 0) var7 = true;
            if ((unsigned short)var13->primaryStats.magicalMending >= 999) var7 = false;
            var8 = 7;
        } else if (arg1 == 0x16) {
            if (var3->unknown_138_->unknown_5a_2_ <= 0) var7 = true;
            var8 = 7;
        } else if (arg1 == 0x17) {
            if ((((*(int*)((char*)var3->unknown_138_ + 0x58)) << 8) >> 29) <= 0) var7 = true;
            var8 = 7;
        } else if (arg1 == 0xd) {
            if (!func_02088660((struct Struct_02088660*)var3->unknown_138_)) var7 = true;
            var8 = 7;
        } else if (arg1 == 0xe) {
            if (!func_ov024_021fb430((struct Struct_ov024_021fa7ec_5*)var3) && !func_ov024_021fb448((struct Struct_ov024_021fa7ec_6*)var3)
                && !func_ov024_021fb478((struct Struct_ov024_021fa7ec_8*)var3)) var7 = true;
            var8 = 7;
        } else if (arg1 == 0xf) {
            if (!func_ov024_021fb430((struct Struct_ov024_021fa7ec_5*)var3) && !func_ov024_021fb448((struct Struct_ov024_021fa7ec_6*)var3)
                && !func_ov024_021fb478((struct Struct_ov024_021fa7ec_8*)var3)) var7 = true;
            var8 = 7;
        } else if (arg1 == 0x10) {
            if (!func_ov024_021edc08((struct Struct_ov024_021eda78_5*)var3)) var7 = true;
            var8 = 7;
        } else if (arg1 == 0xb) {
            if (!func_ov024_021e47dc((struct Struct_ov024_021e4604*)var3)) var7 = true;
            var8 = 7;
        }

        struct Struct_ov024_021fd954_2 var14;
        memset(&var14, 0, sizeof(var14));
        int var15 = 50;
        if (var7) {
            var15 = 100;
            var4 = 1;
        }
        var14.unknown_0_ = 0.0f;
        var14.unknown_4_ = arg1;
        var14.unknown_5_ = 0;
        var14.unknown_6_ = var2;
        var14.unknown_7_ = var15;
        var14.unknown_8_ = var8;
        func_ov024_021f6a1c((struct Struct_ov024_021f6a1c*)&var6, &var14);
        if (var0->unknown_18_0_ != 0) {
            arg0->unknown_658_ = &var6;
            func_ov024_021f6a4c(&arg0->unknown_65c_, &var14);
            arg0->unknown_668_ = var3;
            arg0->unknown_66c_ = var3->unknown_4_;
            func_ov024_021fd858(arg0);
        }
        if (var1 == 2 || var1 == 1) {
            int var16 = (unsigned char)var3->unknown_4_;
            if (var4) func_ov024_021f9874(arg0, &var6, 0, var16);
            memset(&var6, 0, sizeof(var6));
            var4 = 0;
        }
    }
    if (var1 == 4 || var1 == 3) {
        GetCombatantByID((int)arg0->unknown_0_, 0);
        int var17 = (unsigned char)var5->unknown_4_;
        if (var1 == 3) var17 = 0xff;
        if (var4) func_ov024_021f9874(arg0, &var6, 0, var17);
    }
}
