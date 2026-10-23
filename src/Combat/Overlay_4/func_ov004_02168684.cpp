#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov004_02170038 { unsigned int unknown_0_[0x88 / 4]; };
extern struct Struct_ov004_02170038 data_ov004_02170038;
extern "C" void func_ov011_02184a24(void* arg0, void* arg1, int arg2);

extern "C" void* func_0203cf4c(void);
extern "C" void* func_0203df78(void* arg0, int arg1);

struct Struct_0203de84 { unsigned int unknown_0_[3]; };
struct Struct_0203de84_2;
extern "C" void func_020406f8(struct Struct_0203de84* arg0, struct Struct_0203de84_2* arg1);

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Vector3i;
int Vector3fixAngleToPoint(Vector3i const*, Vector3i const*);
struct Struct_ov004_02168684 { unsigned int unknown_0_[3]; };

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);

// USA: func_ov004_02168684
extern "C" ARM void func_ov004_02168684(SafeAllocator* arg0, void* arg1) {
    struct Struct_ov004_02170038 var0 = data_ov004_02170038;
    void* var1 = arg0->Allocate(0x88);
    memcpy(var1, &var0, 0x88);
    func_ov011_02184a24(arg1, var1, 0x22);

    GameState* var2 = GameState::GetInstance();
    void* var3 = func_0203df78(func_0203cf4c(), 0x67);
    if (!var3) return;
    GameObject* var4 = var2->GetUnknownGameObject();
    if (!var4) return;

    struct Struct_0203de84 var5;
    func_020406f8(&var5, (struct Struct_0203de84_2*)var3);
    struct Struct_ov004_02168684 var6;
    struct Struct_ov004_02168684 var7;
    var7 = *(struct Struct_ov004_02168684*)&var5;
    var6 = *(struct Struct_ov004_02168684*)((char*)var4 + 0x44);
    int var8 = Vector3fixAngleToPoint((Vector3i const*)&var6, (Vector3i const*)&var7);
    func_02033834((struct Struct_02033834_2*)var4, var8);
}
