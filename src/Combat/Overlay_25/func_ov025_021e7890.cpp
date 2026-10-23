#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov025_021e7890_3 {
#if defined(jpn)
    char unknown_0_[0x508];
#else
    char unknown1_0_[0x718];
#endif
    void* unknown_718_;
};
struct Struct_ov025_021e7890_4 {
    char unknown_0_[0x3000];
    Struct_ov025_021e7890_3 unknown_3000_;
};

struct Struct_02070fe4 {
    unsigned int unknown_0_0_ : 12;
};
struct Struct_02070f98 {
    unsigned short unknown_0_0_ : 15;
    unsigned short unknown_1_7_ : 1;
};
struct Struct_02070f98_2 {
    Struct_02070fe4 unknown_0_;
    struct Struct_02070f98* unknown_4_;
};
struct Struct_ov025_021e7890_5 {
    char unknown_0_[0x400];
    Struct_02070f98_2 unknown_400_;
};
struct Struct_ov025_021e7890_6 {
    char unknown_0_[0x284];
    Struct_ov025_021e7890_5 unknown_284_;
};

struct Struct_ov025_021e7890_7 {
    unsigned int unknown_0_[0x70 / 4];
};
struct Struct_ov025_021e7890_8 {
    char unknown_0_[0x10];
    float unknown_10_[3];
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
    unsigned char unknown_1f_;
    int unknown_20_;
    char unknown_24_[0x4c - 0x24];
    unsigned char unknown_4c_;
    unsigned char unknown_4d_;
    char unknown_4e_[0x70 - 0x4e];
};
struct Struct_ov025_021e7890 {
    char unknown_0_[0x13c];
    Struct_ov025_021e7890_8* unknown_13c_;
};

struct Struct_ov000_0215440c_2;
struct Struct_ov000_0215440c_4 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
};
struct Struct_ov025_021e7890_2 {
    unsigned short unknown_0_;
};

extern "C" Struct_ov025_021e7890_6* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov000_02160130(void);
extern "C" Struct_ov000_0215440c_4* func_ov000_02160094(Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" int func_02070fe4(Struct_02070fe4* arg0);
extern "C" Struct_02070f98* func_02070f98(Struct_02070f98_2* arg0, int arg1);
extern "C" void func_0200fd48(GameState* arg0, int arg1);
extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_ov025_021e771c(short* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov000_02161c0c(void* arg0, int arg1);
extern "C" void func_ov000_021677fc(void* arg0);
extern "C" void func_ov000_02167e6c(unsigned char*);
struct Vector3i;

#if defined(jpn)
#define data_ov025_021eef18 data_ov025_021ef200
#define data_ov025_021eef30 data_ov025_021ef218
#endif
extern const unsigned short data_ov025_021eef18[5];
extern const unsigned short data_ov025_021eef30[7];

// USA: func_ov025_021e7890
extern "C" ARM int func_ov025_021e7890(int arg0, Struct_ov025_021e7890_2* arg1) {
    Struct_ov025_021e7890_8 var0;
    short var1[10];
    Struct_ov025_021e7890_5* var2;
    int var3;
    Struct_ov025_021e7890_4* var4;
    Struct_ov025_021e7890_6* var5;
    GameState* var6;
    void* var7;
    Struct_ov000_0215440c_4* var8;
    unsigned char var9;
    unsigned char var10;
    var4 = (Struct_ov025_021e7890_4*)GetGameResources();
    var6 = GameState::GetInstance();
    var5 = func_ov017_021b8478(var4->unknown_3000_.unknown_718_);
    var7 = func_ov000_02160130();
    var8 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, 0);
    if (var8 == 0) return 1;
    Struct_ov025_021e7890* var11 = (Struct_ov025_021e7890*)var6->GetCombatantByIndex(var8->unknown_20_);
    if (var11 == 0) return 1;
    Struct_ov025_021e7890_8* var12 = var11->unknown_13c_;
    if (var12 == 0) return 1;
    *(Struct_ov025_021e7890_7*)&var0 = *(Struct_ov025_021e7890_7*)var12;
    __clear(var1, 0x14);
    if (arg1->unknown_0_ == 0x153) {
        memcpy(var1, data_ov025_021eef18, 0xa);
        var9 = 1;
        var10 = 5;
    } else if (arg1->unknown_0_ == 0x31a) {
        memcpy(var1, data_ov025_021eef30, 0xe);
        var9 = 3;
        var10 = 7;
    } else {
        return 1;
    }
    var2 = &var5->unknown_284_;
    int var13 = func_02070fe4(&var2->unknown_400_.unknown_0_);
    for (int var14 = 0; var14 < var13; var14++) {
        Struct_02070f98* var15 = func_02070f98(&var2->unknown_400_, var14);
        if (var15 == 0) continue;
        int var16 = 1;
        short* var17 = var1;
        int var18 = 0;
        while (var18 < var10) {
            if (var15->unknown_0_0_ == *var17) {
                var16 = 0;
                break;
            }
            var18 = var18 + 1;
            var17 = var17 + 1;
        }
        if (var16) {
            var1[var10++] = var15->unknown_0_0_;
        }
    }
    func_ov025_021e771c(var1, var9, (int)var1, var10);
    func_ov000_02161c0c(var7, var8->unknown_20_);
    for (var3 = 0; var3 < 8; var3++) {
        short var19 = (short)(var3 + 0xc0);
        if (var8->unknown_20_ != var19) func_0200fd48(var6, var19);
    }
    func_ov000_021677fc(var7);
    func_ov000_02167e6c((unsigned char*)var7);
    Struct_ov025_021e7890* var20 = (Struct_ov025_021e7890*)var6->GetCombatantByIndex(var8->unknown_20_);
    if (var20 != 0) {
        Struct_ov025_021e7890_8* var21 = var20->unknown_13c_;
        if (var21 != 0) {
            *(Vector3i*)var21->unknown_10_ = *(Vector3i const*)var0.unknown_10_;
            var21->unknown_1c_ = var0.unknown_1c_;
            var21->unknown_1d_ = var0.unknown_1d_;
            var21->unknown_1e_ = var0.unknown_1e_;
            var21->unknown_1f_ = var0.unknown_1f_;
            var21->unknown_20_ = var0.unknown_20_;
            var21->unknown_4c_ = var0.unknown_4c_;
            var21->unknown_4d_ = var0.unknown_4d_;
        }
    }
    return 1;
}
