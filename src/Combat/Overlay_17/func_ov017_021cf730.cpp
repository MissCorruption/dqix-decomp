#include <globaldefs.h>
#include "GameState/GameState.h"
struct Struct_ov017_021cf730_2 {
    unsigned short unknown_0_; unsigned char unknown_2_;
    union {
        unsigned char unknown_0_;
        struct { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 1; unsigned char unknown_0_2_ : 1; signed char unknown_0_3_ : 5; } unknown1_0_;
    } unknown_3_;
    unsigned char unknown_4_; unsigned char unknown_5_; unsigned short unknown_6_;
    unsigned short unknown_8_; unsigned short unknown_a_; unsigned short unknown_c_; signed char unknown_e_;
    union { unsigned char unknown_0_; struct { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; } unknown1_0_; } unknown_f_;
};

struct Struct_ov017_021cf730 { char unknown_0_[0xc]; int unknown_c_; };
extern "C" int* func_0202ae18();
extern "C" int func_0202b7d8(int*);
extern "C" int func_0202c540(int*);
extern "C" void* func_0202ae24();
extern "C" void func_0205e330(void*, void*, int);

// USA: func_ov017_021cf730
extern "C" ARM void func_ov017_021cf730(signed char arg0, unsigned char arg1) {
    int* var0 = func_0202ae18();
    if (!func_0202b7d8(var0) || func_0202c540(var0)) return;
    GameState* var1 = GameState::GetInstance();
    void* var2 = func_0202ae24();
    unsigned char var3[0x14];
    Struct_ov017_021cf730_2* var4 = (Struct_ov017_021cf730_2*)(var3 + 4);
    GrottoStruct* var5 = var1->GetGrottoStruct();
    var3[0] = 0xa0;
    var4->unknown_0_ = ((Struct_ov017_021cf730*)var5)->unknown_c_;
    var4->unknown_2_ = var5->activeMapData.DiscoveryStateAndMapTypeAndUnknown;
    var4->unknown_3_.unknown1_0_.unknown_0_0_ = var5->unknown_0[0] != 0;
    var4->unknown_3_.unknown1_0_.unknown_0_2_ = arg1;
    var4->unknown_8_ = var5->entranceX >> 7;
    var4->unknown_a_ = var5->entranceY >> 7;
    var4->unknown_c_ = var5->entranceZ >> 7;
    var4->unknown_4_ = var5->activeMapData.QualityOrLegacyBossID;
    var4->unknown_5_ = var5->activeMapData.LegacyBossLevel;
    var4->unknown_6_ = var5->activeMapData.SeedOrMinTurns;
    var4->unknown_f_.unknown1_0_.unknown_0_0_ = var5->activeStartingMonsterRank;
    var4->unknown_f_.unknown1_0_.unknown_0_4_ = var5->activeEnviron;
    var4->unknown_e_ = *((signed char*)var5 + 8);
    var4->unknown_3_.unknown1_0_.unknown_0_3_ = arg0;
    func_0205e330(var2, var3, 0);
}
