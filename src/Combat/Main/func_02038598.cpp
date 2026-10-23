#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/ActorAction.h"
#include "Combat/Main/CopyRecord0200fbb4.h"
#include "World/ZoneObjectResourceLoading.h"
#include "World/Zone3D.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define data_020efb44 data_020efa34
#define data_020efb4e data_020efa3e
#define data_020efb5a data_020efa4a
#endif

static inline fix32_t inline_02038598(fix32_t arg0, fix32_t arg1) {
    return ((long long)arg0 * arg1 + 0x800LL) >> 12;
}

struct Struct_02038598_6 {
    GameObject unknown_0_;
#if defined(jpn)
    char unknown_13c_[0x1be - 0x13c];
#else
    char unknown1_13c_[0x1ca - 0x13c];
#endif
    signed char unknown_1ca_;
    char unknown_1cb_[0x252 - 0x1cb];
    unsigned char unknown_252_;
    unsigned char unknown_253_;
    char unknown_254_[0x26c - 0x254];
    Struct_02037d10 unknown_26c_;
};
struct Struct_02038598_7 {
    char unknown_0_[2];
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    char unknown_a_[0xe0 - 0xb6];
    Struct_02038598 unknown_34_;
};
struct Struct_02038598_2 {
    unsigned short unknown_0_;
    char unknown_2_[2];
    unsigned char unknown_4_;
    char unknown_5_[2];
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_;
    signed char unknown_b_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    Vector3fix unknown_10_;
    short unknown_1c_;
    short unknown_1e_;
    int unknown_20_[4];
    Vector3fix unknown_30_;
    Vector3fix unknown_3c_;
    Vector3fix unknown_48_;
    Vector3fix unknown_54_;
    char unknown_60_[0xa];
    short unknown_6a_;
    short unknown_6c_;
    char unknown_6e_[2];
};
struct Struct_02038598_3 {
    char unknown_0_[0x220];
    unsigned char unknown_220_;
    unsigned char unknown_221_;
    unsigned char unknown_222_;
    unsigned char unknown_223_;
};
struct Struct_02038500;
struct Struct_02033834_2;
struct Struct_02033834;
struct Struct_02018300_3;
struct Struct_02010604;
struct Struct_02033b58;
struct Struct_02033ec8;
struct Struct_02038598_4 { unsigned int unknown_0_; };
struct Struct_02038598_5;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" Zone3D* func_02012fe4();
extern "C" void func_ov017_02191108(void*, int, int, int, int);
extern "C" void* func_020d6c00();
extern "C" void func_02033834(Struct_02033834_2*, int);
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" int func_02033b88(Struct_02010604*, int);
extern "C" void func_02033b58(Struct_02033b58*, unsigned char);
extern "C" int func_02033ec8(Struct_02033ec8*);
extern "C" void func_02038500(Struct_02038500*, int, int, int);
extern "C" void func_02033e18(void*, int*, short);
extern "C" int func_ov017_0218d268(void*);
extern "C" int func_020100a8(GameState*);
extern "C" int func_02046b60(Struct_02038598_5*, int);
extern "C" void func_020466f4(Struct_02038598_4*, unsigned int);
extern "C" void func_020466e4(unsigned int*, unsigned int);
extern "C" void func_ov017_0219e310(unsigned char*, int);
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);
extern const char data_020efb44[];
extern const char data_020efb4e[];
extern const char data_020efb5a[];

// USA: func_02038598
extern "C" ARM void func_02038598(Struct_02038598_6* arg0) {
    GameResources* var0;
    Zone3D* var1;
    Struct_02038598_7* var2;
    struct Struct_02037d10* var3;
    unsigned int* var4;
    unsigned char var5;
    Struct_02038598_5* var6;
    var0 = GetGameResources();
    var6 = (Struct_02038598_5*)var0->unknown_ptr_array_36fc[0];
    var1 = func_02012fe4();
    var2 = (Struct_02038598_7*)arg0->unknown_0_.unk_ac;
    var3 = &arg0->unknown_26c_;
    var4 = (unsigned int*)func_020d6c00();

    if (arg0->unknown_0_.obj3D_.unknown_4_ != arg0->unknown_1ca_) return;
    if (var3->unknown_0_ == 0) return;

    unsigned char var7 = var3->unknown_1_;

    if (var7 == 0) {
        Struct_020134e0::Struct_02018300* var8 = (var3->unknown_3_ == 0) ? var3->unknown_58_ : var3->unknown_5c_;
        Vector3fix var9;
        Vector3fix_Subtract(&var8->unknown_8_.unknown1_0_, &arg0->unknown_0_.obj3D_.position_, &var9);
        Vector3fix_Normalize(&var9, &var9);
        int var10 = fix32ReduceAngle0To2Pi(fix32_Atan2(var9.x, var9.z));
        func_02033834((struct Struct_02033834_2*)arg0, var10);
        func_020397cc((struct Struct_02018300_3*)arg0, 1);
        var2->unknown_34_.unknown_0_0_ = 1;
        arg0->unknown_0_.obj3D_.EnableFlag(0x180);
        func_02033b88((struct Struct_02010604*)arg0, 0);
        var3->unknown_4c_ = var3->unknown_58_->unknown_8_.unknown1_0_.y;
        var3->unknown_50_ = var1->substruct_c_.unknown_30_;
        if (fix32abs(var2->unknown_2_) - var10 >= 0x333) goto Exit;
        func_ov017_021d3f00(var3, 0, 0);
        var3->unknown_1_ = 1;
        var3->unknown_24_.unknown1_0_ = arg0->unknown_0_.obj3D_.position_;
        if (var3->unknown_3_ == 0) {
            arg0->unknown_0_.obj3D_.MaybeSetRegularAnimation(data_020efb44, 1);
            goto Exit;
        }
        if (var3->unknown_3_ != 1) goto Exit;
        arg0->unknown_0_.obj3D_.MaybeSetRegularAnimation(data_020efb44, 1);
        goto Exit;
    }

    if (var7 == 1) {
        func_02033834((struct Struct_02033834_2*)arg0, var3->unknown_6_);
        func_020397cc((struct Struct_02018300_3*)arg0, 1);
        int var11 = arg0->unknown_0_.obj3D_.normalizedAnimationTime_;

        if (var3->unknown_3_ == 0) {
            if (!arg0->unknown_0_.obj3D_.HasAnimationStopped()) {
                arg0->unknown_0_.obj3D_.AdvanceAnimations();
            }
            if (!arg0->unknown_0_.obj3D_.HasAnimationStopped()) {
                arg0->unknown_0_.obj3D_.AdvanceAnimations();
            }
        }

        if (var3->unknown_3_ == 1) {
            int var12 = var1->substruct_c_.unknown_30_;
            int var13 = (int)(((float)var11 / 4096.0f) * (float)(unsigned int)var12);
            var3->unknown_50_ = var12 - (var13 << 2);
            if (var3->unknown_50_ < 0) var3->unknown_50_ = 0;
        }

        Vector3fix var14;
        Vector3fix var15;
        if (var3->unknown_3_ == 0) {
            func_02038500((Struct_02038500*)&var15, var3->unknown_c_.unknown_0_[0], var3->unknown_c_.unknown_0_[1] + 0x51, var3->unknown_c_.unknown_0_[2]);
        } else if (var3->unknown_3_ == 1) {
            func_02038500((Struct_02038500*)&var15, var3->unknown_18_.unknown_0_[0], var3->unknown_18_.unknown_0_[1] - 0xa3, var3->unknown_18_.unknown_0_[2]);
        }

        if (!arg0->unknown_0_.obj3D_.HasAnimationStopped()) {
            int var16 = var15.z - var3->unknown_24_.unknown_0_[2];
            int var17 = var15.y - var3->unknown_24_.unknown_0_[1];
            int var18 = var15.x - var3->unknown_24_.unknown_0_[0];
            int var19 = inline_02038598(var16, var11);
            int var20 = inline_02038598(var17, var11);
            int var21 = inline_02038598(var18, var11);
            func_02038500((Struct_02038500*)&var14, var3->unknown_24_.unknown_0_[0] + var21, var3->unknown_24_.unknown_0_[1] + var20, var3->unknown_24_.unknown_0_[2] + var19);
            arg0->unknown_0_.obj3D_.position_ = var14;
        }

        if (arg0->unknown_0_.obj3D_.HasAnimationStopped()) {
            func_02038500((Struct_02038500*)&var14, var15.x, var15.y, var15.z);
            arg0->unknown_0_.obj3D_.position_ = var14;
            var3->unknown_1_ = 2;
            arg0->unknown_0_.obj3D_.MaybeSetRegularAnimation(data_020efb4e, 0);
            goto Exit;
        }

        func_ov017_021d3f00(var3, 0, 0);
        goto Exit;
    }

    if (var7 == 2) {
        func_020466f4((struct Struct_02038598_4*)var4, 0x400);
        func_02033874((struct Struct_02033834*)arg0, var3->unknown_6_);
        func_020397cc((struct Struct_02018300_3*)arg0, 1);

        Vector3fix var22 = arg0->unknown_0_.obj3D_.position_;
        Vector3fix var23, var24;

        GameResources* var25 = GetGameResources();
        Struct_02038598_3* var26 = (Struct_02038598_3*)func_ov017_0218d268(var25);

        var5 = 0;
        if (g_keyManager.IsDownHeld()) {
            var5 = 1;
        } else if (g_keyManager.IsUpHeld()) {
            var5 = 2;
        }

        if ((unsigned int)g_touchInput.timeHeld_ > 5) {
            fix32_t var27 = var26->unknown_222_ << 12;
            int var28 = var26->unknown_220_;
            int var29 = var26->unknown_221_;
            fix32_t var30 = var26->unknown_223_ << 12;
            var24.x = var27;
            var24.y = var30;
            var24.z = 0;
            var23.x = var28 << 12;
            var23.y = var29 << 12;
            var23.z = 0;
            Vector3fix_Subtract(&var24, &var23, &var24);
            if (Vector3fix_Length(&var24) >= 0x8000) {
                Vector3fix_Normalize(&var24, &var24);
                if (var24.x >= -1638 && var24.x <= 1638) {
                    if (var24.y >= 0)
                        var5 = 1;
                    else
                        var5 = 2;
                }
            }
        }

        int var31 = 0;
        if (func_02046b60(var6, 4) ||
            func_02046b60(var6, 0x26) ||
            func_02046b60(var6, 1) ||
            func_02046b60(var6, 3) ||
            func_02046b60(var6, 0x3e)) {
            var31 = 1;
            var5 = 0;
        }

        if (var3->unknown_53_ == 0) var5 = 0;

        if (var5 == 1) {
            var22.y -= 0xf5;
        } else if (var5 == 2) {
            var22.y += 0xf5;
        }

        int var32 = fix32_Divide(var22.y - var3->unknown_c_.unknown_0_[1], var3->unknown_18_.unknown_0_[1] - var3->unknown_c_.unknown_0_[1]);
        func_02038500((Struct_02038500*)&var22,
            var3->unknown_c_.unknown_0_[0] + inline_02038598(var3->unknown_18_.unknown_0_[0] - var3->unknown_c_.unknown_0_[0], var32), var22.y,
            var3->unknown_c_.unknown_0_[2] + inline_02038598(var3->unknown_18_.unknown_0_[2] - var3->unknown_c_.unknown_0_[2], var32));
        arg0->unknown_0_.obj3D_.position_ = var22;

        int var33 = arg0->unknown_0_.obj3D_.MaybeGetShadowSource().y - var3->unknown_4c_;
        int var34 = inline_02038598(var33, 0x14000);
        int var35 = (int)((float)var34 / 4096.0f);
        int var36 = var1->substruct_c_.unknown_30_;
        var3->unknown_50_ = var36 - var35;
        if (var3->unknown_50_ < 0) var3->unknown_50_ = 0;

        if (var3->unknown_58_->unknown_2c_.unknown5_0_.unknown_5_ & 2) {
            var3->unknown_50_ = 0;
        }

        var3->unknown_4_ = (unsigned short)(var3->unknown_4_ + GameState::GetInstance()->GetTickCount());

        if (var5 == 1) {
            arg0->unknown_0_.obj3D_.DisableFlag(0x1000);
            arg0->unknown_0_.obj3D_.MaybeSetRegularAnimation(data_020efb4e, 0);
            if (var3->unknown_54_ != var5 || var3->unknown_4_ > 6) {
                func_ov017_021d3f00(var3, var5, 0);
                var3->unknown_4_ = 0;
            }
            if (var3->unknown_48_ != 0) {
                arg0->unknown_0_.obj3D_.SetCurrentAnimationTime(var3->unknown_48_);
                var3->unknown_48_ = 0;
            }
        } else if (var5 == 2) {
            arg0->unknown_0_.obj3D_.DisableFlag(0x1000);
            arg0->unknown_0_.obj3D_.MaybeSetRegularAnimation(data_020efb4e, 4);
            if (var3->unknown_54_ != var5 || var3->unknown_4_ > 6) {
                func_ov017_021d3f00(var3, var5, 0);
                var3->unknown_4_ = 0;
            }
            if (var3->unknown_48_ != 0) {
                arg0->unknown_0_.obj3D_.SetCurrentAnimationTime(var3->unknown_48_);
                var3->unknown_48_ = 0;
            }
        } else {
            arg0->unknown_0_.obj3D_.EnableFlag(0x1000);
            var3->unknown_48_ = arg0->unknown_0_.obj3D_.animationTime_;
            if (var3->unknown_54_ != var5 || var3->unknown_4_ > 6) {
                func_ov017_021d3f00(var3, var5, 0);
                var3->unknown_4_ = 0;
            }
        }
        var3->unknown_54_ = (unsigned char)var5;

        if (var31 != 0) goto Exit;

        if (var22.y < var3->unknown_c_.unknown_0_[1]) {
            func_020466e4(var4, 0x400);
            Struct_020134e0::Struct_02018300* var37 = var3->unknown_58_;
            if (var37->unknown_2c_.unknown5_0_.unknown_5_ & 2) {
                var3->unknown_60_ = var37;
                var3->unknown_1_ = 6;
                goto Exit;
            }
            var3->unknown_1_ = 5;
            var3->unknown_24_.unknown1_0_ = var3->unknown_30_.unknown1_0_;
            func_02033e18(arg0, var3->unknown_30_.unknown_0_, var2->unknown_8_);
            func_02033b88((struct Struct_02010604*)arg0, 1);
            func_02033834((struct Struct_02033834_2*)arg0, var3->unknown_8_);
            func_ov017_021d3f00(var3, 0, 0);
            goto Exit;
        }

        if (var22.y <= var3->unknown_18_.unknown_0_[1]) goto Exit;

        func_020466e4(var4, 0x400);
        Struct_020134e0::Struct_02018300* var38 = var3->unknown_5c_;
        if (var38->unknown_2c_.unknown5_0_.unknown_5_ & 2) {
            var3->unknown_60_ = var38;
            var3->unknown_1_ = 6;
            goto Exit;
        }
        var22.y = var3->unknown_18_.unknown_0_[1];
        arg0->unknown_0_.obj3D_.position_ = var22;
        var3->unknown_24_.unknown1_0_ = var22;
        arg0->unknown_0_.obj3D_.MaybeSetRegularAnimation(data_020efb5a, 1);
        var3->unknown_1_ = 4;
        func_ov017_021d3f00(var3, 0, 0);
        goto Exit;
    }

    if (var7 == 4) {
        func_020397cc((struct Struct_02018300_3*)arg0, 1);
        int var39 = arg0->unknown_0_.obj3D_.normalizedAnimationTime_;
        if (var39 != 0) {
            Vector3fix var40;
            var40 = arg0->unknown_0_.obj3D_.position_;
            var40.y = var3->unknown_24_.unknown_0_[1] + inline_02038598(var3->unknown_3c_.unknown_0_[1] - var3->unknown_24_.unknown_0_[1], 0x199);
            arg0->unknown_0_.obj3D_.position_ = var40;
            var3->unknown_24_.unknown1_0_ = var40;

            int var41 = var1->substruct_c_.unknown_30_;
            var3->unknown_50_ = (int)((float)(unsigned int)var41 *
                (((float)var39 / 4096.0f) * ((float)var39 / 4096.0f)));
            if (var3->unknown_50_ < 0) var3->unknown_50_ = 0;
        }

        if (arg0->unknown_0_.obj3D_.HasAnimationStopped()) {
            var3->unknown_1_ = 5;
            var3->unknown_24_.unknown1_0_ = var3->unknown_3c_.unknown1_0_;
            func_02033e18(arg0, var3->unknown_3c_.unknown_0_, var2->unknown_8_);
            func_02033b88((struct Struct_02010604*)arg0, 1);
            func_02033834((struct Struct_02033834_2*)arg0, var3->unknown_a_);
            func_ov017_021d3f00(var3, 0, 0);
            func_020466f4((struct Struct_02038598_4*)var4, 0x400);
        }
        goto Exit;
    }

    if (var7 == 5) {
        func_020397cc((struct Struct_02018300_3*)arg0, 1);
        arg0->unknown_0_.obj3D_.EnableFlag(0x80);
        func_02033b58((struct Struct_02033b58*)arg0, 1);
        if (!func_02033ec8((struct Struct_02033ec8*)arg0)) goto Exit;
        unsigned char var42 = var3->unknown_52_;

        func_02038508(var3);
        arg0->unknown_253_ = 1;
        var2->unknown_34_.unknown_0_0_ = 0;
        arg0->unknown_0_.obj3D_.DisableFlag(0x1180);
        func_ov017_021d3f00(var3, 0, 1);
        func_020466f4((struct Struct_02038598_4*)var4, 0x400);
        if (var42 == 0) goto Exit;

        arg0->unknown_252_ = 1;
        func_ov017_02191108(var0, 1, 1, 1, 1);
        GameObject* var43 = GameState::GetInstance()->GetUnknownGameObject();
        if (var43 == 0) goto Exit;
        var43->obj3D_.TransitionInheritedAlpha(0x1f, 0x64);
        goto Exit;
    }

    if (var7 == 6) {
        GameState* var44 = GameState::GetInstance();
        Struct_02038598_2* var45 = (Struct_02038598_2*)func_0200fd0c(var44);
        GameResources* var46 = GetGameResources();
        func_020100a8(var44);
        VectorizedMemset(var45, 0, 0x70);
        var45->unknown_4_ = 1;
        var45->unknown_8_ = 1;
        var45->unknown_9_ = 1;
        var45->unknown_b_ = -1;
        var45->unknown_20_[0] = -1;
        var45->unknown_20_[1] = -1;
        var45->unknown_20_[2] = -1;
        var45->unknown_20_[3] = -1;
        var45->unknown_1e_ = -1;
        var45->unknown_c_ = 0;
        var45->unknown_6c_ = -1;

        var45->unknown_0_ = var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_6_;
        var45->unknown_10_ = var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_c_;
        var45->unknown_1c_ = var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_3c_;
        var45->unknown_b_ = (unsigned char)var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_3e_;
        var45->unknown_30_ = var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_c_;
        var45->unknown_3c_ = var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_18_;
        var45->unknown_48_ = var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_24_;
        var45->unknown_54_ = var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_30_;
        var45->unknown_c_ = 1;

        if (var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_5_ & 4) {
            var45->unknown_6c_ = (const short&)var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_42_;
            var45->unknown_6a_ = var3->unknown_60_->unknown_2c_.unknown5_0_.unknown_40_;
        }
        if (var45->unknown_6c_ == -1) {
            var45->unknown_6c_ = 9999;
        }
        var45->unknown_7_ = 1;
        func_0200fcfc(var44, var45);

        func_ov017_0219e310((unsigned char*)var46->unknown_ptr_array_36fc[4], 0);
        func_020469b4((struct Struct_0201bdac_2*)var46->unknown_ptr_array_36fc[0],
            (struct Struct_0201bdac*)var46->unknown_ptr_array_36fc[4]);
        func_020466f4((struct Struct_02038598_4*)var4, 0x400);

        func_02038508(var3);
        arg0->unknown_253_ = 1;
        var2->unknown_6_ = 0;
        var2->unknown_34_.unknown_0_0_ = 0;
        arg0->unknown_0_.obj3D_.EnableFlag(0x1000);
        arg0->unknown_0_.obj3D_.DisableFlag(0x180);
        goto Exit;
    }
    Exit:;
}
