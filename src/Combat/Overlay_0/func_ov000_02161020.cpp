#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Struct_020d76b8;

struct Struct_ov000_02161020 {
#if defined(jpn)
    char unknown_0_[0xe20];
#else
    char unknown1_0_[0xea4];
#endif
    Struct_020d76b8* unknown_ea4_;
};

struct Struct_ov000_02161020_2 {
#if defined(jpn)
    char unknown_0_[0x58];
#else
    char unknown1_0_[0x38];
#endif
    unsigned short unknown_38_;
    char unknown_3a_[2];
    int unknown_3c_;
};

struct Struct_ov000_02161020_3 {
    char unknown_0_[0x18e];
    short unknown_18e_;
};

extern "C" void* func_02057924(void);
extern "C" Struct_ov000_02161020_2* func_02012fe4(void);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" int func_02032fdc(GameObject* arg0, int arg1, int arg2);
extern "C" void func_02057ab8(void* arg0, int arg1);
extern "C" void func_0208f87c(const void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_020d76b8(Struct_020d76b8* arg0, int arg1);
extern "C" void func_020d76d8(unsigned char* arg0, int arg1);

// USA: func_ov000_02161020
extern "C" ARM void func_ov000_02161020(Struct_ov000_02161020* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    void* var2 = func_02057924();
    Struct_ov000_02161020_2* var3 = func_02012fe4();
    Struct_020d76b8* var4 = arg0->unknown_ea4_;
    unsigned short var5 = var3->unknown_38_;
    for (int var6 = 0; var6 < 8; var6++) {
        GameObject* var7 = func_0200fea4(var0, var6 + 0xc0);
        if (var7 == NULL) {
            continue;
        }
        if (!var7->obj3D_.IsVisible()) {
            continue;
        }
        int var8 = 0;
        if (TestFlags04(var1, 0x200) == 0) {
            var8 = func_02032fdc(var7, 1, var8);
        }
        if (var8 != 0) {
            func_02057ab8(var2, var6 + 0xc0);
            int var9 = var3->unknown_3c_;
            int var10 = var7->obj3D_.GetCombinedAlpha();
            int var11 = (int)((float)var9 / 31.0f * (float)var10);
            int var12 = 1;
            Model3D* var13 = var7->obj3D_.pModel_;
            if (var13 != NULL && var13->rawInternalModel_ != NULL) {
                var12 = NSBXX_Model_GetMaterialPolygonID(var13->rawInternalModel_, 0);
            }
            const Vector3fix& var14 = var7->obj3D_.MaybeGetShadowSource();
            func_0208f87c(&var14, var5, ((Struct_ov000_02161020_3*)var7)->unknown_18e_, var11, var12);
            if (var4 != NULL) {
                func_020d76b8(var4, var6 + 0xc0);
            }
        } else {
            if (var4 != NULL) {
                func_020d76d8((unsigned char*)var4, var6 + 0xc0);
            }
        }
    }
}
