#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02039df4;
extern "C" void* func_020a86b8(int arg0, int arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4, unsigned char arg5, unsigned char arg6, unsigned char arg7);

struct Struct_ov017_021d18d8 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_[2];
    int unknown_c_;
};

// USA: func_ov017_021d18d8
extern "C" ARM void* func_ov017_021d18d8(int arg0, struct Struct_ov017_021d18d8* arg1, GameState* arg2, int arg3) {
    GameObject* var0 = arg2->GetGameObjectByIndex(arg0);
    int var1 = 1;
    GameObject* var2 = arg2->GetUnknownGameObject();
    if (((Object3D*)((struct Struct_02039df4*)var0))->GetField06() != ((Object3D*)((struct Struct_02039df4*)var2))->GetField06()) var1 = 0;
    typedef void* (*Type_ov017_021d18d8)(int, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, int);
    return ((Type_ov017_021d18d8)func_020a86b8)(arg0, var1, arg1->unknown_4_, arg1->unknown_5_, arg1->unknown_6_, arg1->unknown_7_, arg1->unknown_8_, arg1->unknown_9_, arg1->unknown_c_);
}
