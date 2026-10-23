#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov025_021e75a4_2 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_ov009_0218aa28;
struct Struct_01ff8b48_2;

extern "C" void* __clear(void* arg0, int arg1);
struct Vector3i;
void Vector3fixDivideScalar(Vector3i const*, int, Vector3i*);
extern "C" void func_ov025_021de110(void* arg0);
struct Struct_ov025_021dcf14_7;
struct Struct_ov025_021dcf14_8;
extern "C" void func_ov025_021eee48(struct Struct_ov025_021dcf14_7* arg0, struct Struct_ov025_021dcf14_8* arg1);
extern char data_ov025_021ef834[];

struct Struct_ov025_021e75a4 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    int unknown_c_[3];
    void* unknown_18_;
};

// USA: func_ov025_021e75a4
extern "C" ARM int func_ov025_021e75a4(void* arg0, void* arg1, struct Struct_ov025_021dcf14_7* arg2) {
    GameState* var0 = GameState::GetInstance();
    void* var1[8];
    int var2;
    void** var3;
    int var4;

    var3 = var1;
    var2 = 0;
    struct Struct_ov025_021e75a4_2 var5;
    __clear(&var5, 0xc);
    for (int var6 = var2; var6 < 8; var3++, var6++) {
        GameObject* var7 = var0->GetGameObjectByIndex(var6 + 0xc0);
        *var3 = var7;
        if (var7) {
            struct Struct_ov025_021e75a4_2 var8 = *(struct Struct_ov025_021e75a4_2*)((char*)var7 + 0x44);
            Vector3fix_Add((const Vector3fix*)((struct Struct_ov009_0218aa28*)&var5), (const Vector3fix*)((struct Struct_ov009_0218aa28*)&var8), (Vector3fix*)((struct Struct_ov009_0218aa28*)&var5));
            var2++;
        }
    }
    Vector3fixDivideScalar((Vector3i const*)&var5, var2 << 0xc, (Vector3i*)&var5);

    var3 = var1;
    for (var4 = 0; var4 < var2; var3++, var4++) {
        void* var9 = *var3;
        if (var9) {
            struct Struct_ov025_021e75a4_2* var10 = (struct Struct_ov025_021e75a4_2*)((char*)var9 + 0x44);
            struct Struct_ov025_021e75a4_2 var11 = *var10;
            var11.unknown_0_ = var11.unknown_0_ - var5.unknown_0_;
            *(Vector3i*)((int*)var10) = *(Vector3i const*)((int*)&var11);
        }
    }

    var5.unknown_0_ = 0;
    struct Struct_ov025_021e75a4 var12;
    for (var4 = 0; var4 < 8; var4++) {
        short var13 = (short)(var4 + 0xc0);
        void* var14 = var0->GetGameObjectByIndex(var13);
        if (!var14) {
            continue;
        }
        func_ov025_021de110(&var12);
        var12.unknown_0_ = 0;
        var12.unknown_4_ = 0x12c;
        var12.unknown_8_ = var13;
        var12.unknown_a_ = 0x12c;
        *(Vector3i*)((int*)var12.unknown_c_) = *(Vector3i const*)((int*)&var5);
        func_ov025_021eee48(arg2, (struct Struct_ov025_021dcf14_8*)&var12);
        ((Object3D*)var14)->MaybeSetRegularAnimation((char const*)data_ov025_021ef834, 0);
    }
    return 1;
}
