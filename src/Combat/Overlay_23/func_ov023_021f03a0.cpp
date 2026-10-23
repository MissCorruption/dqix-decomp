#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Resource/Brightness.h"
struct Struct_02032e58;

struct Struct_02048150;
struct Struct_ov000_02163a7c;
struct Struct_02010088;
struct Struct_02010604;
struct Struct_0205d6a0 { char unknown_0_[4]; };
struct Struct_ov023_021d9988;
struct Struct_02072a68_2 { char unknown_0_[4]; };
struct Struct_ov023_021eeaac_2 {
    int unknown_0_, unknown_4_; char unknown_8_[9]; signed char unknown_11_;
    unsigned char unknown_12_[4]; char unknown_16_[2]; int unknown_18_;
#if defined(jpn)
    char unknown_1c_[0x118-0x1c]; char unknown_118_[0x2498-0x118]; unsigned char unknown_2788_;
#else
    char unknown1_1c_[0x118-0x1c]; char unknown_118_[0x2788-0x118]; unsigned char unknown_2788_;
#endif

    char unknown_2789_[4]; unsigned char unknown_278d_;
};
struct Struct_ov023_021f03a0 { unsigned char unknown_0_, unknown_1_, unknown_2_, unknown_3_; int unknown_4_; };
struct Struct_ov003_02162f40 { char unknown_0_[0x25]; unsigned char unknown_25_; };
struct Struct_ov023_021f03a0_2 { char unknown_0_[0x11b]; unsigned char unknown_11b_; char unknown_11c_[2]; unsigned char unknown_11e_; char unknown_11f_; void* unknown_120_; };
struct Struct_ov023_021f0a5c_3 { char unknown_0_[0x54]; };
struct Struct_ov000_02160da0 {
    char unknown_0_[0x30]; SafeAllocator unknown_30_;
#if defined(jpn)
    char unknown_44_[0x218-0x30-sizeof(SafeAllocator)]; void* unknown_29c_; Struct_ov003_02162f40* unknown_2a0_;
#else
    char unknown1_44_[0x29c-0x30-sizeof(SafeAllocator)]; void* unknown_29c_; Struct_ov003_02162f40* unknown_2a0_;
#endif

#if defined(jpn)
    char unknown_220_[0xb94-0x220]; char unknown_c18_[4]; char unknown_b98_[0xe28-0xb98]; int unknown_eac_;
#else
    char unknown_2a4_[0xc18-0x2a4]; char unknown_c18_[4]; char unknown_c1c_[0xeac-0xc1c]; int unknown_eac_;
#endif

#if defined(jpn)
    char unknown_e2c_[0x371c-0xe2c]; char unknown_3760_[0x38a4-0x371c]; Struct_0205d6a0 unknown_38e8_;
#else
    char unknown_eb0_[0x3760-0xeb0]; char unknown_3760_[0x38e8-0x3760]; Struct_0205d6a0 unknown_38e8_;
#endif

#if defined(jpn)
    char unknown_38a8_[0x5778-0x38a8]; Struct_ov023_021f03a0_2* unknown_5588_;
#else
    char unknown_38ec_[0x5588-0x38ec]; Struct_ov023_021f03a0_2* unknown_5588_;
#endif

#if defined(jpn)
    char unknown_577c_[0x5948-0x577c]; int unknown_5758_[4]; int unknown_5768_; unsigned char unknown_576c_;
#else
    char unknown_558c_[0x5758-0x558c]; int unknown_5758_[4]; int unknown_5768_; unsigned char unknown_576c_;
#endif

#if defined(jpn)
    char unknown_595d_[3]; Struct_ov023_021f0a5c_3 unknown_5770_[4]; char unknown_5ab0_[0x5af4-0x5ab0]; Struct_02072a68_2 unknown_5904_;
#else
    char unknown_576d_[3]; Struct_ov023_021f0a5c_3 unknown_5770_[4]; char unknown_58c0_[0x5904-0x58c0]; Struct_02072a68_2 unknown_5904_;
#endif

};
struct Struct_02092e0c {
#if defined(jpn)
    char unknown_0_[0x10]; void* unknown_10_; char unknown_14_[0x868-0x14]; int unknown_998_;
#else
    char unknown1_0_[0x10]; void* unknown1_10_; char unknown1_14_[0x998-0x14]; int unknown_998_;
#endif

#if defined(jpn)
    char unknown_86c_[0x17de - 0x86c]; unsigned char unknown_19ae_, unknown_19af_;
#else
    char unknown_99c_[0x19ae - 0x99c]; unsigned char unknown_19ae_, unknown_19af_;
#endif

#if defined(jpn)
    char unknown_17e0_[2]; unsigned char unknown_19b2_; char unknown_17e3_[0x17fb-0x17e3]; unsigned char unknown_19ca_;
#else
    char unknown_19b0_[2]; unsigned char unknown_19b2_; char unknown_19b3_[0x19ca-0x19b3]; unsigned char unknown_19ca_;
#endif

};
struct Struct_020391ac { char unknown_0_[0xc1]; unsigned char unknown_c1_; unsigned char unknown_c2_0_ : 4; unsigned char unknown_c2_4_ : 1; unsigned char unknown_c2_5_ : 3; };
extern "C" Struct_ov023_021eeaac_2* _ZZ21inline_ov023_021f4c04vE1s;
extern "C" Struct_02092e0c* func_020421a0();
extern "C" void* func_0202ae18();
extern "C" int func_02086ef0(Struct_02048150*, int);
extern "C" void func_ov023_021ed988(char*, int);
extern "C" void func_ov000_02163b90(Struct_ov000_02160da0*, int);
extern "C" void func_ov000_021626a0(Struct_ov000_02160da0*, int, int);
extern "C" void func_ov000_02163a7c(Struct_ov000_02163a7c*);
extern "C" void func_ov000_021639b4(Struct_ov000_02160da0*);
extern "C" void func_ov000_02167dd8(unsigned char*);
extern "C" int func_ov000_02153e40(void*, short*, int, int);
extern "C" void func_02048cf0(GameObject*, int);
extern "C" void func_ov000_0216e3c4(void*);
extern "C" unsigned char* func_ov000_02163524(void*);
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" void func_020d7334(unsigned char*, int);
extern "C" int func_02010088(Struct_02010088*);
extern "C" void func_02033b88(Struct_02010604*, int);
extern "C" void func_0203400c(Struct_02032e58*);
extern "C" GameObject* func_0200fea4(GameState*, int);
extern "C" GameObject* func_0200ff1c(GameState*, int);
extern "C" GameObject* func_0200ff58(GameState*, int);
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);
extern "C" void func_ov000_02160fa8(void*, int);
extern "C" void func_ov023_021d8a40(Struct_ov023_021f03a0_2*);
extern "C" void func_ov023_021d8cb4(void*, void*);
extern "C" void func_ov023_021d9988(Struct_ov023_021d9988*, void*, unsigned int);
extern "C" void func_02046380(Struct_02092e0c*);
extern "C" void func_ov023_021d8ddc(Struct_ov023_021f03a0_2*, int*);
extern "C" int func_02011518(void*, unsigned int);
extern "C" void func_020e4bf4(void*, int);
extern "C" char* func_02072a68(Struct_02072a68_2*, int);
#if !defined(jpn)
extern "C" void func_0204500c(Struct_02092e0c*, char*, int, int);
#endif
extern "C" Struct_ov023_021f03a0* func_ov023_021f0360(void*, int);
extern "C" int func_02082490(Struct_ov023_021f0a5c_3*, void*, unsigned int, unsigned char, int);
extern "C" int func_ov023_021f4438(Struct_ov000_02160da0*);
extern "C" int func_ov023_021f4fc8();
extern "C" void func_ov023_021eefac(Struct_ov023_021eeaac_2*);

#if defined(jpn)
extern "C" void func_0204500c(Struct_02092e0c*,char*,int);
#endif
// USA: func_ov023_021f03a0
extern "C" ARM int func_ov023_021f03a0(Struct_ov000_02160da0* arg0) {
    int var0;
    char var1[256];
#if defined(jpn)

#else
    char var2[12];
#endif

    char var3[40];
    short var4[12];
    GameState* var5 = GameState::GetInstance();
    Struct_ov023_021eeaac_2* var6 = _ZZ21inline_ov023_021f4c04vE1s;
    Struct_02092e0c* var7 = func_020421a0();
    func_0202ae18();
    GameResources* var8 = GetGameResources();
    BackgroundLoader* var9 = BackgroundLoader::GetInstance();
    func_02086ef0((Struct_02048150*)func_02010828(var5), var6->unknown_18_);
    if (var6->unknown_0_ == 0) {
        if (arg0->unknown_576c_) func_ov023_021ed988((char*)arg0, 0);
        func_ov000_02163b90(arg0, 1);
        func_ov000_021626a0(arg0, 4, 0);
        func_ov000_02163a7c((Struct_ov000_02163a7c*)arg0);
        func_ov000_021639b4(arg0);
        ClearFlags04(var8, 0x400);
        func_ov000_02167dd8((unsigned char*)arg0);
        void* var10 = arg0->unknown_29c_;
        int var11;
        GameState* var12 = GameState::GetInstance();
        var11 = func_ov000_02153e40(var10, var4, 12, 0);
        for (var0 = 0; var0 < var11; var0++) {
            GameObject* var13 = var12->GetCombatantByIndex(var4[var0]);
            if (var13) func_02048cf0(var13, 0);
        }
        func_ov000_0216e3c4(arg0->unknown_c18_);
        unsigned char* var14 = func_ov000_02163524(arg0);
        GameState* var15 = GameState::GetInstance();
        for (int var16 = 0; var16 < 4; var16++) {
            if (func_020a35e0((unsigned char*)arg0->unknown_2a0_, var16)) {
                if (var14) func_020d7334(var14, var16);
                GameObject* var17 = var15->GetCombatantByIndex(var16);
                if (var17 && !func_02010088((Struct_02010088*)var17)) {
                    ((Struct_020391ac*)var17)->unknown_c1_ &= ~0xf0;
                    func_02033b88((Struct_02010604*)var17, 0);
                    var17->obj3D_.SkipAnimationTransition();
                    func_0203400c((Struct_02032e58*)var17);
                    var17->obj3D_.MakeVisible();
                }
            }
        }
        for (int var18 = 0; var18 < 8; var18++) {
            GameObject* var19 = func_0200fea4(var15, var18 + 0xc0);
            if (var19 && ((Struct_020391ac*)var19)->unknown_c2_4_) var19->obj3D_.MakeVisible();
        }
        func_0205d6a0(&arg0->unknown_38e8_, 1);
        func_ov000_02160fa8(arg0, 0x40000);
        arg0->unknown_30_.Reset();
        arg0->unknown_5588_ = (Struct_ov023_021f03a0_2*)arg0->unknown_30_.Allocate(0x12c);
        func_ov023_021d8a40(arg0->unknown_5588_);
        func_ov023_021d8cb4(arg0->unknown_5588_, arg0->unknown_3760_);
        Struct_ov023_021eeaac_2* var20 = _ZZ21inline_ov023_021f4c04vE1s;
        unsigned char var21 = var20->unknown_2788_;
        Struct_ov023_021f03a0_2* var22 = arg0->unknown_5588_;
        var22->unknown_120_ = var20->unknown_118_;
        var22->unknown_11e_ = var21;
        func_ov023_021d9988((Struct_ov023_021d9988*)arg0->unknown_5588_, _ZZ21inline_ov023_021f4c04vE1s->unknown_2789_, _ZZ21inline_ov023_021f4c04vE1s->unknown_278d_);
        var6->unknown_0_++;
    } else if (var6->unknown_0_ == 1) {
        if (arg0->unknown_5588_->unknown_11b_ != 0xff) goto done;
#if defined(jpn)

#else
        func_02046380(var7);
#endif

        func_ov023_021d8ddc(arg0->unknown_5588_, arg0->unknown_5758_);
        BaseCombatStats* var23 = 0;
        if (arg0->unknown_2a0_->unknown_25_) {
            for (int var24 = 0; var24 < 4 && !var23; var24++) {
                int var25 = func_02011518(var5, (unsigned char)var24);
                if (arg0->unknown_5758_[var25]) {
                    GameObject* var26 = func_0200ff1c(var5, var25);
#if defined(jpn)

#else
#if defined(jpn)

#else
                    func_020e4bf4(var2, var25);
#endif

#endif

                    var23 = var26->baseStats_;
                }
            }
        } else {
            for (int var27 = 0; var27 < 4; var27++) {
                int var28 = func_02011518(var5, (unsigned char)var27);
                GameObject* var29 = func_0200ff1c(var5, var28);
                if (var29 && func_020a35e0((unsigned char*)arg0->unknown_2a0_, var28) && !func_02010088((Struct_02010088*)var29)) {
#if defined(jpn)

#else
#if defined(jpn)

#else
                    func_020e4bf4(var2, var28);
#endif

#endif

                    var23 = var29->baseStats_;
                    break;
                }
            }
        }
        int var30 = 0;
        for (int var31 = 0; var31 < 4; var31++) if (arg0->unknown_5758_[var31]) var30++;
        if (!var23) {
            for (int var32 = 0; var32 < 4; var32++) {
#if defined(jpn)
                GameObject* var33 = func_0200ff1c(var5, var32);
                if (var33 && func_020a35e0((unsigned char*)arg0->unknown_2a0_, var32) && !func_0200ff58(var5, var32))
                    var23 = var33->baseStats_;
#else
                if (func_0200ff1c(var5, var32) && func_020a35e0((unsigned char*)arg0->unknown_2a0_, var32) && !func_0200ff58(var5, var32))
                    func_020e4bf4(var2, var32);
#endif

            }
        }
#if defined(jpn)
        if (var30 > 1) sprintf(var1, func_02072a68(&arg0->unknown_5904_, 0x1a), var23);
        else sprintf(var1, func_02072a68(&arg0->unknown_5904_, 0x19), var23);
#else
        var7->unknown1_10_ = var2;
        int var34 = 0x19;
        if (var30 > 1) var34 = 0x1a;
        sprintf(var1, func_02072a68(&arg0->unknown_5904_, var34));
#endif

        strcat(var1, func_02072a68(&arg0->unknown_5904_, 0x22));
#if defined(jpn)
        func_0204500c(var7, var1, 1);
#else
        func_0204500c(var7, var1, 1, 0xe3);
#endif

        var7->unknown_19b2_ = 0;
        var7->unknown_998_ = 1;
        var6->unknown_0_++;
    } else if (var6->unknown_0_ == 2) {
        Struct_ov023_021f03a0* var35 = func_ov023_021f0360(_ZZ21inline_ov023_021f4c04vE1s, var6->unknown_11_);
        if (!var35) {
            var6->unknown_11_++;
            if (var6->unknown_11_ >= 4) var6->unknown_0_ = 4;
            return arg0->unknown_eac_;
        }
        sprintf(var3, func_02072a68(&arg0->unknown_5904_, 0), var35->unknown_1_);
        var6->unknown_4_ = var9->QueueLoadFile(var3, 0);
        var6->unknown_0_++;
    } else if (var6->unknown_0_ == 3) {
        if (!var9->GetTaskStatus(var6->unknown_4_)) return arg0->unknown_eac_;
        unsigned int var36;
        void* var37;
        int var38 = var6->unknown_11_;
        var9->GetLoadedFileByID(var6->unknown_4_, &var37, &var36);
        var9->RemoveTask(var6->unknown_4_);
        Struct_ov023_021f03a0* var39 = func_ov023_021f0360(_ZZ21inline_ov023_021f4c04vE1s, var38);
        if (var37 && func_02082490(&arg0->unknown_5770_[var38], var37, var36, var39->unknown_2_, var39->unknown_4_)) {
            if (!var39->unknown_3_) var6->unknown_12_[var38] = 1;
        }
        var6->unknown_11_++;
        if (var6->unknown_11_ < 4) {
            var6->unknown_0_ = 2;
            return arg0->unknown_eac_;
        }
        var6->unknown_0_++;
    } else if (var6->unknown_0_ == 4) {
        int var40 = 0;
        for (int var41 = 0; var41 < 4; var41++) if (var6->unknown_12_[var41]) { var40 = 1; break; }
        int var42 = func_ov023_021f4438(arg0);
        if (!var40 && !var42 && !arg0->unknown_5768_) {
            var7->unknown_19ae_ = 0;
            var7->unknown_19ca_ = 0;
            var7->unknown_19af_ = 0;
        }
        if (func_ov023_021f4fc8()) {
            func_ov023_021eefac(var6);
            return 7;
        }
    }
done:
    return arg0->unknown_eac_;
}
