#if defined(jpn)
enum { Enum_ov017_021b996c_22308 = 0x54c4, Enum_ov017_021b996c_1788 = 0x4ec, Enum_ov017_021b996c_2456 = 0x868 };
#else
enum { Enum_ov017_021b996c_22308 = 0x5724, Enum_ov017_021b996c_1788 = 0x6fc, Enum_ov017_021b996c_2456 = 0x998 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void* arg0);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
struct Struct_02039df4;
struct Struct_02038598_5;
extern "C" int func_02046b60(struct Struct_02038598_5* arg0, int arg1);
extern "C" int func_020421a0();
extern "C" void func_ov017_021d079c(unsigned char arg0, unsigned char arg1, unsigned short arg2);

struct Struct_ov017_021b996c { char unknown_0_[0x12c]; int unknown_12c_; };

// USA: func_ov017_021b996c
extern "C" ARM void func_ov017_021b996c(struct Struct_ov017_021b996c* arg0, int arg1, int arg2, unsigned char arg3, unsigned short arg4) {
    void* var0 = func_0202ae18(arg0);
    signed char var1 = func_0202c1a4((struct Struct_0202c1a4*)var0);
    if (arg2 != var1 && arg2 != 4) return;

    GameState* var2 = GameState::GetInstance();
    GameObject* var3 = var2->GetGameObjectByIndex(arg1);
    GameObject* var4 = var2->GetUnknownGameObject();
    unsigned short var5 = ((Object3D*)((struct Struct_02039df4*)var3))->GetField06();
    unsigned short var6 = ((Object3D*)((struct Struct_02039df4*)var4))->GetField06();
    if (var5 != var6) {
        func_ov017_021d079c(arg3, 1, 1);
        return;
    }

    int var7;
    if (arg0->unknown_12c_ != arg4 && (var7 = *(int*)((char*)var2 + Enum_ov017_021b996c_22308)) != arg4) {
        void* var8 = GetGameResources();
        struct Struct_02038598_5* var9 = *(struct Struct_02038598_5**)((char*)var8 + 0x3000 + Enum_ov017_021b996c_1788);
        if (func_02046b60(var9, 4)) {
            func_ov017_021d079c(arg3, 1, 0);
        } else {
            func_ov017_021d079c(arg3, 1, 1);
        }
        return;
    }

    int var10 = func_020421a0();
    if (*(int*)(var10 + Enum_ov017_021b996c_2456) != 0) {
        func_ov017_021d079c(arg3, 1, 0);
        return;
    }

    unsigned char var11 = (unsigned char)func_0202c1a4((struct Struct_0202c1a4*)var0);
    if (arg3 < var11) {
        func_ov017_021d079c(arg3, 1, 1);
    } else {
        func_ov017_021d079c(arg3, 1, 0);
    }
}
