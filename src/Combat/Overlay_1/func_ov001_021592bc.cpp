#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_01ff8b48_2;
struct Vector3i;
void Vector3fixDivideScalar(Vector3i const*, int, Vector3i*);

struct Struct_ov001_021592bc { int unknown_0_; int unknown_4_; int unknown_8_; };
void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

extern "C" int func_ov001_02164578(void* arg0, int arg1, void* arg2, int arg3, float arg4);
extern "C" int func_02012fe4(void);
extern "C" int func_02018fbc(int arg0, void* arg1);
extern void* data_ov001_02165884;

// USA: func_ov001_021592bc
extern "C" ARM int func_ov001_021592bc(char* arg0, char* arg1) {
    int var0 = 0;
    GameState* var1 = GameState::GetInstance();
    int var2 = (int)(var1->GetTickCount() << 12);

    if (*(int*)(arg1 + 0x48) >= *(int*)(arg0 + 0x10) * 2) {
        int var3 = *(int*)(arg0 + 0x14);
        if (var3 == 0) {
            memcpy(arg1 + 0x74, arg0 + 0x4, 0xc);
        } else if (var3 == 1) {
            *(int*)(arg1 + 0x74) = *(int*)(arg0 + 0x4);
            *(int*)(arg1 + 0x7c) = *(int*)(arg0 + 0xc);
        }
        void* var4 = arg0 + 0x1c;
        if (var4) {
            func_ov001_02164578(data_ov001_02165884, *(int*)(arg1 + 0x70), var4, var0, 0.0f);
        }
        *(int*)(arg1 + 0x48) = 0;
        return 0;
    }

    if (*(int*)(arg1 + 0x48) <= 0) {
        Struct_ov009_0218aa28 var5;
        Vector3fix_Subtract((const Vector3fix*)((Struct_ov009_0218aa28*)(arg0 + 0x4)), (const Vector3fix*)((Struct_ov009_0218aa28*)(arg1 + 0x74)), (Vector3fix*)&var5);
        Vector3fixDivideScalar((Vector3i const*)&var5, (*(unsigned int*)(arg0 + 0x10)) << 13, (Vector3i*)(arg1 + 0x94));
    } else {
        Struct_ov001_021592bc var6 = *(Struct_ov001_021592bc*)(arg1 + 0x94);
        Vector3fixMultiplyScalar((Vector3i const*)&var6, var2, (Vector3i*)&var6);
        int var7 = *(int*)(arg0 + 0x14);
        if (var7 == 0) {
            Vector3fix_Add((const Vector3fix*)((Struct_ov009_0218aa28*)(arg1 + 0x74)), (const Vector3fix*)((Struct_ov009_0218aa28*)&var6), (Vector3fix*)((Struct_ov009_0218aa28*)(arg1 + 0x74)));
        } else if (var7 == 1) {
            Vector3fix_Add((const Vector3fix*)((Struct_ov009_0218aa28*)(arg1 + 0x74)), (const Vector3fix*)((Struct_ov009_0218aa28*)&var6), (Vector3fix*)((Struct_ov009_0218aa28*)(arg1 + 0x74)));
            int var8 = func_02012fe4();
            *(int*)(arg1 + 0x78) = func_02018fbc(var8, arg1 + 0x74);
        }
    }

    *(int*)(arg1 + 0x48) += (int)var1->GetTickCount();
    return 1;
}
