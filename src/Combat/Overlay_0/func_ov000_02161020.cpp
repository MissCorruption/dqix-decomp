#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct RemapFlagOwner;

struct BattleWork02161020 {
#if defined(jpn)
    char pad0[0xe20];
#else
    char pad0[0xea4];
#endif
    RemapFlagOwner* remapOwner;
};

struct RenderCtx02161020 {
#if defined(jpn)
    char pad0[0x58];
#else
    char pad0[0x38];
#endif
    unsigned short color;
    char pad1[2];
    int alphaScale;
};

struct Combatant02161020 {
    char pad0[0x18e];
    short shadowScale;
};

extern "C" void* func_02057924(void);
extern "C" RenderCtx02161020* func_02012fe4(void);
extern "C" GameObject* func_0200fea4(GameState* gameState, int combatantId);
extern "C" int func_02032fdc(GameObject* obj, int a1, int a2);
extern "C" void func_02057ab8(void* g, int id);
extern "C" void func_0208f87c(const void* pos, int color, int scale, int alpha, int polygonId);
extern "C" void func_020d76b8(RemapFlagOwner* obj, int index);
extern "C" void func_020d76d8(unsigned char* base, int bit);

// USA: func_ov000_02161020
extern "C" ARM void func_ov000_02161020(BattleWork02161020* work) {
    GameState* bs = GameState::GetInstance();
    GameResources* res = GetGameResources();
    void* g = func_02057924();
    RenderCtx02161020* ctx = func_02012fe4();
    RemapFlagOwner* owner = work->remapOwner;
    unsigned short color = ctx->color;
    for (int i = 0; i < 8; i++) {
        GameObject* c = func_0200fea4(bs, i + 0xc0);
        if (c == NULL) {
            continue;
        }
        if (!c->obj3D_.IsVisible()) {
            continue;
        }
        int drawn = 0;
        if (TestFlags04(res, 0x200) == 0) {
            drawn = func_02032fdc(c, 1, drawn);
        }
        if (drawn != 0) {
            func_02057ab8(g, i + 0xc0);
            int alphaScale = ctx->alphaScale;
            int combined = c->obj3D_.GetCombinedAlpha();
            int alpha = (int)((float)alphaScale / 31.0f * (float)combined);
            int polygonId = 1;
            Model3D* model = c->obj3D_.pModel_;
            if (model != NULL && model->rawInternalModel_ != NULL) {
                polygonId = NSBXX_Model_GetMaterialPolygonID(model->rawInternalModel_, 0);
            }
            const Vector3fix& pos = c->obj3D_.MaybeGetShadowSource();
            func_0208f87c(&pos, color, ((Combatant02161020*)c)->shadowScale, alpha, polygonId);
            if (owner != NULL) {
                func_020d76b8(owner, i + 0xc0);
            }
        } else {
            if (owner != NULL) {
                func_020d76d8((unsigned char*)owner, i + 0xc0);
            }
        }
    }
}
