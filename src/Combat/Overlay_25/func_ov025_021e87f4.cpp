#include <globaldefs.h>
#include "GameState/GameState.h"

struct Vector3i;
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
struct Struct_02033834;
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

struct Struct_ov025_021e87f4 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    char unknown_9_[3];
    int unknown_c_;
};

struct Struct_ov025_021e87f4_2 {
    unsigned int unknown_0_[3];
};

struct Struct_ov025_021e87f4_3 {
    char unknown_0_[0x50];
    struct Struct_ov025_021e87f4_2 unknown_50_;
};

struct Struct_ov025_021e87f4_4 {
    struct Struct_ov025_021e87f4_2 unknown_0_;
    int unknown_c_;
    char unknown_10_[0x1c];
};

// USA: func_ov025_021e87f4
extern "C" ARM int func_ov025_021e87f4(struct Struct_ov025_021e87f4* arg0, int arg1, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov025_021e87f4_4 var1;
    if (!func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)&var1.unknown_c_)) {
        return 1;
    }
    GameObject* var2 = var0->GetMaybeWanderingMonsterByIndex(var1.unknown_c_);
    if (var2) {
        func_02033874((struct Struct_02033834*)var2, arg0->unknown_c_);
    } else {
        var2 = var0->GetGameObjectByIndex(var1.unknown_c_);
        if (!var2) {
            return 1;
        }
        struct Struct_ov025_021e87f4_3* var3 = (struct Struct_ov025_021e87f4_3*)var2;
        var1.unknown_0_ = var3->unknown_50_;
        var1.unknown_0_.unknown_0_[1] = arg0->unknown_c_;
        *(Vector3i*)((int*)&var3->unknown_50_) = *(Vector3i const*)((int*)&var1.unknown_0_);
    }
    return 1;
}
