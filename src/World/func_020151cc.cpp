#include "World/ZoneObjectResourceLoading.h"
#include <globaldefs.h>

// USA: func_020151cc
extern "C" ARM int func_020151cc(Zone3D *arg0, Struct_02012ff0 *arg1, Struct_02014a24 *arg2) {
    GameState *var0      = GameState::GetInstance();
    SafeAllocator *var1  = arg0->pAllocator_68_;
    char *var2          = static_cast<char *>(arg0->unknown_ptr_50_);
    LightingManager *var3 = LightingManager::GetInstance();
    int var4         = static_cast<Struct_02014d80 *>(func_0200fd0c(var0))->unknown_20_ < 0;
    arg0->unknown_834_        = var4;
    char var5[0x50];
    unsigned int var6;
    func_02014d18(arg2->unknown_4_, data_020ef1e8, var5);
    const void *var7 = GetFileFromNARCInMemory(var5);
    Object3D *var8;
    if (var7 != NULL) {
        arg1->unknown_4_    = static_cast<Object3D*>(var1->Allocate(sizeof(Object3D)));
        void *var9 = DecompressLZ77FileIntoAllocatedSpace(*var1, var7, var6);
        if (var9 != NULL && arg1->unknown_4_ != 0) {
            Object3D *var10 = arg1->unknown_4_;
            var10->Initialize();
            func_0207df90(var2);
            var10 = arg1->unknown_4_;
            var10->SetModelFromFile(var1, var9, var6, Model3D::TextureStagingMode_Normal);
            func_0207dfac(var2);
            Model3D *var11 = arg1->unknown_4_->pModel_;
            if (var11 != NULL) {
                NSBXXTex *var12 = var11->GetTEX0();
                if (var12 != NULL) {
                    arg0->textureImageMemory_ += NSBXX_Tex_GetBlock1Length(var12);
                    arg0->texturePaletteMemory_ += NSBXX_Tex_GetBlock4Length(var12);
                }
                if (!(static_cast<unsigned char>(arg2->unknown_0_[2]) & 0x20) && var4) {
                    var3->ModelTransformTintBrightnessContrast(var11->rawInternalModel_);
                }
                for (Zone3D::Model3DListNode *var13 = arg0->firstModel_418_; var13 != NULL; var13 = var13->pNext_) {
                    var11->ApplyTexturesFromModel(&var13->model_);
                    var11->SetTEX0(var13->model_.GetTEX0());
                }
            }
        }
        var8 = arg1->unknown_4_;
        if (var8 == NULL || var8->pModel_ == NULL) {
            arg1->unknown_0_ = -1;
            return 0;
        }
    } else {
        arg1->unknown_0_ = -1;
        return 0;
    }
    if (var8 != NULL) {
        Struct_020e6f48 var14 = data_020e6f48;
        for (Struct_020151cc *var15 = var14.unknown_0_; var15->unknown_0_ != 0; var15++) {
            if (var15->unknown_0_ & static_cast<unsigned char>(arg2->unknown_0_[2])) {
                func_02014d18(arg2->unknown_4_, var15->unknown_8_, var5);
                const void *var16 = GetFileFromNARCInMemory(var5);
                if (var16 != NULL) {
                    void *var17 = DecompressLZ77FileIntoAllocatedSpace(*var1, var16, var6);
                    if (var17 != NULL) {
                        if (var15->unknown_4_ < 0) {
                            var8->LoadType0AnimationPackageFromBCFGScript(var1, var17, var6);
                        } else {
                            var8->LoadType0AnimationFromPersistentMemory(var15->unknown_4_, var1, var17, var6);
                        }
                    }
                }
            }
        }
    }
    arg1->unknown_0_ = 2;
    return 1;
}
