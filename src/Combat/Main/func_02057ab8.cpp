#include <globaldefs.h>

#include "NitroSDK/Matrix.h"
#include "GameState/GameState.h"
#include "NitroSDK/NSBXX/GeometryFifo.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "World/Object3D.h"

struct Model3D;
void* GetModel3DContext(Model3D*);
Matrix4x3 RotationMatrixY(int angle);
void Vector3fixMultiply(const Vector3fix* a, const Vector3fix* b, Vector3fix* out);
extern "C" void func_02059f54(void* arg0, int arg1);

struct Struct_02057ab8 {
    char unknown_0_[0xc4];
    Vector3fix unknown_c4_;
    Vector3fix unknown_d0_;
    Vector3fix unknown_dc_;
    Matrix4x3 unknown_e8_;
};

struct Struct_02057ab8_2 {
    char unknown_0_[4];
    struct Struct_02057ab8* unknown_4_;
    char unknown_8_[0x44 - 0x8];
    Vector3fix unknown_44_;
    Vector3fix unknown_50_;
    char unknown_5c_[0xac - 0x5c];
    int unknown_ac_;
    short unknown_b0_;
    short unknown_b2_;
    short unknown_b4_;
    char unknown_b6_[0xd4 - 0xb6];
};

struct Struct_02057ab8_3 {
    char unknown_0_[8];
    struct Struct_02057ab8_2 unknown_8_[16];
};

extern "C" ARM void func_02057ab8(struct Struct_02057ab8_3* arg0, int arg1);

// USA: func_02057ab8
extern "C" ARM void func_02057ab8(struct Struct_02057ab8_3* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    if (arg1 < 0) {
        return;
    }
    for (var1 = 0; var1 < 16; var1++) {
        struct Struct_02057ab8_2* var2 = &arg0->unknown_8_[var1];
        if (arg1 != var2->unknown_b2_) continue;
        if (var2->unknown_b0_ > 0) continue;
        void* var3 = var0->GetGameObjectByIndex(var2->unknown_b2_);
        if (var3 == 0) {
            var2->unknown_b2_ = -1;
            continue;
        }
        void* var4 = *(void**)((char*)var3 + 8);
        if (var4 == 0) {
            var2->unknown_b2_ = -1;
            continue;
        }
        ModelRenderContext* var5 = (ModelRenderContext*)GetModel3DContext((Model3D*)var4);
        if (var5 == 0) {
            var2->unknown_b2_ = -1;
            continue;
        }

        Matrix4x3 var6;
        Mat4x3_WriteIdentity(&var6);
        Vector3fix var7 = *(Vector3fix*)((char*)var3 + 0x44);
        Vector3fix var8 = *(Vector3fix*)((char*)var3 + 0x50);
        Vector3fix var9 = ((Object3D*)var3)->GetScale();
        int var10 = 0;
        if (var2->unknown_b4_ > -1) {
            if (GetModelBonePositionAndDirectionMatrices(var5, (Matrix4x3*)var10, (Matrix3x3*)var10, (unsigned int)var2->unknown_b4_)) {
                const Matrix4x3* var11 = RenderConfig::GetInverseViewMatrix();
                GetCurrentPositionAndDirectionMatrices(&var6, (Matrix3x3*)var10);
                Mat4x3_Multiply(&var6, var11, &var6);
                var10 = 1;
            }
        }
        if (var2->unknown_ac_ == 0) {
            Vector3fix var12 = var2->unknown_44_;
            Vector3fix var13 = var2->unknown_50_;
            Vector3fix var14 = ((Object3D*)var2)->GetScale();
            Matrix4x3 var15;
            Vector3fix var16;
            var15 = RotationMatrixY(var8.y);
            Mat4x3_ApplyToVector(&var12, &var15, &var16);
            Vector3fix_Add(&var7, &var16, &var7);
            Vector3fixMultiply(&var9, &var14, &var9);
            var2->unknown_44_ = var7;
            var2->unknown_50_ = var8;
            ((Object3D*)var2)->SetScale(&var9);
            func_02059f54(var2, var1 + 0xd0);
            func_02057ab8(arg0, var1 + 0xd0);
            var2->unknown_44_ = var12;
            var2->unknown_50_ = var13;
            ((Object3D*)var2)->SetScale(&var14);
        } else if (var2->unknown_ac_ == 1) {
            struct Struct_02057ab8* var17 = var2->unknown_4_;
            if (var17 != 0) {
                if (var10 == 0) {
                    var17->unknown_c4_ = var7;
                    var17->unknown_d0_ = var8;
                    var17->unknown_dc_ = var9;
                } else {
                    var7.x = var6.translation.x;
                    var7.y = var6.translation.y;
                    var7.z = var6.translation.z;
                    Mat4x3_ApplyScale(&var6, &var6, 0xf627, 0xf627, 0xf627);
                    var6.translation.x = var7.x;
                    var6.translation.y = var7.y;
                    var6.translation.z = var7.z;
                    var17->unknown_e8_ = var6;
                }
            }
            func_02059f54(var2, var1 + 0xd0);
            func_02057ab8(arg0, var1 + 0xd0);
        }
    }
}
