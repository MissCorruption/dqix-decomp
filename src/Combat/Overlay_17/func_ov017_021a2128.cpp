#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020fdd44;
struct Struct_02073ec4_2;
struct Struct_0206f01c_2;
struct Struct_020283fc;
struct Struct_02072adc;
struct Struct_02033834;
struct Struct_020795e8;
struct Struct_020795e8_2;
struct Struct_02076cc4;
struct Struct_ov017_021a2128_3 { char unknown_0_[0xc]; short unknown_c_; short unknown_e_; };
struct Struct_ov017_021a2128_4 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 14;
    short unknown_4_;
    unsigned short unknown_6_;
#if defined(jpn)
    char unknown_8_[0xc];
#else
    char unknown1_8_[0x10];
#endif
    char unknown_18_[0x48];
    char unknown_60_[0x298];
    char unknown_2f8_[0xc];
    char unknown_304_[0xc];
};
struct Struct_ov017_021a2128_5 {
    Object3D unknown_0_;
    char unknown_ac_[0xc];
    short unknown_b8_;
    char unknown_ba_[0xaa];
    short unknown_164_;
    short unknown_166_;
    short unknown_168_;
    short unknown_16a_;
    char unknown_16c_[0x11];
    unsigned char unknown_17d_;
    char unknown_17e_[2];
    Struct_ov017_021a2128_3* unknown_180_;
    void* unknown_184_;
};
#if defined(jpn)
struct Struct_ov017_021a2128 { char unknown_0_[0x2fe0]; int unknown_31f0_; };
#else
struct Struct_ov017_021a2128 { char unknown_0_[0x31f0]; int unknown_31f0_; };
#endif
extern "C" Struct_020fdd44* func_02027ca4();
extern "C" Struct_ov017_021a2128_4* func_02028bd0(Struct_020fdd44*, int);
extern "C" Struct_ov017_021a2128_3* func_0206f4f0(Struct_0206f01c_2*, int);
extern "C" void* func_0206ef18(void*, int);
extern "C" int func_ov017_021a20c0(int, int, int);
extern "C" unsigned short* func_02012fe4();
extern "C" int* func_0202ae18();
extern "C" void func_02076a8c(void*);
extern "C" Struct_02072adc* func_ov017_021a2738(void*, int);
extern "C" void func_02072adc(Struct_02072adc*, Struct_02072adc*);
struct Struct_ov017_021a2128_2 { short unknown_0_; short unknown_2_; };
extern "C" Struct_ov017_021a2128_2* func_0209be84(Struct_02073ec4_2*, unsigned int, int);
extern "C" int func_02018fbc(void*, Vector3fix*);
extern "C" int func_020283fc(Struct_020283fc*, int);
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" void func_020795e8(Struct_020795e8*, Struct_020795e8_2*);
extern "C" void func_02076ccc(void*, int);
extern "C" void func_02076cc4(Struct_02076cc4*, int);
extern "C" int func_ov017_021a1944();
extern "C" int func_0202b7d8(int*);
extern "C" void func_ov017_021c8f3c(int, int);

// USA: func_ov017_021a2128
extern "C" ARM int func_ov017_021a2128(Struct_ov017_021a2128* arg0, unsigned short arg1, int arg2, int arg3, const Vector3fix* arg4, int arg5, unsigned short arg6, unsigned char arg7) {
    Struct_ov017_021a2128_4* var0 = func_02028bd0(func_02027ca4(), arg1);
    if (!var0) return 0;
    Struct_ov017_021a2128_3* var1 = func_0206f4f0((Struct_0206f01c_2*)var0->unknown_2f8_, (short)arg2);
    void* var2 = func_0206ef18(var0->unknown_304_, (short)arg2);
    if (!var1) return 0;
    if (!var2) return 0;
    GameState* var3 = GameState::GetInstance();
    unsigned short* var4 = func_02012fe4();
    int* var5 = func_0202ae18();
    int var6 = func_ov017_021a20c0((int)arg0, var0->unknown_2_0_, 12);
    if (var6 < 0) return 0;
    Struct_ov017_021a2128_5* var7 = (Struct_ov017_021a2128_5*)var3->GetMaybeFieldMonsterByIndex(var6);
    if (!var7) return 0;
    func_02076a8c(var7);
    Struct_02072adc* var8 = func_ov017_021a2738(arg0, arg2);
    if (arg1 == *var4 && var8) func_02072adc(var8, (Struct_02072adc*)var7);
    int var9 = 0x1000;
    Struct_ov017_021a2128_2* var10 = func_0209be84((Struct_02073ec4_2*)var0->unknown_60_, arg2, arg3);
    if (var10) var9 = var10->unknown_2_;
    Vector3fix var11 __attribute__((aligned(4))) = *arg4;
    if (arg1 == *var4) var11.y = func_02018fbc(var4, &var11);
    var7->unknown_0_.unknown_2_ = arg2;
    var7->unknown_0_.unknown_4_ = var6;
    var7->unknown_0_.SetField06(arg1);
    var7->unknown_168_ = arg3;
    var7->unknown_180_ = var1;
    var7->unknown_184_ = var2;
    var7->unknown_b8_ = func_020283fc((Struct_020283fc*)var0->unknown_18_, arg6);
    var7->unknown_164_ = arg6;
    var7->unknown_0_.position_ = var11;
    func_02033874((Struct_02033834*)var7, arg5);
    var7->unknown_0_.SetRadius(var1->unknown_c_ << 2);
    var7->unknown_0_.SetHeight(var1->unknown_e_);
    Struct_020795e8_2* var12 = (Struct_020795e8_2*)func_0206ef18(var0->unknown_304_, (short)arg2);
    if (var12) func_020795e8((Struct_020795e8*)var7, var12);
    int var13 = (int)(((long long)var9 * 0x10a + 0x800) >> 12);
    var7->unknown_0_.SetScale(var13, var13, var13);
    func_02076ccc(var7, 0);
    func_02076cc4((Struct_02076cc4*)var7, (int)&arg0->unknown_31f0_);
    var7->unknown_16a_ = func_ov017_021a1944();
    var7->unknown_17d_ |= arg7;
    var7->unknown_0_.MakeVisible();
    ++var0->unknown_6_;
    if (func_0202b7d8(var5)) func_ov017_021c8f3c(var6, -1);
    return var6;
}
