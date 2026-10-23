#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0202c1a4;
struct Struct_02048150;

struct Struct_ov017_02192700_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
};

struct Struct_ov017_02192700_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
};

struct Struct_ov017_02192700_4 {
    unsigned int unknown_0_;
#if defined(jpn)
    char unknown_4_[0x34e8 - 0x4];
    Struct_ov017_02192700_3* unknown_36f8_;
    char unknown_34ec_[0x3994 - 0x34ec];
#else
    char unknown1_4_[0x36f8 - 0x4];
    Struct_ov017_02192700_3* unknown_36f8_;
    char unknown_36fc_[0x3bb4 - 0x36fc];
#endif
    Struct_ov017_02192700_2* unknown_3bb4_;
};

struct Struct_ov017_02192700_5 {
    Object3D unknown_0_;
    short unknown_ac_;
    char unknown_ae_[0xb2 - 0xae];
    unsigned short unknown_b2_;
    char unknown_b4_[0xc2 - 0xb4];
    unsigned char unknown_c2_0_ : 4;
#if defined(jpn)
    char unknown1_c3_[0x180 - 0xc3];
#else
    char unknown_c3_[0x18c - 0xc3];
#endif
    unsigned int unknown_18c_;
};

extern "C" void func_ov017_0219a674(unsigned char* arg0);

struct Struct_01ff91ac_18 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_;
    unsigned char unknown_4_;
    char unknown_5_[3];
    int unknown_8_;
    int unknown_c_;
    short unknown_10_;
    short unknown_12_;
};

struct Struct_ov017_02192700 {
    char unknown_0_[0x8c];
    unsigned char unknown_8c_[1];
};

extern "C" Struct_0202c1a4* func_0202ae18(void);
extern "C" Struct_ov017_02192700* func_0205ec34(void);
extern "C" struct Struct_020fdd44* func_02027ca4(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" int func_ov017_02194140(Struct_ov017_02192700_5* arg0, Struct_ov017_02192700_5* arg1);
extern "C" int func_02039d68(unsigned char* arg0);
extern "C" void* func_02010828(GameState* arg0);
extern "C" int func_02086ef0(Struct_02048150* arg0, int arg1);
extern "C" void func_ov017_0219b33c(Struct_ov017_02192700_4* arg0, Struct_01ff91ac_18* arg1);
extern "C" void func_ov017_021c316c(Struct_ov017_02192700_2* arg0, int arg1);
extern "C" int func_ov017_0218d4ec(void* arg0, int arg1);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" int func_02039860(void* arg0);
extern "C" void func_ov017_0219344c(Struct_ov017_02192700_5* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

static inline Struct_ov017_02192700_4* inline_ov017_02192700() {
    Struct_ov017_02192700_4* var0 = (Struct_ov017_02192700_4*)GetGameResources();
    Struct_01ff91ac_18 var1;
    func_ov017_0219a674((unsigned char*)&var1);
    var1.unknown_0_ = 1;
    func_ov017_0219b33c(var0, &var1);
    return var0;
}

static inline void inline_ov017_02192700_2(Struct_01ff91ac_18* arg0) {
    func_ov017_0219a674((unsigned char*)arg0);
    arg0->unknown_0_ = 0xd;
    arg0->unknown_1_ = 0x11;
}

static inline void inline_ov017_02192700_3(Struct_ov017_02192700_4* arg0, Struct_ov017_02192700_5* arg1) {
    Struct_01ff91ac_18 var0;
    inline_ov017_02192700_2(&var0);
    var0.unknown_2_ = arg1->unknown_0_.unknown_4_;
    func_ov017_0219b33c(arg0, &var0);
}

// USA: func_ov017_02192700
extern "C" ARM void func_ov017_02192700(Struct_ov017_02192700_4* arg0) {
    if ((TestFlags00((GameResources*)(&arg0->unknown_0_), 0x20) != 0 && g_keyManager.TestKeysHeld(1) != 0) ||
        TestFlags00((GameResources*)(&arg0->unknown_0_), 0x2000) != 0) {
        return;
    }
    GameState* var0 = GameState::GetInstance();
    Struct_0202c1a4* var1 = func_0202ae18();
    Struct_ov017_02192700* var2 = func_0205ec34();
    Struct_ov017_02192700_5* var3 = (Struct_ov017_02192700_5*)var0->GetUnknownGameObject();
    if (var3 == NULL) {
        return;
    }
    unsigned short var4 = var3->unknown_0_.GetField06();
    func_02027ca4();
    Struct_ov017_02192700_3* var5 = arg0->unknown_36f8_;
    if (func_0202b7d8((int*)var1)) {
        for (int var6 = 0; var6 <= 3; var6++) {
            Struct_ov017_02192700_5* var7 = (Struct_ov017_02192700_5*)var0->GetPartyMemberByIndex(var6);
            if (var7 == NULL || var7 == var3) {
                continue;
            }
            if (var4 != var7->unknown_0_.GetField06()) {
                continue;
            }
            if ((var7->unknown_18c_ & 1) && var7->unknown_0_.GetInheritedAlpha() > 0) {
                if (!func_ov017_02194140(var3, var7)) {
                    continue;
                }
                GameState* var8 = GameState::GetInstance();
                Struct_ov017_02192700_5* var9 = (Struct_ov017_02192700_5*)var8->GetPartyMemberByIndex(var7->unknown_0_.unknown_4_);
                if (var9->unknown_0_.GetField06() != var7->unknown_0_.GetField06()) {
                    continue;
                }
                if (var9->unknown_0_.GetInheritedAlpha() <= 0) {
                    continue;
                }
                if (var9->unknown_0_.GetAlphaScaleFactor() <= 0) {
                    continue;
                }
                if (!var9->unknown_0_.IsVisible()) {
                    continue;
                }
                if (func_02039d68((unsigned char*)var9)) {
                    continue;
                }
                Struct_02048150* var10 = (Struct_02048150*)func_02010828(var8);
                if (var10 == NULL) {
                    continue;
                }
                if (func_02086ef0(var10, var7->unknown_0_.unknown_4_)) {
                    continue;
                }
                Struct_ov017_02192700_4* var11 = inline_ov017_02192700();
                if (var11->unknown_3bb4_->unknown_2_ == 0) {
                    func_ov017_021c316c(var11->unknown_3bb4_, var7->unknown_0_.unknown_4_ & 0xff);
                }
                continue;
            }
            if (func_ov017_0218d4ec(arg0, var7->unknown_0_.unknown_4_) &&
                func_0206dfb0((int)var2, var2->unknown_8c_, 0x799) &&
                func_ov017_02194140(var3, var7)) {
                inline_ov017_02192700_3((Struct_ov017_02192700_4*)GetGameResources(), var7);
            }
            if (func_02039860(var7) >= 0) {
                continue;
            }
            if (!var7->unknown_0_.IsVisible()) {
                continue;
            }
            int var12 = var7->unknown_0_.unknown_4_;
            if (func_ov017_02194140(var3, var7)) {
                if (!(var3->unknown_c2_0_ & (1 << var12))) {
                    var3->unknown_c2_0_ |= 1 << var12;
                    var3->unknown_b2_ = 0;
                }
            } else {
                var3->unknown_c2_0_ &= ~(1 << var12);
            }
        }
    }
    if (!func_0202b7d8((int*)var1) || !func_0202c1a4(var1)) {
        for (int var13 = 0x70; var13 <= 0x9f; var13++) {
            Struct_ov017_02192700_5* var14 = (Struct_ov017_02192700_5*)GameState::GetInstance()->GetMaybeFieldMonsterByIndex(var13);
            if (var14 == NULL || var14->unknown_0_.unknown_2_ < 0) {
                continue;
            }
            Vector3i var15 = var14->unknown_0_.position_;
            var15.y -= var14->unknown_ac_;
            if (var15.y < -0x1e000) {
                var15.y = 0x1e000;
            }
            var14->unknown_0_.position_ = var15;
            if (var14->unknown_0_.GetField06() == var3->unknown_0_.GetField06()) {
                func_ov017_0219344c(var14, 0, 0, 0, 0, 0);
            }
        }
    } else if (var5 != NULL) {
        for (int var16 = 0; var16 <= 12; var16++) {
            Struct_ov017_02192700_5* var17 = (Struct_ov017_02192700_5*)GameState::GetInstance()->GetMaybeFieldMonsterByIndex(var16 + (var5->unknown_2_0_ * 12 + 0x70));
            if (var17 == NULL || var17->unknown_0_.unknown_2_ < 0) {
                continue;
            }
            func_ov017_0219344c(var17, 0, 0, 0, 0, 0);
        }
    }
}
