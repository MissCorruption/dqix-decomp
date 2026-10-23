#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_ov001_021592bc { int unknown_0_; int unknown_4_; int unknown_8_; };
ARM void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

// USA: func_02033e38
extern "C" ARM void func_02033e38(void* arg0) {
    char* var0 = (char*)arg0;
    short* var1 = (short*)(var0 + 0xc6);
    short var2 = *var1;
    if (var2 != 0) {
        Vector3i var3;
        Vector3fix_Subtract((Vector3i*)(var0 + 0xc8), (Vector3i*)(var0 + 0x44), &var3);
        int var4 = Vector3fix_Length(&var3);
        if (var4 < var2) {
            *(Vector3i*)(var0 + 0x44) = *(Vector3i*)(var0 + 0xc8);
            *var1 = 0;
        } else {
            int var5 = fix32_Divide(var2, var4);
            Vector3fixMultiplyScalar(&var3, var5, &var3);
            Vector3i var6;
            Vector3fix_Add((Vector3i*)(var0 + 0x44), &var3, &var6);
            *(Vector3i*)(var0 + 0x44) = var6;
        }
    }
}
