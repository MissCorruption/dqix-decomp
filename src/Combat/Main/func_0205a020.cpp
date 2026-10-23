#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_ov001_021592bc { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Vector3i;
void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

struct Struct_02059cfc_2;
struct Struct_02059cfc_3;
extern "C" void func_02059f38(struct Struct_02059cfc_2* arg0, struct Struct_02059cfc_3* arg1);

struct Struct_02059cfc_4;

extern "C" void func_02059cc8(unsigned char* arg0);

struct Struct_02057334_2;
extern "C" int func_02057854(struct Struct_02057334_2* arg0);

extern "C" int func_02055774(int* arg0);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

extern int data_02108760;

// USA: func_0205a020
extern "C" ARM void func_0205a020(unsigned char* arg0, int arg1) {
    GameState::GetInstance();

    short* var0 = (short*)(arg0 + 0xb0);
    if (*var0 > 0) {
        *var0 -= arg1;
        return;
    }

    if (*(int*)(arg0 + 0xac) == 0) {
        if (*(int*)(arg0 + 0xb8) > 0) {
            int var1 = *(int*)(arg0 + 0x28);
            int var2 = *(int*)(arg0 + 0xbc);
            if (var1 <= var2) {
                int var3 = *(int*)(arg0 + 0x24);
                if (var2 < var3) {
                    func_0205eaa0((struct Struct_02108760*)&data_02108760, *(int*)(arg0 + 0xb8), 0);
                }
            }
        }

        struct Struct_0205a020 { char unknown_0_[0x44]; struct Struct_ov009_0218aa28 unknown_44_; };
        struct Struct_ov009_0218aa28 var4 = ((struct Struct_0205a020*)arg0)->unknown_44_;

        struct Struct_ov009_0218aa28 var5;
        Vector3fixMultiplyScalar((Vector3i const*)(arg0 + 0xc0), arg1 << 12, (Vector3i*)&var5);
        Vector3fix_Add((const Vector3fix*)&var4, (const Vector3fix*)&var5, (Vector3fix*)&var4);
        func_02059f38((struct Struct_02059cfc_2*)arg0, (struct Struct_02059cfc_3*)&var4);

        ((Object3D*)arg0)->AdvanceEffects();

        if (arg0[0x19] & 1) {
            if (((Object3D*)((struct Struct_02059cfc_4*)arg0))->HasAnimationStopped()) {
                func_02059cc8(arg0);
            }
        }

        short* var6 = (short*)(arg0 + 0xb6);
        if (*var6 > 0) {
            *var6 -= arg1;
            if (*var6 <= 0) {
                func_02059cc8(arg0);
            }
        }
    } else {
        if (func_02057854(*(struct Struct_02057334_2**)(arg0 + 0x4)) == 1) {
            func_02059cc8(arg0);
        } else {
            func_02055774((int*)arg0);
        }
    }
}
