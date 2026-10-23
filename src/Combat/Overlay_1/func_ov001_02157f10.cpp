#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_ov001_021592bc { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_ov001_02157f10 { int unknown_0_[3]; };

struct Vector3i;
ARM void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

// USA: func_ov001_02157f10
extern "C" ARM int func_ov001_02157f10(void* arg0, void* arg1) {
    char* var0 = (char*)arg0;
    char* var1 = (char*)arg1;
    GameState* var2 = GameState::GetInstance();
    int var3 = var2->GetTickCount() << 0xc;
    int var4 = *(int*)(var0 + 0x1c);
    if (var4 == 0) {
        memcpy(var1 + 0x4c, var0 + 0x4, 0xc);
        *(int*)(var1 + 0x38) = 0;
        return 0;
    }
    if (*(int*)(var1 + 0x38) <= 0) {
        struct Struct_ov009_0218aa28 var5;
        int var6 = var4 << 0xd;
        Vector3fix_Subtract((const Vector3fix*)((struct Struct_ov009_0218aa28*)(var0 + 0x4)), (const Vector3fix*)((struct Struct_ov009_0218aa28*)(var1 + 0x4c)), (Vector3fix*)&var5);
        *(int*)(var1 + 0xb4) = fix32_Divide((fix32_t)var5.unknown_0_, (fix32_t)var6);
        *(int*)(var1 + 0xb8) = fix32_Divide((fix32_t)var5.unknown_4_, (fix32_t)var6);
        *(int*)(var1 + 0xbc) = fix32_Divide((fix32_t)var5.unknown_8_, (fix32_t)var6);
    }
    struct Struct_ov001_02157f10 var7 = *(struct Struct_ov001_02157f10*)(var1 + 0xb4);
    Vector3fixMultiplyScalar((Vector3i const*)&var7, var3, (Vector3i*)&var7);
    Vector3fix_Add((const Vector3fix*)((struct Struct_ov009_0218aa28*)(var1 + 0x4c)), (const Vector3fix*)((struct Struct_ov009_0218aa28*)&var7), (Vector3fix*)((struct Struct_ov009_0218aa28*)(var1 + 0x4c)));
    int var8 = *(int*)(var1 + 0x38) + var2->GetTickCount();
    *(int*)(var1 + 0x38) = var8;
    int var9 = *(int*)(var0 + 0x1c) << 1;
    if (var8 >= var9) {
        *(int*)(var1 + 0x38) = 0;
        return 0;
    }
    return 1;
}
