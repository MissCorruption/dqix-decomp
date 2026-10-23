#include <globaldefs.h>
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "Resource/MonsterDefinition.h"
#include "Resource/GameResources.h"

struct Struct_ov023_021edc08_5 { unsigned int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_0200f3a4_8 { int unknown_0_, unknown_4_; };
struct Struct_02109bf4_4;
struct Struct_020d6f0c;
struct Struct_020d6d18_2;
struct Struct_0203a54c;
struct Struct_020e385c;
struct Struct_ov003_02162f40 {
    char unknown_0_[8]; unsigned short unknown_8_; char unknown_a_[2]; int unknown_c_;
    char unknown_10_[0x25 - 0x10]; unsigned char unknown_25_; char unknown_26_[0x678 - 0x26];
    Struct_0206f01c_2 unknown_678_;
};
struct Struct_ov023_021edc08_6 {
#if defined(jpn)
    char unknown_0_[0x21c]; Struct_ov003_02162f40* unknown_2a0_; char unknown_220_[0xb94 - 0x220];
    int unknown_c18_[1]; char unknown_b98_[0xe20 - 0xb98]; Struct_020d6f0c* unknown_ea4_;
    char unknown_e24_[0x71ec - 0xe24]; char unknown_6ffc_[1];
#else
    char unknown1_0_[0x2a0]; Struct_ov003_02162f40* unknown_2a0_; char unknown_2a4_[0xc18 - 0x2a4];
    int unknown_c18_[1]; char unknown_c1c_[0xea4 - 0xc1c]; Struct_020d6f0c* unknown_ea4_;
    char unknown_ea8_[0x6ffc - 0xea8]; char unknown_6ffc_[1];
#endif

};
struct Struct_ov023_021edc08 {
    int unknown_0_; int unknown_4_[3]; unsigned char unknown_10_; unsigned char unknown_11_;
    unsigned char unknown_12_[4]; char unknown_16_[2]; int unknown_18_; char unknown_1c_[0x20];
    char unknown_3c_[0x6c - 0x3c]; int unknown_6c_; int unknown_70_; char unknown_74_[0xe2 - 0x74];
    unsigned char unknown_e2_; char unknown_e3_; signed char unknown_e4_; signed char unknown_e5_;
    char unknown_e6_[2]; Struct_0200f3a4_8 unknown_e8_; int unknown_f0_; int unknown_f4_[6];
#if defined(jpn)
    Struct_ov023_021edc08_5 unknown_10c_; char unknown_118_[0x2380]; unsigned char unknown_2788_; char unknown_2499_[7];
#else
    Struct_ov023_021edc08_5 unknown_10c_; char unknown_118_[0x2670]; unsigned char unknown_2788_; char unknown_2789_[7];
#endif

};
struct Struct_ov023_021edc08_2 { Struct_ov023_021edc08* unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_02081870 {
#if defined(jpn)
    char unknown_0_[0x10]; void* unknown_10_; char unknown_14_[0x868 - 0x14]; int unknown_998_;
#else
    char unknown1_0_[0x10]; void* unknown1_10_; char unknown1_14_[0x998 - 0x14]; int unknown_998_;
#endif

};
#if defined(jpn)
struct Struct_ov023_021edc08_3 { char unknown_0_[0x240c]; ActiveGrottoClass unknown_240c_; };
#else
struct Struct_ov023_021edc08_3 { char unknown_0_[0x23ec]; ActiveGrottoClass unknown_23ec_; };
#endif

struct Struct_ov023_021edc08_4 { short unknown_0_, unknown_2_; short unknown_4_[3]; };
struct Struct_ov023_021fd870 { int unknown_0_[6]; };
extern "C" Struct_ov023_021edc08_2 _ZZ21inline_ov023_021f4c04vE1s;
extern Struct_02109bf4_4 data_02109bf4;
extern const Struct_ov023_021fd870 data_ov023_021fd870;
#if defined(jpn)
extern const char data_ov023_021fd45c[];
extern "C" void func_0204500c(Struct_02081870*, const char*, int);
#endif
extern "C" void* func_0202ae18();
extern "C" Struct_02081870* func_020421a0();
extern "C" unsigned int* func_020d6c00();
extern "C" void func_020466e4(unsigned int*, unsigned int);
extern "C" void func_ov017_021c9ad4(unsigned short);
extern "C" void func_ov017_021a23b0(GameResources*, int);
extern "C" void func_0209c678(Struct_02109bf4_4*, int);
extern "C" void func_ov000_0216d370(void*, int, int, int);
extern "C" void* func_02057924();
extern "C" void func_02057f00(void*, int);
extern "C" void func_020d6f0c(Struct_020d6f0c*);
extern "C" void func_020d6d18(Struct_020d6d18_2*);
extern "C" void func_ov000_021823a4(char*);
extern "C" Struct_0203a54c* func_02039e70();
extern "C" void func_0203a54c(Struct_0203a54c*);
extern "C" void func_0209a338(Struct_0200f3a4_8*);
extern "C" void func_0209a804(int*);
extern "C" void func_ov023_021f52a0(void*);
extern "C" void func_0206efc4(void*);
extern "C" void func_020a1ef0(int);
extern "C" void func_ov023_021f52f8(void*, void*);
extern "C" int func_0202c540(void*);
extern "C" void func_02046380(Struct_02081870*);
extern "C" Struct_ov023_021edc08_3* func_02012fe4();
extern "C" void func_020e46c4(void*);
extern "C" void* func_0206f4f0(Struct_0206f01c_2*, int);
extern "C" Struct_ov023_021edc08_5 func_ov023_021ed804(Struct_ov023_021edc08_5, void*);
extern "C" void func_ov023_021edf38(void*, Struct_ov023_021edc08_5*);
extern "C" const char* func_020e51cc(int);
#if !defined(jpn)
extern "C" void func_0204500c(Struct_02081870*, const char*, int, int);
#endif
extern "C" void func_0209c6d8(void*, int);
extern "C" int func_0202c508(void*);
extern "C" Struct_020e385c* func_020e3808();
extern "C" void func_020e3994(Struct_020e385c*, int, int);
extern "C" void func_020e392c(Struct_020e385c*, int, int);
extern "C" void func_020e39d4(Struct_020e385c*, int, int, int);

static inline SafeAllocator* inline_ov000_02166804(GameResources* arg0, int arg1) {
    return &arg0->allocator_array_38[arg1];
}

// USA: func_ov023_021edc08
extern "C" ARM int func_ov023_021edc08(Struct_ov023_021edc08_6* arg0) {
#if defined(jpn)
    GameState* var0 = GameState::GetInstance();
#else
    GameState::GetInstance();
#endif

    GameResources* var1 = GetGameResources();
    void* var2 = func_0202ae18();
    Struct_02081870* var3 = func_020421a0();
    func_020466e4(func_020d6c00(), 0x20000);
    func_ov017_021c9ad4(arg0->unknown_2a0_->unknown_8_);
    func_ov017_021a23b0(var1, arg0->unknown_2a0_->unknown_8_);
    func_0209c678(&data_02109bf4, 0);
    func_ov000_0216d370(arg0->unknown_c18_, 0, 0, 1);
    void* var4 = func_02057924();
    Struct_ov023_021fd870 var5 = data_ov023_021fd870;
    for (int* var6 = var5.unknown_0_; *var6 >= 0; ++var6) func_02057f00(var4, *var6);
    if (arg0->unknown_ea4_) {
        func_020d6f0c(arg0->unknown_ea4_);
        func_020d6d18((Struct_020d6d18_2*)arg0->unknown_ea4_);
        arg0->unknown_ea4_ = 0;
    }
    func_ov000_021823a4(arg0->unknown_6ffc_);
    func_0203a54c(func_02039e70());
    SafeAllocator* const var7 = inline_ov000_02166804(var1, 5);
    var7->Reset();
    Struct_ov023_021edc08* var8 = (Struct_ov023_021edc08*)var7->Allocate(sizeof(Struct_ov023_021edc08));
    _ZZ21inline_ov023_021f4c04vE1s.unknown_0_ = var8;
    var8->unknown_0_ = 0;
    var8->unknown_4_[0] = -1;
    var8->unknown_4_[1] = -1;
    var8->unknown_4_[2] = -1;
    var8->unknown_10_ = 0;
    var8->unknown_18_ = -1;
    var8->unknown_70_ = 0;
    var8->unknown_e2_ = 0;
    var8->unknown_e4_ = -1;
    var8->unknown_11_ = 0;
    for (int var9 = 0; var9 < 4; ++var9) var8->unknown_12_[var9] = 0;
    var8->unknown_e5_ = -1;
    memset(var8->unknown_1c_, 0, sizeof(var8->unknown_1c_));
    memset(&var8->unknown_6c_, 0, 4);
    memset(var8->unknown_118_, 0, sizeof(var8->unknown_118_));
    var8->unknown_2788_ = 0;
    func_0209a338(&var8->unknown_e8_);
    func_0209a804(&var8->unknown_f0_);
    func_ov023_021f52a0(var8->unknown_f4_);
    func_0206efc4(&var8->unknown_10c_);
    func_020a1ef0(1);
    func_ov023_021f52f8(_ZZ21inline_ov023_021f4c04vE1s.unknown_0_->unknown_f4_, var7);
    if (func_0202c540(var2) && arg0->unknown_2a0_->unknown_25_) {
#if defined(jpn)
        GameObject* var10 = var0->GetPartyMemberByIndex(0);
        DetailedTreasureMapData* var11 = func_02012fe4()->unknown_240c_.GetDetailedData();
        char var12[128];
        sprintf(var12, data_ov023_021fd45c, *(const char**)((char*)var10 + 0x134), (char*)var11 + 0x5a);
        func_0204500c(var3, var12, 1);
#else
        func_02046380(var3);
        Struct_ov023_021edc08_4* var13 = (Struct_ov023_021edc08_4*)&func_02012fe4()->unknown_23ec_.GetDetailedData()->regular_;
        Struct_ov023_021edc08_5 var14;
        func_020e46c4(&var14);
        Struct_ov003_02162f40* var15 = arg0->unknown_2a0_;
        for (int var16 = 0; var16 < 3; ++var16) {
            void* var17 = func_0206f4f0(&var15->unknown_678_, var13->unknown_4_[var16]);
            if (var17) {
                const Struct_ov023_021edc08_5& var18 = func_ov023_021ed804(var14, var17);
                func_ov023_021edf38(&var14, const_cast<Struct_ov023_021edc08_5*>(&var18));
                var3->unknown1_10_ = &var14;
                break;
            }
        }
        char var19[256];
        sprintf(var19, func_020e51cc(200));
        func_0204500c(var3, var19, 1, 0xe3);

#endif
        var3->unknown_998_ = 1;
        func_0209c6d8(&data_02109bf4, 0x36);
    }
    if (func_0202c508(var2) && arg0->unknown_2a0_->unknown_c_ == 19) {
        Struct_020e385c* var20 = func_020e3808();
        func_020e3994(var20, 1, -1);
        func_020e392c(var20, 1, 0x71e8);
        func_020e39d4(var20, 0, 1, 0x71e8);
    }
    return 1;
}
