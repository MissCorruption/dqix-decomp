#include <globaldefs.h>
#include <NitroSDK/Matrix.h>
#include <Graphics/Vector.h>

struct Struct_020adda4 {
    unsigned char unknown_0_[0x44];
    Vector3fix unknown_44_;
    unsigned char unknown_50_[0x5e];
    short unknown_ae_;
    unsigned char unknown_b0_[0xb4];
    Vector3fix unknown_164_;
    fix32_t unknown_170_;
    Vector3fix unknown_174_;
    fix32_t unknown_180_;
};

struct Vector3i;
ARM void Vector3fixMultiplyScalar(const Vector3fix* in, fix32_t scale, Vector3fix* out);

// USA: func_020adda4
extern "C" ARM void func_020adda4(Struct_020adda4* arg0) {
    Vector3fix var0 = arg0->unknown_44_;
    Vector3fix var1;
    Vector3fix var2;
    Vector3fix var3;
    Vector3fix var4;
    Vector3fix var5;
    Vector3fix var6;
    short var7 = arg0->unknown_ae_;
    int var8;
    int var9;

    var8 = fix32cos(var7);
    var9 = fix32sin(var7);
    var2.y = 0;
    var2.z = var8;
    var2.x = var9;

    var8 = fix32cos(arg0->unknown_170_);
    var9 = fix32sin(arg0->unknown_170_);
    var3.y = 0;
    var3.z = var8;
    var3.x = var9;

    var8 = fix32cos(arg0->unknown_180_);
    var9 = fix32sin(arg0->unknown_180_);
    var4.y = 0;
    var4.z = var8;
    var4.x = var9;

    Vector3fix_Normalize(&var2, &var2);
    Vector3fix_Normalize(&var3, &var3);
    Vector3fix_Normalize(&var4, &var4);

    *(Vector3i*)((int*)&var1) = *(Vector3i const*)((int*)&var2);
    Vector3fixMultiplyScalar(&var1, 0xe66, &var1);
    Vector3fix_Subtract(&var0, &var1, &var5);
    Vector3fix_Subtract(&var5, &arg0->unknown_164_, &var3);
    Vector3fix_Normalize(&var3, &var3);

    var1.x = -var3.x;
    var1.y = -var3.y;
    var1.z = -var3.z;
    Vector3fixMultiplyScalar(&var1, 0xe66, &var1);
    Vector3fix_Add(&var5, &var1, &arg0->unknown_164_);

    arg0->unknown_170_ = fix32_Atan2(var3.x, var3.z);
    arg0->unknown_170_ = fix32ReduceAngle0To2Pi(arg0->unknown_170_);

    *(Vector3i*)((int*)&var1) = *(Vector3i const*)((int*)&var3);
    Vector3fixMultiplyScalar(&var1, 0xe66, &var1);
    Vector3fix_Subtract(&arg0->unknown_164_, &var1, &var6);
    Vector3fix_Subtract(&var6, &arg0->unknown_174_, &var4);
    Vector3fix_Normalize(&var4, &var4);

    var1.x = -var4.x;
    var1.y = -var4.y;
    var1.z = -var4.z;
    Vector3fixMultiplyScalar(&var1, 0xe66, &var1);
    Vector3fix_Add(&var6, &var1, &arg0->unknown_174_);

    arg0->unknown_180_ = fix32_Atan2(var4.x, var4.z);
    arg0->unknown_180_ = fix32ReduceAngle0To2Pi(arg0->unknown_180_);
}
