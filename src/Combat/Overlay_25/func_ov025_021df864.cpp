#include <globaldefs.h>

#include "Graphics/Vector.h"
#include "World/Object3D.h"

struct Struct_ov025_021df864_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};

struct Struct_ov025_021df864 {
    Object3D unknown_0_;
    Object3D unknown_ac_;
    Vector3fix unknown_158_;
    Vector3fix unknown_164_;
    int unknown_170_;
    unsigned char unknown_174_;
    char unknown_175_;
    Struct_ov025_021df864_2 unknown_176_[10];
};

// USA: func_ov025_021df864
extern "C" ARM void func_ov025_021df864(Struct_ov025_021df864* arg0) {
    int var0;
    int var1;
    if (arg0->unknown_174_ <= 3) {
        var1 = 1;
    } else {
        var1 = 0;
    }
    if (var1) {
        for (var0 = 0; var0 < 10; var0++) {
            Struct_ov025_021df864_2* var2 = &arg0->unknown_176_[var0];
            if (var2->unknown_1_ != 0) {
                Vector3fix var3;
                Vector3fixMultiplyScalar(&arg0->unknown_158_, var2->unknown_0_ << 12, &var3);
                Vector3fix_Add(&arg0->unknown_164_, &var3, &var3);
                var3.y = 0x400;
                Object3D* var4 = &arg0->unknown_0_;
                var4->position_ = var3;
                var4->SetInheritedAlpha(var2->unknown_1_);
                var4->DrawMeshWithMaterial(true, 0, 0, 1);
            }
        }
    } else {
        for (var0 = 0; var0 < 10; var0++) {
            Struct_ov025_021df864_2* var5 = &arg0->unknown_176_[var0];
            if (var5->unknown_1_ != 0) {
                Vector3fix var6;
                Vector3fixMultiplyScalar(&arg0->unknown_158_, var5->unknown_0_ << 12, &var6);
                Vector3fix_Add(&arg0->unknown_164_, &var6, &var6);
                var6.y = 0x400;
                Object3D* var7 = &arg0->unknown_ac_;
                var7->position_ = var6;
                var7->SetInheritedAlpha(var5->unknown_1_);
                var7->DrawMeshWithMaterial(true, 0, 0, 1);
            }
        }
    }
}
