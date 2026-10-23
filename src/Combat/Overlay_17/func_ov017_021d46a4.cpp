#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_02046b38;
struct Struct_02046b38_2;
struct Struct_02072adc;
struct Struct_02033834;
struct Struct_02076cc4;
struct Struct_02010604;
struct Struct_020795e8;
struct Struct_020795e8_2;
struct Struct_02073ec4_2 { char unknown_0_[4]; };
struct Struct_0206ef40 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 14;
#if defined(jpn)
    char unknown_4_[0x5c - 4];
#else
    char unknown1_4_[0x60 - 4];
#endif
    Struct_02073ec4_2 unknown_60_;
    char unknown_64_[0x304 - 0x64];
    char unknown_304_[4];
};
struct Struct_0209be84_2 { unsigned short unknown_0_; short unknown_2_; };
struct Struct_ov017_021d46a4_4 {
    unsigned char unknown_0_; unsigned char unknown_1_; unsigned short unknown_2_;
    unsigned short unknown_4_; unsigned short unknown_6_;
    unsigned short unknown_8_0_ : 4; unsigned short unknown_8_4_ : 3; unsigned short unknown_8_7_ : 9;
    unsigned short unknown_a_; unsigned char unknown_c_; unsigned char unknown_d_;
    unsigned short unknown_e_; unsigned short unknown_10_; char unknown_12_[2];
    short unknown_14_; short unknown_16_; short unknown_18_; short unknown_1a_; unsigned char unknown_1c_;
};
struct Struct_ov017_021d46a4 {
    Object3D unknown_0_;
    char unknown_ac_[0xb8 - 0xac]; unsigned short unknown_b8_;
    char unknown_ba_[0x164 - 0xba];
    unsigned short unknown_164_; unsigned short unknown_166_; unsigned short unknown_168_; unsigned short unknown_16a_;
    char unknown_16c_[0x17d - 0x16c]; unsigned char unknown_17d_;
};
struct Struct_ov017_021d46a4_2 { char unknown_0_[0x660]; char unknown_660_[4]; };
struct Struct_ov017_021d46a4_3 {
#if defined(jpn)
    char unknown_0_[0x2980]; Struct_ov017_021d46a4_2 unknown_2b90_;
#else
    char unknown1_0_[0x2b90]; Struct_ov017_021d46a4_2 unknown_2b90_;
#endif
    char unknown_31f4_[0x36fc - 0x31f4]; Struct_02046b38* unknown_36fc_;
    char unknown_3700_[0x3718 - 0x3700]; Struct_02046b38_2* unknown_3718_;
};
struct Struct_0208fa8c { unsigned short unknown_0_; };
extern "C" Struct_0208fa8c* func_02012fe4();
extern "C" void* func_02027ca4();
extern "C" Struct_0206ef40* func_02027cb0();
extern "C" void func_02076a8c(GameObject*);
extern "C" int func_02046b38(Struct_02046b38*, Struct_02046b38_2*);
extern "C" Struct_02072adc* func_ov017_021a2738(void*, int);
extern "C" void func_02072adc(Struct_02072adc*, Struct_02072adc*);
extern "C" int func_02018fbc(Struct_0208fa8c*, Vector3i*);
extern "C" Struct_0209be84_2* func_0209be84(Struct_02073ec4_2*, unsigned int, int);
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" void func_02076cc4(Struct_02076cc4*, int);
extern "C" void func_02033b88(Struct_02010604*, int);
extern "C" void func_02076ccc(void*, int);
extern "C" void func_0207964c(GameObject*);
extern "C" Struct_020795e8_2* func_0206ef18(void*, int);
extern "C" void func_020795e8(Struct_020795e8*, Struct_020795e8_2*);

// USA: func_ov017_021d46a4
extern "C" ARM void func_ov017_021d46a4(void*, Struct_ov017_021d46a4_4* arg1) {
    if (!(arg1->unknown_0_ & 1)) return;
    if (!(arg1->unknown_0_ & 2)) return;
    arg1->unknown_0_ = 0;
    arg1->unknown_2_ = 0;
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021d46a4_3* var1 = (Struct_ov017_021d46a4_3*)GetGameResources();
    Struct_0208fa8c* var2 = func_02012fe4();
    func_02027ca4();
    Struct_02046b38* var3 = var1->unknown_36fc_;
    Struct_0206ef40* var4;
    int var5;
    GameObject* var6;
    Struct_02046b38_2* var7 = var1->unknown_3718_;
    if (arg1->unknown_6_ != var2->unknown_0_) return;
    var4 = func_02027cb0();
    if (!var4) return;
    var5 = var4->unknown_2_0_ * 12 + 0x70 + arg1->unknown_8_0_;
    var6 = var0->GetMaybeFieldMonsterByIndex(var5);
    if (!var6) return;
    func_02076a8c(var6);
    if (!func_02046b38(var3, var7)) {
        Struct_02072adc* var8 = func_ov017_021a2738(var1, arg1->unknown_a_);
        if (var8) func_02072adc(var8, (Struct_02072adc*)var6);
    }
    Vector3i var9;
    var9.x = arg1->unknown_16_ << 7;
    var9.y = arg1->unknown_18_ << 7;
    var9.z = arg1->unknown_1a_ << 7;
    if (arg1->unknown_6_ == var2->unknown_0_) var9.y = func_02018fbc(var2, &var9);
    int var10 = 0x1000;
    Struct_0209be84_2* var11 = func_0209be84(&var4->unknown_60_, arg1->unknown_a_, arg1->unknown_8_7_);
    if (var11) var10 = var11->unknown_2_;
    var10 = (var10 * 266LL + 0x800) >> 12;
    var6->obj3D_.unknown_4_ = var5;
    var6->obj3D_.unknown_2_ = arg1->unknown_a_;
    var6->obj3D_.SetField06(arg1->unknown_6_);
    var6->obj3D_.position_ = var9;
    func_02033874((Struct_02033834*)var6, arg1->unknown_14_);
    var6->obj3D_.SetScale(var10, var10, var10);
    Struct_ov017_021d46a4_2* const var12 = &var1->unknown_2b90_;
    func_02076cc4((Struct_02076cc4*)var6, (int)var12->unknown_660_);
    Struct_ov017_021d46a4* var13 = (Struct_ov017_021d46a4*)var6;
    var13->unknown_16a_ = arg1->unknown_4_;
    var13->unknown_168_ = arg1->unknown_8_7_;
    func_02033b88((Struct_02010604*)var6, 0);
    var13->unknown_17d_ |= arg1->unknown_c_;
    var13->unknown_b8_ = arg1->unknown_e_;
    var13->unknown_164_ = arg1->unknown_10_;
    var13->unknown_166_ = arg1->unknown_d_;
    func_02076ccc(var6, arg1->unknown_1c_);
    func_0207964c(var6);
    Struct_020795e8_2* var14 = func_0206ef18(var4->unknown_304_, (short)arg1->unknown_a_);
    if (var14) func_020795e8((Struct_020795e8*)var6, var14);
}
