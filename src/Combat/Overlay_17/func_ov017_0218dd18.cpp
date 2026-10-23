#include <globaldefs.h>
#include "Graphics/Vector.h"
#include "World/Object3D.h"

struct Struct_ov017_0218dd18_3 {
    Vector3fix unknown_0_;
    fix32_t unknown_c_;
};

struct Struct_ov017_0218dd18 {
    char unknown_0_[0x5c];
    Struct_ov017_0218dd18_3* unknown_5c_;
};

struct Struct_ov017_0218dd18_2 {
    unsigned int unknown_0_;
    char unknown_4_[0x14];
    Object3D* unknown_18_;
};

extern "C" Vector3fix func_020406f8(Struct_ov017_0218dd18_2* arg0);
struct Struct_0203e0a0;
extern "C" Struct_ov017_0218dd18* func_02040538(Struct_0203e0a0*);
struct Struct_0203d028_15;
extern "C" void func_02040774(Struct_0203d028_15*, int, int, int);
extern "C" unsigned int func_02039dcc(unsigned char* arg0);

// USA: func_ov017_0218dd18
extern "C" ARM int func_ov017_0218dd18(Object3D* arg0, Struct_ov017_0218dd18_2* arg1, int arg2) {
    Vector3fix var0 = arg0->position_;
    Vector3fix var1 = func_020406f8(arg1);
    if (fix32abs(var1.y - var0.y) >= 0x2000) {
        return 0;
    }
    int var2 = arg0->GetRadius() * 0.5f;
    int var3 = 0x800;
    if (arg1->unknown_18_ != NULL) {
        var3 = arg1->unknown_18_->GetRadius() / 2;
    }
    Struct_ov017_0218dd18_3* var4 = func_02040538((Struct_0203e0a0*)arg1)->unknown_5c_;
    if (var4 != NULL) {
        var3 = var4->unknown_c_;
        Vector3fix_Add(&var1, &var4->unknown_0_, &var1);
    }
    int var5 = var2 + var3;
    if (var5 == 0) {
        return 0;
    }
    if (var5 < fix32abs(var0.x - var1.x)) {
        return 0;
    }
    if (var5 < fix32abs(var0.z - var1.z)) {
        return 0;
    }
    var1.y = var0.y;
    int var6 = Vector3fix_Distance(&var0, &var1);
    if (var5 < var6) {
        return 0;
    }
    if (arg1->unknown_0_ & 0x40000) {
        return 0;
    }
    if (!func_02039dcc((unsigned char*)arg0)) {
        if (arg2) {
            var5 -= (int)(0.2f * (arg0->GetRadius() * 0.5f));
            if (var5 < var6) {
                return 0;
            }
            Vector3fix var7;
            Vector3fix_Subtract(&var1, &var0, &var7);
            Vector3fixMultiplyScalar(&var7, fix32_Divide(var5, var6), &var7);
            Vector3fix_Add(&var0, &var7, &var1);
            func_02040774((Struct_0203d028_15*)arg1, var1.x, var1.y, var1.z);
        } else {
            Vector3fix var8;
            Vector3fix_Subtract(&var0, &var1, &var8);
            if (var6 < var2) {
                var6 = var2;
            }
            Vector3fixMultiplyScalar(&var8, fix32_Divide(var5, var6), &var8);
            Vector3fix_Add(&var1, &var8, &var0);
            arg0->position_ = var0;
        }
    }
    return 1;
}
