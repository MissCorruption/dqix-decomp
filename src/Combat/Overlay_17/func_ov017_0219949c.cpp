#if defined(jpn)
enum { Enum_ov017_0219949c_17479 = 0x4197 };
#else
enum { Enum_ov017_0219949c_17479 = 0x4447 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
struct Struct_02039df4;
extern "C" void func_ov017_021d0860(int arg0, int arg1, int arg2);

// USA: func_ov017_0219949c
extern "C" ARM void func_ov017_0219949c(void* arg0, int arg1, int arg2, unsigned char arg3, signed char arg4) {
    struct Struct_0202c1a4* var0 = (struct Struct_0202c1a4*)func_0202ae18();
    signed char var1 = func_0202c1a4(var0);

    if (arg2 != var1 && arg2 != 4) {
        return;
    }

    GameState* var2 = GameState::GetInstance();
    GameObject* var3 = var2->GetGameObjectByIndex(arg1);
    GameObject* var4 = var2->GetUnknownGameObject();
    unsigned short var5 = ((Object3D*)((struct Struct_02039df4*)var3))->GetField06();
    unsigned short var6 = ((Object3D*)((struct Struct_02039df4*)var4))->GetField06();

    if (var5 != var6) {
        func_ov017_021d0860(arg3, 1, 1);
        return;
    }

    if (arg4 != *(signed char*)((char*)arg0 + Enum_ov017_0219949c_17479)) {
        GetGameResources();
        func_ov017_021d0860(arg3, 1, 1);
        return;
    }

    unsigned char var7 = (unsigned char)func_0202c1a4(var0);
    if (arg3 < var7) {
        func_ov017_021d0860(arg3, 1, 1);
        return;
    }
    func_ov017_021d0860(arg3, 1, 0);
}
