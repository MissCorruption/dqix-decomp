#include <globaldefs.h>
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "GameState/BattleRecordSnapshot.h"
#include "NitroSDK/Memory.h"

extern "C" void* func_0202ae24();
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202ba00(int* arg0);
extern "C" int func_020ac4f8(int arg0);
extern "C" int func_020ac4c0(void* arg0);
extern "C" int func_020ac0b4(void* arg0);
extern "C" int func_020a0870(Struct_02061c04* arg0);
extern "C" int func_020a08a4(Struct_02061c04* arg0);
extern "C" int func_020a08d8(Struct_02061c04* arg0);
extern "C" int func_020a090c(Struct_02061c04* arg0);

struct Struct_ov017_021d1118_8 { unsigned char unknown_0_[6]; };

struct Struct_ov017_021d1118_9 {
    unsigned char unknown_0_[14];
    unsigned char unknown_e_0_ : 2;
    unsigned char unknown_e_2_ : 2;
    unsigned char unknown_e_4_ : 4;
    unsigned char unknown_f_0_ : 2;
    unsigned char unknown_f_2_ : 4;
    unsigned char unknown_f_6_ : 1;
    unsigned char unknown_f_7_ : 1;
};

struct Struct_ov017_021d1118 {
    unsigned char unknown_0_;
    char unknown_1_[3];
    Struct_ov017_021d1118_9 unknown_4_;
};

struct Struct_ov017_021d1118_2 {
    unsigned int unknown_0_0_ : 14;
    unsigned int unknown_1_6_ : 17;
    unsigned int unknown_3_7_ : 1;
    unsigned int unknown_4_0_ : 14;
    unsigned int unknown_5_6_ : 17;
    unsigned int unknown_7_7_ : 1;
    unsigned int unknown_8_0_ : 7;
    unsigned int unknown_8_7_ : 7;
    unsigned int unknown_9_6_ : 7;
    unsigned int unknown_a_5_ : 7;
    unsigned int unknown_b_4_ : 4;
    unsigned int unknown_c_0_ : 10;
    unsigned int unknown_d_2_ : 14;
    unsigned int unknown_f_0_ : 7;
    unsigned int unknown_f_7_ : 1;
    unsigned int unknown_10_0_ : 9;
    unsigned int unknown_11_1_ : 14;
    unsigned int unknown_12_7_ : 7;
    unsigned int unknown_13_6_ : 2;
    short unknown_14_;
    unsigned char unknown_16_0_ : 1;
    unsigned char unknown_16_1_ : 4;
};

struct Struct_ov017_021d1118_3 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 19;
    signed int unknown_6_3_ : 11;
    unsigned int unknown_7_6_ : 2;
    char unknown_8_[0x7c - 8];
};

struct Struct_ov017_021d1118_4 {
#if defined(jpn)
    char unknown_0_[0x543c];
    Struct_ov017_021d1118_3 unknown_569c_;
    char unknown_54b8_[0x72be - 0x54b8];
#else
    char unknown1_0_[0x569c];
    Struct_ov017_021d1118_3 unknown_569c_;
    char unknown_5718_[0x74fe - 0x5718];
#endif
    Struct_ov017_021d1118_8 unknown_74fe_;
    Struct_ov017_021d1118_8 inline_ov017_021d1118() { return unknown_74fe_; }
};

struct Struct_ov017_021d1118_5 {
    char unknown_0_[0x186];
    unsigned char unknown_186_[0x49c - 0x186];
    unsigned char unknown_49c_0_ : 1;
#if defined(jpn)
    char unknown_49d_[0x8b8 - 0x49d];
#else
    char unknown1_49d_[0x950 - 0x49d];
#endif
    int unknown_950_;
};

struct Struct_ov017_021d1118_6 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    Struct_ov017_021d1118_5* unknown_150_;
};

struct Struct_ov017_021d1118_7 {
    char unknown_0_[0x100d];
    unsigned char unknown_100d_;
};

// USA: func_ov017_021d1118
extern "C" ARM void func_ov017_021d1118(int arg0, int arg1, bool arg2, unsigned char arg3) {
    GameState* var0;
    void* var1;
    Struct_ov017_021d1118_9* var2;
    unsigned char* var3;
    Struct_ov017_021d1118_7* var4;
    int var5;
    int var6;
    int var7;
    int var8;
    int var9;
    Struct_ov017_021d1118_6* var10;
    Struct_ov017_021d1118_5* var11;
    int var12;
    int var13;
    Struct_ov017_021d1118_3* var14;
    var0 = GameState::GetInstance();
    var1 = func_0202ae24();
    Struct_ov017_021d1118 var15;
    var2 = &var15.unknown_4_;
    var15.unknown_0_ = 0x1a;
    var2->unknown_e_2_ = arg3;
    var2->unknown_f_7_ = arg2;
    var2->unknown_e_0_ = arg0;
    var14 = &((Struct_ov017_021d1118_4*)var0)->unknown_569c_;
    if (arg1 & 4) {
        var2->unknown_f_0_ = 2;
        var2->unknown_f_2_ = 6;
        Struct_ov017_021d1118_8 var16 = ((Struct_ov017_021d1118_4*)var0)->inline_ov017_021d1118();
        memcpy(var2->unknown_0_, &var16, var2->unknown_f_2_);
        func_0205e330(var1, &var15, 0);
    }
    if (arg1 & 1) {
        var4 = (Struct_ov017_021d1118_7*)func_0202ae18();
        var5 = func_0202ba00((int*)var4);
        var6 = var4->unknown_100d_;
        var7 = 0;
        if ((var5 == 5 && var6 > 1) || var5 == 6) var7 = 1;
        func_020ac4f8(var7);
        Struct_02061c04 var17;
        func_020ac4c0(&var17);
        unsigned int var18 = 0;
        func_020ac0b4(&var18);
        var8 = 0;
        var9 = 0;
        var10 = (Struct_ov017_021d1118_6*)var0->GetProtagonist();
        if (var10) {
            var11 = var10->unknown_150_;
            var8 = var11->unknown_49c_0_;
            var9 = var11->unknown_186_[var11->unknown_950_];
        }
        Struct_ov017_021d1118_2 var19;
        VectorizedMemset(&var19, 0, sizeof(var19));
        var19.unknown_0_0_ = var17.unknown_0_.unknown_0_.unknown_0_;
        var19.unknown_8_0_ = var17.unknown_0_.unknown_0_.unknown_2_;
        var19.unknown_4_0_ = var17.unknown_0_.unknown_4_.unknown_0_;
        var19.unknown_8_7_ = var17.unknown_0_.unknown_4_.unknown_2_;
        var19.unknown_5_6_ = var17.unknown_8_0_;
        var19.unknown_1_6_ = var18;
        var19.unknown_c_0_ = var17.unknown_10_0_;
        var19.unknown_10_0_ = var17.unknown_b_0_;
        var19.unknown_d_2_ = var17.unknown_d_6_;
        var19.unknown_11_1_ = var17.unknown_11_1_;
        var19.unknown_9_6_ = (unsigned char)func_020a0870(&var17);
        var19.unknown_a_5_ = (unsigned char)func_020a08a4(&var17);
        var19.unknown_f_0_ = (unsigned char)func_020a08d8(&var17);
        var19.unknown_12_7_ = (unsigned char)func_020a090c(&var17);
        var19.unknown_14_ = var14->unknown_6_3_;
        var19.unknown_16_0_ = var8;
        var19.unknown_16_1_ = var9;
        var2->unknown_f_0_ = 0;
        var2->unknown_f_6_ = 0;
        var3 = (unsigned char*)&var19;
        for (var12 = sizeof(var19); var12 > 0; var3 += 14, var12 -= 14) {
            if (var12 > 14) {
                var2->unknown_f_2_ = 14;
            } else {
                var2->unknown_f_2_ = var12;
                if (!(arg1 & 2)) var2->unknown_f_6_ = 1;
            }
            memcpy(var2->unknown_0_, var3, var2->unknown_f_2_);
            func_0205e330(var1, &var15, 0);
        }
    }
    if (arg1 & 2) {
        var2->unknown_f_0_ = 1;
        var3 = (unsigned char*)var14;
        for (var13 = sizeof(*var14); var13 > 0; var3 += 14, var13 -= 14) {
            if (var13 > 14) {
                var2->unknown_f_2_ = 14;
            } else {
                var2->unknown_f_2_ = var13;
                var2->unknown_f_6_ = 1;
            }
            memcpy(var2->unknown_0_, var3, var2->unknown_f_2_);
            func_0205e330(var1, &var15, 0);
        }
    }
}
