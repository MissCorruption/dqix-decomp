#include <globaldefs.h>
#include <GameState/GameState.h>
#include <NitroSDK/Matrix.h>
#include "Resource/GameResources.h"

struct Struct_02033b68;
struct Struct_02033834_2;
struct Struct_02033834;
struct Struct_02033b58;
struct Struct_020391ac { unsigned int unknown_0_; };
struct Struct_020391ac_2 { int unknown_0_, unknown_4_; };
struct Struct_020391ac_3 {
    Object3D unknown_0_;
    short unknown_ac_;
    unsigned char unknown_ae_[6];
    unsigned short unknown_b4_;
    unsigned char unknown_b6_[8];
    unsigned char unknown_be_;
    unsigned char unknown_bf_;
    unsigned char unknown_c0_;
    unsigned char unknown_c1_[0x6f];
    Struct_020391ac* unknown_130_;
#if defined(jpn)
    unsigned char unknown_134_[0x88];
#else
    unsigned char unknown1_134_[0x94];
#endif
    signed char unknown_1c8_;
    unsigned char unknown_1c9_;
    signed char unknown_1ca_;
    signed char unknown_1cb_;
    signed char unknown_1cc_;
    unsigned char unknown_1cd_;
    unsigned char unknown_1ce_;
    unsigned char unknown_1cf_;
    Struct_020391ac_2 unknown_1d0_[16];
    unsigned char unknown_250_[0x18];
    int unknown_268_;
    unsigned char unknown_26c_;
    unsigned char unknown_26d_;
};

extern "C" void func_ov017_021917f0(int, int);
extern "C" void func_02033b68(Struct_02033b68*, int);
int fix32ReduceAngle0To2Pi(int);
extern "C" void func_02033834(Struct_02033834_2*, int);
extern "C" void func_02039d24(unsigned char*);
extern "C" void func_02033b58(Struct_02033b58*, unsigned char);
extern "C" int func_02046b08(void**);
extern "C" void func_02033874(Struct_02033834*, int);

// USA: func_020391ac
extern "C" ARM void func_020391ac(Struct_020391ac_3* arg0) {
    GameState* var0;
    Struct_020391ac_3* var1;
    Struct_020391ac_3* var2;
    int var3;
    int var4;
    int var5;
    int var6;
    int var7;
    int var8;
    int var9;
    int var10;
    int var11;
    void** var12;
    if (arg0->unknown_1ce_ & 1)
        return;
    var12 = (void**)GetGameResources()->unknown_ptr_array_36fc[0];
    var0 = GameState::GetInstance();
    var1 = (Struct_020391ac_3*)var0->GetPartyMemberByIndex(arg0->unknown_1c8_);
    var2 = (Struct_020391ac_3*)var0->GetPartyMemberByIndex(arg0->unknown_1ca_);
    if (var1 == 0 || var2 == 0)
        return;
    if (var1->unknown_be_ == 2) {
        if (arg0->unknown_be_ != 2) {
            func_ov017_021917f0(arg0->unknown_0_.unknown_4_, 1);
        }
        func_02033b68((Struct_02033b68*)arg0, 2);
        return;
    }
    if (arg0->unknown_be_ == 2) {
        func_ov017_021917f0(arg0->unknown_0_.unknown_4_, 0);
        func_02033b68((Struct_02033b68*)arg0, 0);
    }
    if (var2->unknown_26c_) {
        if (var2->unknown_26d_ == 0 || var2->unknown_26d_ == 1 || var2->unknown_26d_ == 2) {
            Vector3fix var13 = arg0->unknown_0_.position_;
            var13.y = 0;
            Vector3fix var14 = var2->unknown_0_.position_;
            var14.y = 0;
            Vector3fix var15;
            Vector3fix_Subtract(&var14, &var13, &var15);
            int var16 = Vector3fix_Length(&var15);
            Vector3fix_Normalize(&var15, &var15);
            func_02033834((Struct_02033834_2*)arg0, fix32ReduceAngle0To2Pi(fix32_Atan2(var15.x, var15.z)));
            if (var16 < 0x1000)
                func_02033b68((Struct_02033b68*)arg0, 0);
            else {
                arg0->unknown_b4_ = 0x189;
                func_02033b68((Struct_02033b68*)arg0, 1);
            }
            arg0->unknown_0_.SetInheritedAlpha(31 - arg0->unknown_268_);
            arg0->unknown_1ce_ &= ~4;
            arg0->unknown_268_ += (int)(1.5f * var0->GetTickCount());
            if (arg0->unknown_268_ > 31)
                arg0->unknown_268_ = 31;
        } else if (var2->unknown_26d_ == 3 || var2->unknown_26d_ == 4 || var2->unknown_26d_ == 5) {
            arg0->unknown_268_ = 0;
            arg0->unknown_0_.position_ = var2->unknown_0_.position_;
            arg0->unknown_0_.SetInheritedAlpha(31);
            func_02039d24((unsigned char*)arg0);
            func_02033b68((Struct_02033b68*)arg0, 0);
            arg0->unknown_1ce_ |= 4;
        }
        return;
    }
    arg0->unknown_268_ = 0;
    Vector3fix var17 = var1->unknown_0_.position_;
    var17.y = 0;
    Vector3fix var18 = arg0->unknown_0_.position_;
    var18.y = 0;
    var4 = Vector3fix_Distance(&var18, &var17);
    if (arg0->unknown_1cd_ == 0) {
        switch (var1->unknown_c0_) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            arg0->unknown_1cd_ = 1;
            arg0->unknown_1d0_[arg0->unknown_1cb_].unknown_0_ = var17.x;
            arg0->unknown_1d0_[arg0->unknown_1cb_].unknown_4_ = var17.z;
            break;
        }
    }
    if (arg0->unknown_1cd_ == 0) {
        func_02033b58((Struct_02033b58*)arg0, 0);
        return;
    }
    var3 = arg0->unknown_ac_ != 0;
    Vector3fix var19 = {0, 0, 0};
    var11 = arg0->unknown_1cb_;
    var19.x = arg0->unknown_1d0_[var11].unknown_0_;
    var19.z = arg0->unknown_1d0_[var11].unknown_4_;
    var5 = Vector3fix_Distance(&var17, &var19);
    var6 = 0x800;
    if ((arg0->unknown_130_->unknown_0_ & 1) && (var1->unknown_130_->unknown_0_ & 1)) {
        int var20 = arg0->unknown_1cb_ - arg0->unknown_1cc_;
        if (var20 < 0)
            var20 = 16 - arg0->unknown_1cc_ + arg0->unknown_1cb_;
        if (var20 <= 2)
            var6 = 0xe66;
    }
    if (var5 > var6) {
        ++arg0->unknown_1cb_;
        arg0->unknown_1cb_ %= 16;
        arg0->unknown_1d0_[arg0->unknown_1cb_].unknown_0_ = var17.x;
        arg0->unknown_1d0_[arg0->unknown_1cb_].unknown_4_ = var17.z;
    }
    if (arg0->unknown_1cb_ < 0)
        return;
    var7 = arg0->unknown_1cb_ - arg0->unknown_1cc_;
    if (var7 < 0)
        var7 = 16 - arg0->unknown_1cc_ + arg0->unknown_1cb_;
    if (var7 > 2)
        arg0->unknown_b4_ = 0x24d;
    else if (var7 <= 1)
        arg0->unknown_b4_ = 0x9d;
    else
        arg0->unknown_b4_ = 0x189;
    var8 = var6 + 0xb33;
    var9 = 1;
    if (!func_02046b08(var12))
        var9 = 0;
    if (var7 >= 1 || (var4 > var8 && var9) || var3) {
        Vector3fix var21 = arg0->unknown_0_.position_;
        var21.y = 0;
        Vector3fix var22 = {0, 0, 0};
        var22.x = arg0->unknown_1d0_[arg0->unknown_1cc_].unknown_0_;
        var22.z = arg0->unknown_1d0_[arg0->unknown_1cc_].unknown_4_;
        Vector3fix var23;
        Vector3fix_Subtract(&var22, &var21, &var23);
        int var24 = Vector3fix_Length(&var23);
        Vector3fix_Normalize(&var23, &var23);
        var10 = fix32ReduceAngle0To2Pi(fix32_Atan2(var23.x, var23.z));
        if (var3)
            func_02033874((Struct_02033834*)arg0, var1->unknown_0_.rotation_.y);
        else
            func_02033834((Struct_02033834_2*)arg0, var10);
        if (var24 <= 0x800 && arg0->unknown_1cc_ != arg0->unknown_1cb_) {
            ++arg0->unknown_1cc_;
            arg0->unknown_1cc_ %= 16;
        }
        if (var3)
            func_02033b68((Struct_02033b68*)arg0, 0);
        else if (arg0->unknown_be_ != 1)
            func_02033b68((Struct_02033b68*)arg0, 1);
    } else if (arg0->unknown_be_ != 0)
        func_02033b68((Struct_02033b68*)arg0, 0);
}
