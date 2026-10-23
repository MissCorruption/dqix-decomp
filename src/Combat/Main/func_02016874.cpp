#include <globaldefs.h>
#include "World/Zone3D.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "NitroSDK/NSBXX/RenderConfig.h"

struct Struct_02016874_3;
struct Struct_020ef0dc {
    float unknown_0_;
    float unknown_4_;
    float unknown_8_;
    int unknown_c_;
    float unknown_10_;
};
extern Struct_020ef0dc data_020ef0dc;
extern "C" void func_0201730c(Struct_02016874_3*);
extern "C" void func_02017540(Zone3D*);
extern "C" int func_0201b5b0(int);
extern "C" void func_02016d8c(void*);
extern "C" void func_02016db4(void*, void*);
extern "C" void func_020ca528(const void*, void*);

// USA: func_02016874
extern "C" ARM void func_02016874(Zone3D* arg0) {
    if (arg0->unknown_424_ != 0) return;
    func_0201730c((Struct_02016874_3*)arg0);
    func_02017540(arg0);
    arg0->unk_276c[0xb0] = 0;
    data_020ef0dc.unknown_c_ = 1;
    if (func_0201b5b0(arg0->currentZoneID_)) {
        if (((unsigned char*)arg0->unk_23bc)[0] == 0) return;
        func_0201aedc(arg0);
        int var0;
        int var1;
        int var2;
        Struct_02013490* var3;
        int var4;
        var0 = arg0->grotto_.GetActiveGrottoEnviron();
        var4 = arg0->grotto_.floorWidth_;
        GameObject* var5 = GameState::GetInstance()->GetUnknownGameObject();
        int var6 = (int)(((float)(var5->obj3D_.position_.x + 0x4000) / 4096.0f) / 8.0f);
        int var7 = (int)(((float)(var5->obj3D_.position_.z + 0x4000) / 4096.0f) / 8.0f);
        int var8;
        int var9, var10;
        int var11 = 1;
        var11 += var7;
        if (var0 == 5) {
            var1 = var6 - 4;
            var9 = var6 + 4;
            var10 = var7 - 4;
        } else {
            var1 = var6 - 2;
            var9 = var6 + 2;
            var10 = var7 - 2;
        }
        if (var1 < 0) var1 = 0;
        if (var10 < 0) var10 = 0;
        var9++;
        if (var9 > 16) var9 = 16;
        var11++;
        if (var11 > 16) var11 = 16;
        var2 = var10;
        for (; var2 < var11; var2++) {
            for (var8 = var1; var8 < var9; var8++) {
                var3 = &arg0->grottoTileMapData_420_[var2 * 16];
                var3 = &var3[var8];
                if (var3->unknown_0_ == 0) continue;
                Struct_02016874_2* var12 = var3->unknown_0_->unknown_44_;
                if (var12->unknown_2_ & 4) continue;
                Model3D* var13;
                var13 = var12->unknown_24_->unknown1_4_;
                if (var13 == 0 || var13->rawInternalModel_ == 0) continue;
                LightingManager* var14 = LightingManager::GetInstance();
                var14->ApplyAmbientColorToModel(var13->rawInternalModel_);
                func_020ca528(&var3->unknown_14_, &data_0210a010.objectRotationPosition);
                data_0210a010.flags &= ~0xa4;
                RenderConfig::SetObjectPosition(&var3->unknown_3c_);
                RenderConfig::SubmitToFifo();
                var13->Draw(true);
                if (var0 == 4) {
                    var13 = func_020196fc(arg0, 11)->unknown_44_->unknown_24_->unknown1_4_;
                    NSBXXInternalModel* var15 = var13->rawInternalModel_;
                    if (var13 != 0 && var15 != 0) {
                        Matrix3x3 var16;
                        Mat3x3_WriteIdentity(&var16);
                        func_02016d8c(&var16);
                        RenderConfig::SubmitToFifo();
                        var13->Draw(true);
                    }
                }
            }
        }
        if (var0 != 5) return;
        Model3D* var17 = func_020196fc(arg0, 12)->unknown_44_->unknown_24_->unknown1_4_;
        LightingManager* var18 = LightingManager::GetInstance();
        var18->ApplyAmbientColorToModel(var17->rawInternalModel_);
        if (var7 < 4) {
            for (int var19 = var7 - 4; var19 < var7; var19++) {
                if (var19 < 0) {
                    for (int var20 = var6 - 4; var20 < var6 + 5; var20++) {
                        Vector3i var21;
                        var21.x = (int)(4096.0f * (8.0f * (float)var20));
                        var21.y = 0;
                        var21.z = (int)(4096.0f * (8.0f * (float)var19));
                        RenderConfig::SetObjectPosition(&var21);
                        RenderConfig::SubmitToFifo();
                        var17->Draw(true);
                    }
                }
            }
        }
        if (var6 < 4) {
            for (int var22 = var7 - 4; var22 < var7 + 2; var22++) {
                for (int var23 = var6 - 4; var23 < var6; var23++) {
                    if (var23 < 0) {
                        Vector3i var24;
                        var24.x = (int)(4096.0f * (8.0f * (float)var23));
                        var24.y = 0;
                        var24.z = (int)(4096.0f * (8.0f * (float)var22));
                        RenderConfig::SetObjectPosition(&var24);
                        RenderConfig::SubmitToFifo();
                        var17->Draw(true);
                    }
                }
            }
        }
        if (var6 > var4 - 5) {
            for (int var25 = var10; var25 < var11; var25++) {
                for (int var26 = var6; var26 < var6 + 5; var26++) {
                    if (var26 >= var4) {
                        Vector3i var27;
                        var27.x = (int)(4096.0f * (8.0f * (float)var26));
                        var27.y = 0;
                        var27.z = (int)(4096.0f * (8.0f * (float)var25));
                        RenderConfig::SetObjectPosition(&var27);
                        RenderConfig::SubmitToFifo();
                        var17->Draw(true);
                    }
                }
            }
        }
    } else {
        LightingManager* var28 = LightingManager::GetInstance();
        int var29 = var28->timeOfDayIndex_;
        if (var29 != (unsigned char)arg0->unk_830[1]) arg0->unk_830[2] = 1;
        else arg0->unk_830[2] = 0;
        arg0->unk_830[1] = var29;
        Struct_02013454* var30 = arg0->firstBMDJStruct_41c_;
        while (var30 != 0) {
            func_02016db4(arg0, var30);
            var30 = var30->unknown_54_;
        }
        arg0->unk_830[3] = 0;
    }
}
