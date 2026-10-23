#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_02028460_3 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_ov001_021592bc { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_02059cfc_2;
struct Struct_02059cfc_3;

extern "C" void func_02059f38(struct Struct_02059cfc_2* arg0, struct Struct_02059cfc_3* arg1);
struct Vector3i;
void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

struct Struct_ov025_021eeb8c {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    struct Struct_ov009_0218aa28 unknown_c_;
};

struct Struct_ov025_021eeb8c_2 { char unknown_0_[0x44]; struct Struct_ov009_0218aa28 unknown_44_; };

// USA: func_ov025_021eeb8c
extern "C" ARM int func_ov025_021eeb8c(struct Struct_ov025_021eeb8c* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = var0->GetEffectiveDeltaTime();
    GameObject* var2 = var0->GetGameObjectByIndex(arg0->unknown_8_);
    if (!var2) return 1;
    if (arg0->unknown_a_ <= (unsigned int)var1) {
        func_02059f38((struct Struct_02059cfc_2*)var2, (struct Struct_02059cfc_3*)&arg0->unknown_c_);
        return 1;
    }
    struct Struct_ov009_0218aa28 var3 = ((struct Struct_ov025_021eeb8c_2*)var2)->unknown_44_;
    int var4 = Vector3fix_Distance((const Vector3fix*)((struct Struct_02028460_3*)&var3), (const Vector3fix*)((struct Struct_02028460_3*)&arg0->unknown_c_));
    float var5 = (float)(unsigned int)var1 / (float)arg0->unknown_a_;
    int var6 = (int)(((long long)var4 * (int)(var5 * 4096.0f) + 0x800) >> 12);
    struct Struct_ov009_0218aa28 var7;
    Vector3fix_Subtract((const Vector3fix*)&arg0->unknown_c_, (const Vector3fix*)&var3, (Vector3fix*)&var7);
    int var8 = fix32_Divide((fix32_t)var6, (fix32_t)var4);
    Vector3fixMultiplyScalar((Vector3i const*)&var7, var8, (Vector3i*)&var7);
    Vector3fix_Add((const Vector3fix*)&var3, (const Vector3fix*)&var7, (Vector3fix*)&var3);
    func_02059f38((struct Struct_02059cfc_2*)var2, (struct Struct_02059cfc_3*)&var3);
    arg0->unknown_a_ -= var1;
    return 0;
}
