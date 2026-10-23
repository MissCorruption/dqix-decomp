#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void* func_02012fe4(void);
struct Struct_ov017_021973e8;
extern "C" int _ZN8Object3D4DrawEb(void* arg0, int arg1);
struct Struct_020243b8;

struct Struct_ov017_021973e8_2 { int unknown_0_[3]; };
struct Struct_ov017_021973e8_3;
extern "C" void _ZNK8Object3D20MaybeGetShadowSourceEv(struct Struct_ov017_021973e8_2* arg0, struct Struct_ov017_021973e8_3* arg1);
extern "C" void func_0208f87c(const void* arg0, int arg1, int arg2, int arg3, int arg4);

#if defined(jpn)
enum { Enum_ov017_021973e8_56 = 0x58, Enum_ov017_021973e8_60 = 0x5c };
#else
enum { Enum_ov017_021973e8_56 = 0x38, Enum_ov017_021973e8_60 = 0x3c };
#endif

// USA: func_ov017_021973e8
extern "C" ARM void func_ov017_021973e8(unsigned int* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02012fe4();
    unsigned short var2 = *(unsigned short*)((char*)var1 + Enum_ov017_021973e8_56);
    unsigned int var3 = *(unsigned int*)((char*)var1 + Enum_ov017_021973e8_60);

    if (TestFlags04((GameResources*)arg0, 0x100) != 0) return;

    int var4 = 1;
    if (TestFlags04((GameResources*)arg0, 0x1000) != 0) {
        var4 = 0;
    }

    int var5;
    for (var5 = 0xa0; var5 < 0xc0; var5++) {
        GameObject* var6 = var0->GetGameObjectByIndex(var5);
        if (!var6) continue;
        if (((Object3D*)((struct Struct_ov017_021973e8*)var6))->IsChild()) continue;
        if (var6->obj3D_.GetFlag(0x40000000) != 0) continue;
        ((Object3D*)((unsigned char*)var6))->EnableFlag(4);
        if (!_ZN8Object3D4DrawEb(var6, var4)) continue;
        if (var6->obj3D_.GetFlag(0x10) != 0) continue;

        int var7 = ((Object3D*)((struct Struct_020243b8*)var6))->GetInheritedAlpha();
        int var8 = (int)((float)var3 / 31.0f * (float)var7);

        struct Struct_ov017_021973e8_2 var9;
        _ZNK8Object3D20MaybeGetShadowSourceEv(&var9, (struct Struct_ov017_021973e8_3*)var6);
        int var10 = ((Object3D*)((unsigned char*)var6))->GetRadius();
        func_0208f87c(&var9, var2, var10, var8, 8);
    }
}
