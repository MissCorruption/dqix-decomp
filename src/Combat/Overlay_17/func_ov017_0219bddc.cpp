#if defined(jpn)
enum { Enum_ov017_0219bddc_2112 = 0x860 };
#else
enum { Enum_ov017_0219bddc_2112 = 0x840 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0202ae18(void);
extern "C" void* func_0205ec34(void);
extern "C" void* func_02012fe4(void);
extern "C" int func_0202c508(void* arg0);
struct Struct_020ad4c4;
extern "C" int func_020ad4c4(struct Struct_020ad4c4* arg0);
extern "C" int func_02098080(void* arg0);
struct Struct_02039df4;
extern "C" int func_0206e558(void* arg0);
extern "C" int func_ov017_0219c774(int arg0, int arg1, int arg2);

// USA: func_ov017_0219bddc
extern "C" ARM int func_ov017_0219bddc(unsigned char* arg0) {
    GetGameResources();
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    void* var2 = func_0205ec34();
    void* var3 = func_02012fe4();
    GameObject* var4 = var0->GetGameObjectByIndex(0);
    GameObject* var5 = var0->GetProtagonist();

    if (func_0202c508(var1) != 0) {
        return 0;
    }
    if (var4 == NULL) {
        return 0;
    }
    if (var5 == NULL) {
        return 0;
    }

    int var6 = 0;
    if (func_020ad4c4((struct Struct_020ad4c4*)var3) != 0) {
        var6 = 1;
        goto end;
    }
    if (func_02098080((char*)var3 + Enum_ov017_0219bddc_2112) != 0) {
        var6 = 1;
        arg0[0] = (unsigned char)var6;
        goto end;
    }

    unsigned short var7 = ((Object3D*)((struct Struct_02039df4*)var4))->GetField06();
    unsigned short var8 = ((Object3D*)((struct Struct_02039df4*)var5))->GetField06();
    if (var7 != var8) {
        return var6;
    }

    if (func_0206e558(var2) != 0) {
        var6 = 1;
    }
    if (func_ov017_0219c774(*(int*)((char*)var3 + 8), 0, 0) != 0) {
        var6 = 1;
    }

end:
    return var6;
}
