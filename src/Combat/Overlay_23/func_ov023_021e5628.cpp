#include <globaldefs.h>
#include "World/Object3D.h"
#include "NitroSDK/NSBXX/GeometryFifo.h"

extern "C" unsigned short (*func_02099cac(void))[2];
extern "C" int func_020c555c(int arg0);
extern "C" void func_02031234(int arg0);

extern char data_ov023_021fdcef;
extern char data_ov023_021fdcf4;
extern char data_ov023_021fdcfa;
extern char data_ov023_021fdd00;
extern char data_ov023_021fdd08;
extern char data_ov023_021fdd10;

struct Struct_ov023_021e5628 {
    Object3D unknown_0_;
    Object3D unknown_ac_;
    Object3D unknown_158_;
    Object3D unknown_204_;
    Object3D unknown_2b0_;
    Object3D unknown_35c_;
    Object3D unknown_408_;
    Object3D unknown_4b4_;
    Object3D unknown_560_;
    Object3D unknown_60c_;
    unsigned char unknown_6b8_[0xc10 - 0x6b8];
    unsigned char unknown_c10_;
    unsigned char unknown_c11_[0xc12 - 0xc11];
    unsigned char unknown_c12_;
    unsigned char unknown_c13_[0xc14 - 0xc13];
    unsigned char unknown_c14_;
};

struct Struct_ov023_021e5628_2 {
    Object3D* unknown_0_;
    Object3D* unknown_4_;
};

// USA: func_ov023_021e5628
extern "C" ARM void func_ov023_021e5628(Struct_ov023_021e5628* arg0, Struct_ov023_021e5628_2* arg1) {
    if (arg0->unknown_c12_ != 0) return;
    if (arg0->unknown_c14_ == 0) return;

    unsigned short (*var0)[2] = func_02099cac();
    if (var0 == 0) return;

    unsigned short var1 = *(unsigned short*)((char*)var0 + 0x128);
    unsigned short var2[8] = {var1, var1, var1, var1, var1, var1, var1, var1};
    func_020c555c((int)var2);

    if (arg0->unknown_0_.unknown_2_ >= 0) {
        arg0->unknown_0_.AdvanceEffects();
        fix32_t var3 = arg0->unknown_0_.animationTime_;
        arg0->unknown_408_.SetCurrentAnimationTime(var3);
        arg0->unknown_ac_.SetCurrentAnimationTime(var3);
        arg0->unknown_35c_.SetCurrentAnimationTime(var3);
    }
    if (arg0->unknown_0_.unknown_2_ <= -1) return;

    arg0->unknown_0_.Draw(true);

    Model3D* var4;
    Model3D* var5 = *(Model3D**)((char*)arg0 + 8);
    if (var5 == 0) goto skipMessages;
    if (!var5->unknown_flags_a8_0_) var5 = 0;
    if (var5 == 0) goto skipMessages;

    {
        var4 = arg0->unknown_0_.pModel_;
        if (var4 == 0) return;

        int var6 = var4->GetBoneIndex(&data_ov023_021fdcef);
        if (var6 > -1) {
            GetModelBonePositionAndDirectionMatrices(&var5->renderContext_, 0, 0, var6);
            if (arg1 != 0 && arg1->unknown_4_ != 0) {
                arg1->unknown_4_->DrawSimple2(false);
            }
            arg0->unknown_158_.SendTransformToFifo();
            arg0->unknown_158_.DrawSimple2(false);
            arg0->unknown_204_.DrawSimple2(false);
            arg0->unknown_4b4_.DrawSimple2(false);

            if (arg0->unknown_c10_ != 0) {
                var6 = var4->GetBoneIndex(&data_ov023_021fdcf4);
                if (var6 > -1 && arg0->unknown_560_.unknown_2_ > -1) {
                    GetModelBonePositionAndDirectionMatrices(&var5->renderContext_, 0, 0, var6);
                    arg0->unknown_560_.DrawSimple2(false);
                }
                var6 = var4->GetBoneIndex(&data_ov023_021fdcfa);
                if (var6 > -1 && arg0->unknown_560_.unknown_2_ > -1) {
                    GetModelBonePositionAndDirectionMatrices(&var5->renderContext_, 0, 0, var6);
                    func_02031234(0x3244);
                    arg0->unknown_560_.DrawSimple2(false);
                }
            } else {
                var6 = var4->GetBoneIndex(&data_ov023_021fdd00);
                if (var6 > -1 && arg0->unknown_560_.unknown_2_ > -1) {
                    GetModelBonePositionAndDirectionMatrices(&var5->renderContext_, 0, 0, var6);
                    arg0->unknown_560_.DrawSimple2(false);
                }
            }

            var6 = var4->GetBoneIndex(&data_ov023_021fdd08);
            if (var6 > -1 && arg0->unknown_60c_.unknown_2_ > -1) {
                GetModelBonePositionAndDirectionMatrices(&var5->renderContext_, 0, 0, var6);
                arg0->unknown_60c_.DrawSimple2(false);
            }

            if (arg1 != 0 && arg1->unknown_0_ != 0) {
                var6 = var4->GetBoneIndex(&data_ov023_021fdd10);
                if (var6 > -1) {
                    GetModelBonePositionAndDirectionMatrices(&var5->renderContext_, 0, 0, var6);
                    arg1->unknown_0_->DrawSimple2(false);
                }
            }
        }
    }

skipMessages:
    arg0->unknown_0_.ApplyAnimations(&arg0->unknown_408_);
    arg0->unknown_408_.Draw(true);
    arg0->unknown_0_.ApplyAnimations(&arg0->unknown_ac_);
    arg0->unknown_ac_.Draw(true);
    arg0->unknown_0_.ApplyAnimations(&arg0->unknown_35c_);
    arg0->unknown_35c_.Draw(true);
}
