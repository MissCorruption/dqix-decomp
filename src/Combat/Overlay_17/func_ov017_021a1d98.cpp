#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"
#include "Resource/Brightness.h"

struct Struct_020fdd44 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
};

struct Struct_ov017_021a1d98_2 {
#if defined(jpn)
    char unknown_0_[0x58];
#else
    char unknown1_0_[0x38];
#endif
    unsigned short unknown_38_;
    unsigned int unknown_3c_;
};

struct Struct_ov017_021a1d98 {
    char unknown_0_[0x12];
    short unknown_12_;
};

struct Struct_ov017_021a1d98_3 : GameObject {
    char unknown_13c_[0x180 - 0x13c];
    Struct_ov017_021a1d98* unknown_180_;
};

struct Struct_ov017_021a1d98_4 {
    int unknown_0_;
    unsigned char unknown_4_;
    Struct_ov017_021a1d98_4() : unknown_0_(0x0270f000), unknown_4_(0) {}
};

extern "C" Struct_020fdd44* func_02027ca4();
extern "C" Struct_020fdd44* func_02028bd0(Struct_020fdd44*, int);
extern "C" Struct_ov017_021a1d98_2* func_02012fe4();
extern "C" int func_02076bec(GameObject*, void*);
struct Struct_0203402c;
extern "C" int func_0203402c(Struct_0203402c*);
extern "C" void func_0208f87c(const void* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov017_021a1d98
extern "C" ARM void func_ov017_021a1d98(unsigned int* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    Struct_020fdd44* var1 = func_02028bd0(func_02027ca4(), arg1);
    if (!var1) return;
    Struct_ov017_021a1d98_2* var2 = func_02012fe4();
    unsigned short var3 = var2->unknown_38_;
    unsigned int var4 = var2->unknown_3c_;
    int var5 = 1;
    if (TestFlags04((GameResources*)arg0, 0x1000)) var5 = 0;
    int var6 = 0;
    for (int var7 = 0; var7 < 4; var7++) {
        GameObject* var8 = var0->GetPartyMemberByIndex(var7);
        if (var8 && arg1 == var8->obj3D_.GetField06()) var6++;
    }
    int var9 = 7 - var6;
    Vector3fix var10 = var0->GetUnknownGameObject()->obj3D_.position_;
    Struct_ov017_021a1d98_4 var11[12];
    for (int var12 = 0; var12 < 12; var12++) {
        Struct_ov017_021a1d98_3* var13 = (Struct_ov017_021a1d98_3*)var0->GetMaybeFieldMonsterByIndex(var1->unknown_2_0_ * 12 + 0x70 + var12);
        if (var13 && var13->obj3D_.IsVisible()) {
            Vector3fix var14 = var13->obj3D_.position_;
            var11[var12].unknown_0_ = Vector3fix_Distance(&var10, &var14);
        }
    }
    int var15, var16, var17;
    for (var16 = 0; var16 < var9; var16++) {
        var17 = -1;
        var15 = 0x0270f000;
        for (int var18 = 0; var18 < 12; var18++) {
            if (!var11[var18].unknown_4_ && var11[var18].unknown_0_ <= var15) {
                var15 = var11[var18].unknown_0_;
                var17 = var18;
            }
        }
        if (var17 != -1) var11[var17].unknown_4_ = 1;
    }
    for (int var19 = 0; var19 < 12; var19++) {
        if (!var11[var19].unknown_4_) continue;
        Struct_ov017_021a1d98_3* var20 = (Struct_ov017_021a1d98_3*)var0->GetMaybeFieldMonsterByIndex(var1->unknown_2_0_ * 12 + 0x70 + var19);
        if (var20 && var20->obj3D_.IsVisible()
            && func_02076bec(var20, (void*)var5)
            && !func_0203402c((Struct_0203402c*)var20)) {
            int var21 = var20->obj3D_.GetCombinedAlpha();
            int var22 = (int)((float)var4 / 31.0f * (float)var21);
            int var23 = var20->unknown_180_ ? var20->unknown_180_->unknown_12_ : 0x1000;
            fix32_t var24 = FIX32_MULTIPLY(var23, var20->obj3D_.GetScale().x * 15);
            const Vector3fix& var25 = var20->obj3D_.MaybeGetShadowSource();
            func_0208f87c(&var25, var3, var24, var22, 8);
        }
    }
}
