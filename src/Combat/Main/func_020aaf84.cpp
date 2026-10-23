#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Graphics/LightingManager.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

struct Struct_020a94f8_2 {
    int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_[2];
    char unknown_8_[8];
    float unknown_10_;
};

struct Struct_02087574_2 {
    unsigned char unknown_0_[0x14];
};

struct Struct_020a9eb8_12 {
    unsigned short unknown_0_;
    short unknown_2_;
    Struct_02087574_2 unknown_4_[3];
};

struct Struct_020aaf84_7 {
    int unknown_0_;
    char unknown_4_[0x2ca8];
    char unknown_2cac_[0x344];
    char unknown_2ff0_[0xa0];
    char unknown_3090_[0x330];
    unsigned char unknown_33c0_[0x194];
    char unknown_3554_[0x4d0];
    char unknown_3a24_[0x3b4];
    char unknown_3dd8_[0xec];
    char unknown_3ec4_[0x1b40];
    char unknown_5a04_[0x404];
    char unknown_5e08_[0xad8];
    char unknown_68e0_[0x7c];
    char unknown_695c_[0x1c];
    char unknown_6978_[0x2c4];
    char unknown_6c3c_[0x110];
    Struct_020a9eb8_12 unknown_6d4c_;
};

struct Struct_020aaf84 {
    char unknown_0_[0x28000];
    Struct_020aaf84_7 unknown_28000_;
};

struct Struct_020aaf84_2 {
    char unknown_0_[0x569c];
    char unknown_569c_[0x7c];
    char unknown_5718_[0x5cc8 - 0x5718];
    unsigned char unknown_5cc8_;
    char unknown_5cc9_[0x5e6c - 0x5cc9];
    char unknown_5e6c_[0x110];
    char unknown_5f7c_[0x71fc - 0x5f7c];
    char unknown_71fc_[0x2c4];
    char unknown_74c0_[0x44];
    char unknown_7504_[0xec];
    char unknown_75f0_[0x4d0];
    char unknown_7ac0_[0x3b4];
};

struct Struct_020aaf84_3 {
    char unknown_0_[0xf2c];
    Struct_02087574_2 unknown_f2c_[3];
};

struct Struct_020aaf84_4 {
    char unknown_0_[0x8c];
    unsigned char unknown_8c_[1];
};

struct Struct_020aaf84_5 { char unknown_0_[0xa0]; char unknown_a0_[0xd8]; char unknown_178_[0x330]; };
struct Struct_02011544;
struct Struct_02038598_4;

extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
extern const char data_020f1bf0[];
extern "C" int func_02075910(int, void*, unsigned int, int);
extern "C" int func_01ff85b8(void*, int);
extern "C" Struct_020aaf84_4* func_0205ec34();
#if defined(jpn)
extern "C" int func_020a95a4(void*, void*);
#else
extern "C" int func_020a95a4(void*, void*, unsigned char*);
#endif
extern "C" int func_020a9a50(void*, void*, int);
extern "C" void func_020a9b2c(void*);
extern "C" void func_020a9c14(void*);
extern "C" void func_020a9e30(void*);
extern "C" Zone3D* func_02012fe4();
extern "C" int func_020a94f8(Struct_020a94f8_2*, int);
extern "C" void* func_020d6c00();
extern "C" void func_020466e4(unsigned int*, unsigned int);
extern "C" void func_020466f4(Struct_02038598_4*, unsigned int);
extern "C" void func_02011544(Struct_02011544*);
extern "C" Struct_020aaf84_5* func_02094d6c();
extern "C" void* func_020108d8(char*, int);
extern "C" void func_020a9af8(unsigned char*);
extern "C" void func_020a9ba4(void*);
extern "C" void func_020a9d78(void*);
extern "C" void* func_02010828(GameState*);
extern "C" void func_020865ec(char*);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);

// USA: func_020aaf84
#if defined(jpn)
struct Struct_020aaf84_6 {
    char unknown_0_[0x543c];
    char unknown_543c_[0x7c];
    char unknown_54b8_[0x5a68 - 0x54b8];
    unsigned char unknown_5a68_;
    char unknown_5a69_[0x5c0c - 0x5a69];
    char unknown_5c0c_[0x110];
    char unknown_5d1c_[0x6fbc - 0x5d1c];
    char unknown_6fbc_[0x2c4];
    char unknown_7280_[0x44];
    char unknown_72c4_[0xec];
    char unknown_73b0_[0x4d0];
    char unknown_7880_[0x3b4];
};

extern "C" ARM int func_020aaf84(int* arg0, int arg1, int arg2, int arg3) {
    GameState* var0;
    Struct_020a94f8_2 var1;
    int var2;
    Struct_020aaf84_6* var3;
    Struct_020aaf84_4* var4;
    LightingManager* var5;
    Struct_020aaf84_5* var6;
    int var7;
    int var8;
    int var9;
    Struct_020aaf84_3* var10;
    Struct_020a9eb8_12* var11;
    Struct_020aaf84_7* var12;
    var0 = GameState::GetInstance();
    var3 = (Struct_020aaf84_6*)var0;
    var3->unknown_5a68_ = 0;
    var2 = 1;
    if (!func_020a94f8(&var1, arg2 != 0)) var2 = 0;
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    if (arg2) var7 = 0x8084;
    else var7 = 0x84;
    var12 = &((Struct_020aaf84*)data_0211e33c)->unknown_28000_;
    if (!func_02075910(var7, var12, 0x6f60, 0)) var2 = 0;
    if (!strcmp(var1.unknown_8_, data_020f1bf0) && var2) {
        if (func_01ff85b8(var12->unknown_4_, 0x6f5c) != var12->unknown_0_) {
            var3->unknown_5a68_ = arg2 ? 3 : 2;
            var2 = 0;
        }
    }
    if (arg3) {
        BackgroundLoader::RemoveLockGlobal();
        return var2;
    }
    if (!var2) {
        func_02011544((Struct_02011544*)var0);
        BackgroundLoader::RemoveLockGlobal();
        return 0;
    }
    var4 = func_0205ec34();
    var6 = func_02094d6c();
    func_020a95a4(var12->unknown_4_, func_020108d8((char*)var0, 0));
    func_020a9a50(var12->unknown_2cac_, var4, 0);
    memcpy(var6, var12->unknown_2ff0_, 0xa0);
    memcpy(func_02094d6c()->unknown_178_, var12->unknown_3090_, 0x330);
    func_020a9af8(var12->unknown_33c0_);
    memcpy(var3->unknown_73b0_, var12->unknown_3554_, 0x4d0);
    memcpy(var3->unknown_7880_, var12->unknown_3a24_, 0x3b4);
    memcpy(var3->unknown_72c4_, var12->unknown_3dd8_, 0xec);
    func_020a9b2c(var12->unknown_3ec4_);
    func_020a9ba4(var12->unknown_5a04_);
    func_020a9c14(var12->unknown_5e08_);
    memcpy(((Struct_020aaf84_6*)GameState::GetInstance())->unknown_543c_, var12->unknown_68e0_, 0x7c);
    if (arg2) {
        func_020a9d78(var12->unknown_695c_);
        func_020a9e30(&var12->unknown_6d4c_);
    } else {
        var11 = &var12->unknown_6d4c_;
        var10 = (Struct_020aaf84_3*)func_02010828(GameState::GetInstance());
        for (var9 = 0; var9 < 3; var9++) {
            func_020865ec((char*)&var10->unknown_f2c_[var9]);
        }
        if (var11->unknown_0_ && var11->unknown_2_) {
            for (var8 = 0; var8 < var11->unknown_2_; var8++) {
                memcpy(&var10->unknown_f2c_[var8], &var11->unknown_4_[var8], sizeof(Struct_02087574_2));
            }
        }
    }
    memcpy(((Struct_020aaf84_6*)GameState::GetInstance())->unknown_6fbc_, var12->unknown_6978_, 0x2c4);
    memcpy(((Struct_020aaf84_6*)GameState::GetInstance())->unknown_5c0c_, var12->unknown_6c3c_, 0x110);
    var5 = LightingManager::GetInstance();
    var0->SetDayTimer(var1.unknown_10_);
    var5->dayNightTimer_ = var1.unknown_10_;
    var5->timeOfDayIndex_ = var0->GetTimeOfDay();
    var5->SetZone(func_02012fe4());
    var5->RecomputeAdvancedLighting();
    func_0206df6c(var4, var4->unknown_8c_, 3, 0);
    BackgroundLoader::RemoveLockGlobal();
    return 1;
}
#else
extern "C" ARM int func_020aaf84(int* arg0, int arg1, int arg2, int arg3) {
    GameState* var13;
    Struct_020a94f8_2 var14;
    int var15;
    Struct_020aaf84_2* var16;
    unsigned int* var17;
    unsigned char var18;
    LightingManager* var19;
    Struct_020aaf84_5* var20;
    int var21;
    int var22;
    int var23;
    Struct_020aaf84_3* var24;
    Struct_020a9eb8_12* var25;
    Struct_020aaf84_4* var26;
    Struct_020aaf84_7* var27;
    var13 = GameState::GetInstance();
    var16 = (Struct_020aaf84_2*)var13;
    var16->unknown_5cc8_ = 0;
    var15 = 1;
    if (!func_020a94f8(&var14, arg2 != 0)) var15 = 0;
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    var17 = (unsigned int*)func_020d6c00();
    func_020466e4(var17, 0x2000000);
    if (arg2) var21 = 0x8084;
    else var21 = 0x84;
    var27 = &((Struct_020aaf84*)data_0211e33c)->unknown_28000_;
    if (!func_02075910(var21, var27, 0x6f60, 0)) var15 = 0;
    if (!strcmp(var14.unknown_8_, data_020f1bf0) && var15) {
        if (func_01ff85b8(var27->unknown_4_, 0x6f5c) != var27->unknown_0_) {
            var16->unknown_5cc8_ = arg2 ? 3 : 2;
            var15 = 0;
        }
    }
    if (arg3) {
        func_020466f4((Struct_02038598_4*)var17, 0x2000000);
        BackgroundLoader::RemoveLockGlobal();
        return var15;
    }
    if (!var15) {
        func_02011544((Struct_02011544*)var13);
        func_020466f4((Struct_02038598_4*)var17, 0x2000000);
        BackgroundLoader::RemoveLockGlobal();
        return 0;
    }
    var26 = func_0205ec34();
    var20 = func_02094d6c();
    var18 = 0;
    func_020a95a4(var27->unknown_4_, func_020108d8((char*)var13, 0), &var18);
    func_020a9a50(var27->unknown_2cac_, var26, 0);
    memcpy(var20, var27->unknown_2ff0_, 0xa0);
    memcpy(func_02094d6c()->unknown_178_, var27->unknown_3090_, 0x330);
    func_020a9af8(var27->unknown_33c0_);
    memcpy(var16->unknown_75f0_, var27->unknown_3554_, 0x4d0);
    memcpy(var16->unknown_7ac0_, var27->unknown_3a24_, 0x3b4);
    memcpy(var16->unknown_7504_, var27->unknown_3dd8_, 0xec);
    func_020a9b2c(var27->unknown_3ec4_);
    func_020a9ba4(var27->unknown_5a04_);
    func_020a9c14(var27->unknown_5e08_);
    memcpy(((Struct_020aaf84_2*)GameState::GetInstance())->unknown_569c_, var27->unknown_68e0_, 0x7c);
    if (arg2) {
        func_020a9d78(var27->unknown_695c_);
        func_020a9e30(&var27->unknown_6d4c_);
    } else if (var18) {
        var25 = &var27->unknown_6d4c_;
        var24 = (Struct_020aaf84_3*)func_02010828(GameState::GetInstance());
        for (var23 = 0; var23 < 3; var23++) {
            func_020865ec((char*)&var24->unknown_f2c_[var23]);
        }
        if (var25->unknown_0_ && var25->unknown_2_) {
            for (var22 = 0; var22 < var25->unknown_2_; var22++) {
                memcpy(&var24->unknown_f2c_[var22], &var25->unknown_4_[var22], sizeof(Struct_02087574_2));
            }
        }
    }
    memcpy(((Struct_020aaf84_2*)GameState::GetInstance())->unknown_71fc_, var27->unknown_6978_, 0x2c4);
    memcpy(((Struct_020aaf84_2*)GameState::GetInstance())->unknown_5e6c_, var27->unknown_6c3c_, 0x110);
    var19 = LightingManager::GetInstance();
    var13->SetDayTimer(var14.unknown_10_);
    var19->dayNightTimer_ = var14.unknown_10_;
    var19->timeOfDayIndex_ = var13->GetTimeOfDay();
    var19->SetZone(func_02012fe4());
    var19->RecomputeAdvancedLighting();
    func_0206df6c(var26, var26->unknown_8c_, 3, 0);
    func_020466f4((Struct_02038598_4*)var17, 0x2000000);
    BackgroundLoader::RemoveLockGlobal();
    return 1;
}
#endif
