#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

short fix32cos(int x);
short fix32sin(int x);

struct Struct_020acecc_7;
extern "C" void func_020ad1f0(struct Struct_020acecc_7* arg0, int arg1, int arg2, int arg3);

void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

struct Struct_020adfa8 {
    char unknown_0_[0x44];
    Vector3i unknown_44_;
    char unknown_50_[0xae - 0x50];
    short unknown_ae_;
    char unknown_b0_[0x164 - 0xb0];
    Vector3i unknown_164_;
    int unknown_170_;
    Vector3i unknown_174_;
    int unknown_180_;
};

// USA: func_020adfa8
extern "C" ARM void func_020adfa8(Struct_020adfa8* arg0) {
    Vector3i var0 = arg0->unknown_44_;
    int var1 = arg0->unknown_ae_;
    Vector3i var2;
    int var3 = fix32cos(var1);
    var2.x = fix32sin(var1);
    var2.y = 0;
    var2.z = var3;
    Vector3fix_Normalize(&var2, &var2);
    Vector3i var4;
    func_020ad1f0((struct Struct_020acecc_7*)&var4, -var2.x, -var2.y, -var2.z);
    Vector3i var5;
    Vector3fixMultiplyScalar(&var4, 0x1ccc, &var5);
    Vector3i var6;
    Vector3fix_Add(&var0, &var5, &var6);
    arg0->unknown_164_ = var6;
    Vector3i var7;
    Vector3fix_Add(&var6, &var5, &var7);
    arg0->unknown_174_ = var7;
    arg0->unknown_170_ = var1;
    arg0->unknown_180_ = var1;
}
