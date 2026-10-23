#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

struct Struct_02033fdc;
struct Struct_02033b58;
struct Struct_02033834;
struct Struct_02038598_4;
struct Struct_02038598_5;
struct Struct_ov017_021bb27c_2 {
    Object3D unknown_0_; char unknown_ac_[0x15]; unsigned char unknown_c1_0_:2, unknown_c1_2_:6;
    char unknown_c2_[0x1e]; unsigned char unknown_e0_;
#if defined(jpn)
    char unknown_e1_[0x180 - 0xe1];
#else
    char unknown1_e1_[0x18c - 0xe1];
#endif
    unsigned int unknown_18c_;
};
struct Struct_ov017_021bb27c_3 { char unknown_0_[0xf78]; unsigned char unknown_f78_[4], unknown_f7c_; };
struct Struct_ov017_021bb27c_4 {
#if defined(jpn)
    char unknown_0_[0x2816];
#else
    char unknown1_0_[0x27d6];
#endif
    unsigned short unknown_27d6_;
};
struct Struct_ov017_021bb27c_5 { unsigned short unknown_0_; unsigned char unknown_2_; char unknown_3_[0xb]; unsigned char unknown_e_; };
struct Struct_ov017_021bb27c_6 { unsigned short unknown_0_; unsigned char unknown_2_; };
struct Struct_ov017_021bb27c_7 {
    char unknown_0_[8]; unsigned short unknown_8_, unknown_a_; char unknown_c_[5]; unsigned char unknown_11_, unknown_12_;
    char unknown_13_[3]; unsigned short unknown_16_, unknown_18_;
#if defined(jpn)
    char unknown_1a_[0x78 - 0x1a];
#else
    char unknown1_1a_[0x7c - 0x1a];
#endif
    SafeAllocator unknown_7c_;
    char unknown_90_[0xa]; unsigned char unknown_9a_; char unknown_9b_[0x34]; unsigned char unknown_cf_;
    char unknown_d0_[0x2d]; unsigned char unknown_fd_; char unknown_fe_; unsigned char unknown_ff_;
    char unknown_100_[4]; unsigned char unknown_104_; char unknown_105_[3]; unsigned char unknown_108_;
    char unknown_109_[3]; unsigned char unknown_10c_; char unknown_10d_[9]; signed char unknown_116_;
    char unknown_117_[0xd]; SafeAllocator unknown_124_; SafeAllocator* unknown_138_;
    char unknown_13c_[0x38]; unsigned char unknown_174_, unknown_175_;
};
struct Struct_ov017_021bb27c {
#if defined(jpn)
    char unknown_0_[0x41fc];
#else
    char unknown1_0_[0x44ac];
#endif
    unsigned short unknown_44ac_;
};
struct Struct_ov017_021d6c20 { int unknown_0_; Vector3fix unknown_4_, unknown_10_, unknown_1c_; };
extern "C" int func_020100f8(char*);
extern "C" int* func_0202ae18();
extern "C" Struct_ov017_021bb27c_4* func_02012fe4();
extern "C" void func_ov001_0215aa5c();
extern "C" void func_02033fdc(Struct_02033fdc*);
extern "C" void func_02033b58(Struct_02033b58*, unsigned char);
extern "C" int func_02039d7c(char*);
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" int func_0202b7d8(int*);
extern "C" void func_02053ec8(void*, int);
extern "C" void func_02053f04(void*);
extern "C" int func_020100b0(GameState*);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" Struct_02038598_4* func_020d6c00();
extern "C" void func_020466f4(Struct_02038598_4*, unsigned int);
extern "C" void func_ov017_02191fec(GameResources*, int);
extern "C" void* func_0200fd0c(GameState*);
extern "C" int func_02046b60(Struct_02038598_5*, int);
extern "C" void func_020dc2d0(int);
extern "C" void func_ov017_02190264(GameResources*, int);
extern "C" void func_ov017_0218f5a4(GameResources*, int, int, int, int);
extern "C" void func_020397c0(void*);
extern "C" void func_020a27ac(void*);
extern "C" void func_ov017_021921fc(const Vector3fix*, int, int);
extern "C" void func_ov017_021d035c(unsigned char, unsigned char, unsigned char);
extern "C" int func_02039790(void*, int);
extern "C" void func_ov017_021bd4d0(Struct_ov017_021bb27c_7*, unsigned char, int, int);
#if defined(jpn)
#define data_ov017_021d7d6c data_ov017_021d8544
#define data_ov017_021d7d72 data_ov017_021d854a
#define data_ov017_021d6c20 data_ov017_021d7018
#endif
extern const char data_ov017_021d7d6c[], data_ov017_021d7d72[];
extern AllocatorUnion data_02114e20;
extern const Struct_ov017_021d6c20 data_ov017_021d6c20[3];

static inline Struct_ov017_021bb27c_6* inline_ov017_021bb27c(GameResources* arg0) {
    return (Struct_ov017_021bb27c_6*)arg0->unknown_ptr_3718;
}

// USA: func_ov017_021bb27c
extern "C" ARM void func_ov017_021bb27c(Struct_ov017_021bb27c_7* arg0) {
    int* var0;
    GameState* var1 = GameState::GetInstance();
    GameResources* var2 = GetGameResources();
    Struct_02038598_5* var3 = (Struct_02038598_5*)var2->unknown_ptr_array_36fc[0];
    Struct_ov017_021bb27c_6* var4 = inline_ov017_021bb27c(var2);
    GameObject* var5 = var1->GetUnknownGameObject();
    void* var6 = (void*)func_020100f8((char*)var1);
    var0 = func_0202ae18();
    Struct_ov017_021bb27c_4* var7 = func_02012fe4();
    if (!TestFlags00(var2, 0x1000)) {
        func_ov001_0215aa5c();
    }
    if (arg0->unknown_8_ == 0x7343 || arg0->unknown_8_ == 0x7346 || arg0->unknown_8_ == 0x7349) var7->unknown_27d6_ = arg0->unknown_8_;
    for (int var8 = 0; var8 < 4; var8++) {
        GameObject* var9 = var1->GetPartyMemberByIndex(var8);
        if (!var9) continue;
        func_02033fdc((Struct_02033fdc*)var9);
        func_02033b58((Struct_02033b58*)var9, 0);
        if (!func_02039d7c((char*)var9) || func_020399a8(var9)->unknown_1_ != 2) {
                var9->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d6c, 0x10);
        } else if (arg0->unknown_11_) {
                ((Struct_ov017_021bb27c_2*)var9)->unknown_e0_ &= ~1;
                var9->obj3D_.DisableFlag(0x1180);
                func_02038508(func_020399a8(var9));
                var9->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d6c, 0x10);
        } else var9->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d72, 0);
        func_02033874((Struct_02033834*)var9, var9->obj3D_.rotation_.y);
        var9->obj3D_.DisableFlag(0x10);
    }
    if (func_0202b7d8(var0)) {
        Struct_ov017_021bb27c_3* var10 = (Struct_ov017_021bb27c_3*)func_02010828(var1);
        for (int var11 = 0; var11 < var10->unknown_f7c_; var11++) {
            Struct_ov017_021bb27c_2* var12 = (Struct_ov017_021bb27c_2*)func_0200ff1c(var1, var10->unknown_f78_[var11]);
            if (var12) { func_02053ec8(var12, 0); func_02053f04(var12); }
        }
        if (arg0->unknown_12_) {
            func_020100b0(var1);
            for (int var13 = 0; var13 < 4; var13++) {
                Struct_ov017_021bb27c_2* var14 = (Struct_ov017_021bb27c_2*)func_0200ff1c(var1, var13);
                if (var14) {
                    var14->unknown_c1_0_ &= ~1; var14->unknown_c1_0_ &= ~2; var14->unknown_18c_ &= ~2;
                }
            }
        }
        if (arg0->unknown_116_ >= 0) {
            Struct_ov017_021bb27c_2* var15 = (Struct_ov017_021bb27c_2*)func_0200ff1c(var1, arg0->unknown_116_);
            if (var15) {
                var15->unknown_c1_0_ &= ~1; var15->unknown_c1_0_ &= ~2; var15->unknown_18c_ &= ~2;
            }
        }
    }
    if (var2) {
        ClearFlags04(var2, 0x1040);
        ClearFlags00(var2, 0x10);
        ClearFlags00(var2, 0x800);
        ClearFlags00(var2, 0x4000);
    }
    void* var16 = arg0->unknown_124_.GetSignedAllocator();
    if (var16) { arg0->unknown_124_.Destroy(); arg0->unknown_7c_.Free(var16); }
    if (!TestFlags00(var2, 0x1000)) {
        var16 = arg0->unknown_7c_.GetSignedAllocator();
        if (var16) { arg0->unknown_7c_.Destroy(); func_02012da4(&data_02114e20, var16); }
    }
    if (arg0->unknown_138_) {
        var16 = arg0->unknown_138_->GetSignedAllocator();
        if (var16) { arg0->unknown_138_->Destroy(); func_02012da4(&data_02114e20, var16); }
        arg0->unknown_138_ = 0;
    }
    func_020466f4(func_020d6c00(), 0x20000);
    for (int var17 = 0; var17 < 4; var17++) func_ov017_02191fec(var2, var17);
    func_020466f4(func_020d6c00(), 0x400f);
    Struct_ov017_021bb27c_5* var18 = (Struct_ov017_021bb27c_5*)func_0200fd0c(var1);
    if (arg0->unknown_104_ && !var4->unknown_2_ && (!var18->unknown_2_ || arg0->unknown_10c_) &&
        !func_02046b60(var3, 10) && !(arg0->unknown_16_ == 1 && arg0->unknown_cf_ == 2)) {
        func_020dc2d0(0);
    }
    arg0->unknown_ff_ = 1;
    for (int var19 = 0; var19 < 4; var19++) {
        if (arg0->unknown_174_ & (1 << var19)) func_ov017_02190264(var2, var19);
        if (arg0->unknown_175_ & (1 << var19)) func_ov017_0218f5a4(var2, var19, 0, 0, 1);
    }
    if (var5) func_020397c0(var5);
    if (var6) func_020a27ac(var6);
    const Struct_ov017_021d6c20* var20 = data_ov017_021d6c20;
    for (int var21 = 0; var21 < 3; var21++, var20++) {
        if (var20->unknown_0_ != arg0->unknown_8_) continue;
        GameObject* var22 = var1->GetUnknownGameObject();
        Vector3fix var23 = var22->obj3D_.position_;
        if (fix32abs(var23.x - var20->unknown_4_.x) > var20->unknown_10_.x) break;
        if (fix32abs(var23.y - var20->unknown_4_.y) > var20->unknown_10_.y) break;
        if (fix32abs(var23.z - var20->unknown_4_.z) > var20->unknown_10_.z) break;
        func_ov017_021921fc(&var20->unknown_1c_, var22->obj3D_.rotation_.y, 0); break;
    }
    arg0->unknown_cf_ = 0xff; arg0->unknown_9a_ = 0;
    Struct_ov017_021bb27c* var24 = (Struct_ov017_021bb27c*)var2;
    if (arg0->unknown_18_ == var24->unknown_44ac_) var24->unknown_44ac_ = 0;
    if (func_0202b7d8(var0)) {
        if (arg0->unknown_a_ <= 2 && arg0->unknown_fd_) return;
        Struct_ov017_021bb27c_5* var25 = (Struct_ov017_021bb27c_5*)func_0200fd0c(var1);
        if (var25->unknown_2_ && arg0->unknown_108_) var25->unknown_e_ = 1;
        else func_ov017_021d035c(0, func_020100b0(var1), arg0->unknown_108_);
        for (int var26 = 0; var26 < 4; var26++) {
            GameObject* var27 = var1->GetPartyMemberByIndex(var26);
            if (var27 && func_02039790(var27, 0x20)) func_ov017_021bd4d0(arg0, var26, 0, 0);
        }
    }
}
