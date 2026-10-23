#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/DetailedTreasureMapData.h"
#include "Resource/GameResources.h"
#include "std_library_functions.h"

struct Struct_ov004_021549e4_2;
struct Struct_0202656c;
struct Struct_02072a68_2;

struct Struct_ov004_021636b0 {
    TreasureMapMetadata unknown_0_[99];
    DetailedTreasureMapData unknown_ad4_[8];

    DetailedTreasureMapData::RegularMapData* inline_ov004_021636b0(int arg0) {
        return &unknown_ad4_[arg0].regular_;
    }

    DetailedTreasureMapData::LegacyBossMapData* inline_ov004_021636b0_2(int arg0) {
        return &unknown_ad4_[arg0].legacy_;
    }
};

struct Struct_ov004_02171010 {
    Struct_ov004_021636b0* unknown_0_;
    char* unknown_4_;
    void* unknown_8_;
};

extern struct Struct_ov004_02171010 data_ov004_02171010;

extern "C" void* func_02012fe4(void);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" struct Struct_02072a68_2* func_ov023_021fa598(void* arg0);
extern "C" int func_ov004_0216f8c0(unsigned short arg0);
extern "C" void func_02046608(int arg0, int arg1, char* arg2, char* arg3, int arg4, int arg5, int arg6);
extern "C" void* __clear(void* arg0, int arg1);

extern "C" unsigned int func_ov023_021f6f10(void* arg0);
extern "C" int func_ov023_021f9bb0(struct Struct_ov004_021549e4_2* arg0);
extern "C" void func_02026428(void* arg0, const char* arg1);
extern "C" void func_02026470(void* arg0, int arg1);
extern "C" void func_020264e4(char* arg0, char* arg1);
extern "C" void func_02026528(char* arg0, char* arg1);
extern "C" void func_0202656c(struct Struct_0202656c* arg0, int arg1);
extern "C" int func_020421a0(void);
extern "C" void func_020265a8(char* arg0, int arg1, const char* arg2, int arg3);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" void func_0206819c(const char* arg0, char* arg1, int arg2);
extern "C" void* func_020e5294(void* arg0, int arg1);
extern "C" void func_020263c8(unsigned char* arg0, int arg1);
extern "C" void func_02026418(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020dc3d4(void);

#if defined(jpn)
extern "C" int func_ov004_0216ff54(unsigned short arg0, char* arg1);
extern "C" void func_02041f50(const char* arg0, char* arg1);
#endif

// USA: func_ov004_021636b0
extern "C" ARM void func_ov004_021636b0(void* arg0, const char* arg1) {
#if !defined(jpn)
    char var0[0x80];
#endif
    char var1[0x80];

    char* var2 = (char*)func_02012fe4();
#if !defined(jpn)
    DetailedTreasureMapData* var3;
#endif
    void* var4;
    char* var5;
    struct Struct_02072a68_2* var6;
    unsigned char* var7;
    GameResources* var8 = GetGameResources();
    var7 = (unsigned char*)var8->unknown_ptr_36d0;
    strcpy(var2 + 0x26, arg1);
    func_020dc3d4();
    func_02026418(var7, 1);
    *(int*)(var7 + 0x14) = 1;

    void* var9 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xa);
    if (var9 == NULL) return;
    if (func_ov023_021f6f10(var9) != 7) return;

    int var10 = func_ov023_021f9bb0((struct Struct_ov004_021549e4_2*)var9);
#if !defined(jpn)
    var3 = &data_ov004_02171010.unknown_0_->unknown_ad4_[var10];
#endif

#if defined(jpn)
    if (data_ov004_02171010.unknown_0_->unknown_ad4_[var10].mapType_ == 1) {
        func_02026428(var7, data_ov004_02171010.unknown_0_->inline_ov004_021636b0(var10)->nameNoLevel_);
        func_02026470(var7, data_ov004_02171010.unknown_0_->unknown_ad4_[var10].regular_.level_);
    } else if (data_ov004_02171010.unknown_0_->unknown_ad4_[var10].mapType_ == 2) {
        func_02026428(var7, data_ov004_02171010.unknown_0_->inline_ov004_021636b0_2(var10)->mapNameNoLevel_);
        func_02026470(var7, data_ov004_02171010.unknown_0_->unknown_ad4_[var10].legacy_.level_);
    }
    func_020264e4((char*)var7, data_ov004_02171010.unknown_0_->unknown_ad4_[var10].discoveredBy_);
    func_02026528((char*)var7, data_ov004_02171010.unknown_0_->unknown_ad4_[var10].clearedBy_);
    if (data_ov004_02171010.unknown_0_->unknown_ad4_[var10].mapType_ == 2) {
        func_0202656c((struct Struct_0202656c*)var7, data_ov004_02171010.unknown_0_->unknown_ad4_[var10].legacy_.minTurns_);
    }

#else
    if (var3->mapType_ == 1) {
        func_02026428(var7, var3->regular_.nameNoLevel_);
        func_02026470(var7, var3->regular_.level_);
    } else if (var3->mapType_ == 2) {
        func_02026428(var7, var3->legacy_.mapNameNoLevel_);
        func_02026470(var7, var3->legacy_.level_);
    }
    func_020264e4((char*)var7, var3->discoveredBy_);
    func_02026528((char*)var7, var3->clearedBy_);
    if (var3->mapType_ == 2) {
        func_0202656c((struct Struct_0202656c*)var7, var3->legacy_.minTurns_);
    }

#endif

    var4 = func_ov011_021849c8(arg0);
#if defined(jpn)
    void* var11 = func_ov023_021f6880(var4, 0x258);
    if (var11 == NULL) return;
    if (func_ov023_021f6f10(var11) != 4) return;
    var6 = func_ov023_021fa598(var11);
    for (int var12 = 0; var12 < 3; var12++) {
        __clear(var1, sizeof(var1));
        if (data_ov004_02171010.unknown_0_->unknown_ad4_[var10].discoveredTreasures_[var12] == 0) {
            func_020265a8((char*)var7, (unsigned char)var12, NULL, data_ov004_02171010.unknown_0_->unknown_ad4_[var10].treasureDropRates_[var12]);
            continue;
        }
        if (!func_ov004_0216ff54(data_ov004_02171010.unknown_0_->unknown_ad4_[var10].treasureItemIDs_[var12], var1)) {
            const char* var13 = (const char*)func_02072a68(var6, (short)data_ov004_02171010.unknown_0_->unknown_ad4_[var10].treasureItemIDs_[var12]);
            if (var13 != NULL) {
                func_02041f50(var13, var1);
            }
        }
        unsigned char var14 = data_ov004_02171010.unknown_0_->unknown_ad4_[var10].treasureDropRates_[var12];
        func_020265a8((char*)var7, (unsigned char)var12, var1, var14);
    }
#else
    memset(data_ov004_02171010.unknown_4_, 0, 0x333);

    for (int var15 = 0; var15 < 3; var15++) {
        __clear(var0, 0x80);
        __clear(var1, 0x80);
        int var16 = func_020421a0();
        if (var3->discoveredTreasures_[var15] == 0) {
            func_020265a8((char*)var7, (unsigned char)var15, NULL, var3->treasureDropRates_[var15]);
            continue;
        }

        var5 = data_ov004_02171010.unknown_4_ + var15 * 0x80;
        memset(var5, 0, 0x80);
        int var17 = func_ov004_0216f8c0(var3->treasureItemIDs_[var15]);
        if (var17 != 0) {
            void* var18 = func_ov023_021f6880(var4, 0x32);
            if (var18 == NULL) return;
            if (func_ov023_021f6f10(var18) != 4) return;
            struct Struct_02072a68_2* var19 = func_ov023_021fa598(var18);
            func_0206819c((const char*)func_02072a68(var19, (short)var17), var1, 0);
            func_02046608(var16, 0, var1, var5, 0x60, 0, 0);
        } else {
            char** var20 = (char**)func_020e5294(data_ov004_02171010.unknown_8_, (short)var3->treasureItemIDs_[var15]);
            func_0206819c(*var20, var1, 0);
            func_02046608(var16, 0, var1, var5, 0x60, 0, 0);
        }
        func_020265a8((char*)var7, (unsigned char)var15, var5, var3->treasureDropRates_[var15]);
    }

#endif
    func_020263c8(var7, 1);
}
