#include <globaldefs.h>
#include <World/Zone3D.h>
#include <NitroSDK/NSBXX/RenderConfig.h>

extern Vector3i data_020e6e2c;
extern Vector3i data_020e6e38;
extern "C" void func_02016d8c(void* arg0);

// USA: func_02017540
extern "C" ARM void func_02017540(Zone3D* arg0) {
    if (arg0->unknown_274c_ == 0) return;
    NSBXXInternalModel* var0[3] = {};
    var0[0] = arg0->models_498_[0].rawInternalModel_;
    var0[1] = arg0->models_498_[1].rawInternalModel_;
    NSBXXTex* var1[3] = {};
    var1[0] = arg0->models_498_[0].GetTEX0();
    var1[1] = arg0->models_498_[1].GetTEX0();
    Vector3i var2 = data_020e6e2c;
    RenderConfig::SetObjectScale(&var2);
    int* var3 = arg0->unknown_5f0_;
    for (int var4 = 0; var4 < 2; var4++) {
        NSBXXTex** var5;
        NSBXXInternalModel** var6;
        var6 = var0;
        var5 = var1;
        while (*var5 != NULL && *var6 != NULL) {
            int var7 = *var3;
            var3++;
            NSBXX_Tex_WritePaletteVRAMOffset(*var5, var7);
            NSBXX_DetachTexturePaletteFromModel(*var6);
            NSBXXInternalModel* var8 = *var6++;
            NSBXXTex* var9 = *var5++;
            NSBXX_AttachTexturePaletteToModel(var8, var9);
        }
        Struct_020133fc* var10 = arg0->unknown_47c_;
        for (int var11 = 0; var11 < arg0->numChests_; var10++, var11++) {
            if (var10->unknown_16_ != 0 && ((var4 == 0 && var10->unknown_17_ == 0) || (var4 == 1 && var10->unknown_17_ != 0))) {
                Vector3i var12 = var10->unknown_0_;
                short var13 = var10->unknown_c_;
                short var14 = var10->unknown_e_;
                RenderConfig::SetObjectPosition(&var12);
                Matrix3x3 var15;
                fix32_t var16 = fix32cos(var13);
                fix32_t var17 = fix32sin(var13);
                Mat3x3_WriteRotationY(&var15, var17, var16);
                func_02016d8c(&var15);
                RenderConfig::SubmitToFifo();
                arg0->models_498_[0].DrawMeshWithMaterial(true, 0, 0, 1);
                Vector3i var18 = data_020e6e38;
                Mat3x3_ApplyToVector(&var18, &var15, &var18);
                Vector3fix_Add(&var12, &var18, &var12);
                RenderConfig::SetObjectPosition(&var12);
                Matrix3x3 var19;
                fix32_t var20 = fix32cos(var14);
                fix32_t var21 = fix32sin(var14);
                Mat3x3_WriteRotationX(&var19, var21, var20);
                Matrix3x3 var22;
                Mat3x3_Multiply(&var19, &var15, &var22);
                func_02016d8c(&var22);
                RenderConfig::SubmitToFifo();
                arg0->models_498_[1].DrawMeshWithMaterial(true, 0, 0, 1);
            }
        }
    }
}
