#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_ov001_021592bc { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_0203cdd8 { char unknown_0_[0x64]; int unknown_64_; };

ARM void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);
extern "C" void func_0203cdd8(struct Struct_0203cdd8* arg0, int arg1);

// USA: func_0203ce14
extern "C" ARM void func_0203ce14(void* arg0, Vector3i* arg1) {
    char* var0 = (char*)arg0;
    int var1 = Vector3fix_Distance(arg1, (Vector3i*)(var0 + 0x4));
    if (var1 == 0) {
        return;
    }
    *(Vector3i*)(var0 + 0x78) = *arg1;
    int var2 = *(int*)(var0 + 0x5c);
    var2 |= 1;
    *(int*)(var0 + 0x5c) = var2;
    if (var2 & 4) {
        return;
    }
    Vector3i var3;
    Vector3fix_Subtract((Vector3i*)(var0 + 0x78), (Vector3i*)(var0 + 0x4), &var3);
    int var4 = fix32_Divide(0x1000, var1);
    Vector3fixMultiplyScalar(&var3, var4, &var3);
    int var5 = fix32_Atan2(var3.x, var3.z);
    func_0203cdd8((struct Struct_0203cdd8*)arg0, var5);
}
