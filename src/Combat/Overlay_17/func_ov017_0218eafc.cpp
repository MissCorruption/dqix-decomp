#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Combat/CombatantRecovery.h"
#include "NitroSDK/NSBXX/GeometryFifo.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "NitroSDK/Graphics.h"
#include "Resource/Brightness.h"

struct Struct_0205faf4_11;

struct Struct_ov017_0218eafc {
#if defined(jpn)
    unsigned char unknown_0_[0x34b8];
#else
    unsigned char unknown1_0_[0x36c8];
#endif
    Model3D* unknown_36c8_;
};

extern "C" void* func_02057924(void);
extern "C" void func_02057ab8(void* arg0, int arg1);
extern "C" int func_ov017_021922ac(void* arg0, unsigned int arg1);
extern "C" int func_02039d68(unsigned char* arg0);
extern "C" int func_02053cdc(int* arg0);
extern "C" int func_02053cd4(unsigned char* arg0);
extern "C" int func_02032fdc(void* arg0, int arg1, Vector3i* arg2);
extern "C" int func_02061bd8(Struct_0205faf4_11* arg0);
extern "C" unsigned char func_02053eb4(void* arg0, int arg1);
extern "C" void func_02031234(int arg0);
extern "C" Object3D* func_ov017_021bdbcc(void* arg0);
extern "C" Object3D* func_ov017_021bdbc0(unsigned char* arg0);
extern "C" void func_ov017_0218dba0(int arg0);

// USA: func_ov017_0218eafc
extern "C" ARM void func_ov017_0218eafc(Struct_ov017_0218eafc* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02057924();
    int var2 = func_ov017_021922ac(arg0, (unsigned char)arg1);
    if (var2) func_02057ab8(var1, arg1);
    if (func_020100bc(var0) == 0) return;

    Struct_020236dc_2* var3 = (Struct_020236dc_2*)var0->GetPartyMemberByIndex(arg1);
    int var4 = arg1 * 12 + 0x13;
    Object3D* var5 = (Object3D*)var0->GetGameObjectByIndex(var4);
    if (var3->obj3D_.GetFlag(0x200)) return;
    if (func_02039d68((unsigned char*)var3)) return;
    if (var3->obj3D_.IsChild()) return;
    Model3D* var6 = var3->obj3D_.pModel_;
    if (var6 == NULL) return;
    ModelRenderContext* var7 = var6->unknown_flags_a8_0_ ? &var6->renderContext_ : NULL;
    if (var7 == NULL) return;

    bool var8 = true;
    if (TestFlags04((GameResources*)arg0, 0x1000)) var8 = false;
    int var9 = var3->obj3D_.GetCombinedAlpha();
    fix32_t var10 = var3->obj3D_.GetAlphaScaleFactor();

    Vector3i var11;
    if (func_02053cdc((int*)var3)) {
        var11 = var3->obj3D_.position_;
        Vector3i var12 = var11;
        var12.y += func_02053cd4((unsigned char*)var3);
        var3->obj3D_.position_ = var12;
        if (var5) var5->position_ = var12;
    }

    if ((var3->unknown_18c_ & 1) && !(var3->unknown_18c_ & 2) && var3->obj3D_.IsVisible()) {
        var3->obj3D_.PopulateRenderConfigWorld();
        RenderConfig::SubmitToFifo();
        arg0->unknown_36c8_->SetAlpha(var9);
        arg0->unknown_36c8_->Draw(var8);
        if (!var2) func_02057ab8(var1, arg1);
        return;
    }

    var3->obj3D_.EnableFlag(0x20000);
    Vector3i var13;
    if (func_02032fdc(var3, var8, &var13)) {
        int var14 = arg1 * 12 + 0x14;
        int var15 = arg1 * 12 + 0x15;
        int var16 = arg1 * 12 + 0x1b;
        int var17 = arg1 * 12 + 0x1c;
        int var18 = arg1 * 12 + 0x1d;
        unsigned char var19[6] = {
            (unsigned char)(arg1 * 12 + 0x13), (unsigned char)var14, (unsigned char)var15,
            (unsigned char)var16, (unsigned char)var17, (unsigned char)var18
        };
        for (unsigned int var20 = 0; var20 < 6; var20++) {
            Object3D* var21 = (Object3D*)var0->GetGameObjectByIndex(var19[var20]);
            if (var21) {
                var21->SetInheritedAlpha(var9);
                var21->SetAlphaScaleFactor((fix16_t)var10);
            }
        }

        if (!func_02061bd8((Struct_0205faf4_11*)var3)) {
            int var22 = func_02053eb4(var3, 0);
            GetModelBonePositionAndDirectionMatrices(var7, NULL, NULL, var22);
            Object3D* var23 = (Object3D*)var0->GetGameObjectByIndex(var14);
            if (var23) {
                Vector3fix var24 = var23->GetScale();
                GXFIFO_MATRIX_SCALE = var24.x;
                GXFIFO_MATRIX_SCALE = var24.y;
                GXFIFO_MATRIX_SCALE = var24.z;
                var23->EnableFlag(0x8000);
                var23->Draw(false);
            }
            var23 = (Object3D*)var0->GetGameObjectByIndex(var15);
            if (var23) {
                var23->EnableFlag(0x8000);
                var23->Draw(false);
            }
            var23 = (Object3D*)var0->GetGameObjectByIndex(var16);
            if (var23 && var23->unknown_2_ >= 0) {
                var23->EnableFlag(0x8000);
                var23->Draw(false);
            }
            GetModelBonePositionAndDirectionMatrices(var7, NULL, NULL, func_02053eb4(var3, 3));
            var23 = (Object3D*)var0->GetGameObjectByIndex(var18);
            if (var23 && var23->unknown_2_ > 0) {
                var23->EnableFlag(0x8000);
                var23->Draw(false);
            }
            if (var3->unknown_18c_ & 0x20) {
                var23 = (Object3D*)var0->GetGameObjectByIndex(var17);
                if (var23) {
                    var23->EnableFlag(0x8000);
                    func_02031234(0x3244);
                    var23->Draw(false);
                    var23->DisableFlag(0x8000);
                }
            }
            if (arg1 == 0) {
                Object3D* var25 = func_ov017_021bdbcc(arg0);
                if (var25) {
                    GetModelBonePositionAndDirectionMatrices(var7, NULL, NULL, var22);
                    var25->EnableFlag(0x8000);
                    var25->Draw(false);
                }
            }
            if (var3->obj3D_.IsParent()) var3->obj3D_.DrawChildren(&var3->obj3D_);
            if (arg1 == 0) {
                Object3D* var26 = func_ov017_021bdbc0((unsigned char*)arg0);
                if (var26) {
                    GetModelBonePositionAndDirectionMatrices(var7, NULL, NULL, func_02053eb4(var3, 2));
                    var26->EnableFlag(0x8000);
                    var26->Draw(false);
                }
            }
            if (var5) {
                var5->position_ = var13;
                var5->rotation_ = var3->obj3D_.rotation_;
                var5->Draw(false);
            }
        }
        func_ov017_0218dba0(arg1);
        if (!var2) func_02057ab8(var1, arg1);
    }

    if (func_02053cdc((int*)var3)) {
        var3->obj3D_.position_ = var11;
        if (var5) var5->position_ = var11;
    }
}
