#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02012de8;
extern "C" Struct_02012de8* func_020d6c00();
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);
extern "C" int func_ov017_02191b58(void*, int);
extern "C" void func_ov017_02191e5c(int, int, short, unsigned char, unsigned short);
extern "C" void func_ov017_02191f4c(int, int);
static inline int inline_ov017_02191cc0(GameObject* arg0) { return arg0->obj3D_.GetField06(); }
extern "C" void func_ov017_0219230c(unsigned char* arg0, int arg1, int arg2);
extern "C" void func_ov017_02192400(unsigned char* arg0, int arg1);
extern "C" unsigned char* func_ov017_0219219c(unsigned char* arg0, int arg1);

// USA: func_ov017_02191cc0
extern "C" ARM void func_ov017_02191cc0(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_02191cc0_15184=0x3930};
#else
 enum {Enum_ov017_02191cc0_15184=0x3b50};
#endif
    if (func_02046708(func_020d6c00(), 0x20000)) return;
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetProtagonist();
    if (var1 == 0) return;
    unsigned short var2 = inline_ov017_02191cc0(var1);

    for (int var3 = 0; var3 <= 199; var3++) {
        int var4 = func_ov017_02191b58(arg0, var3);
        if (!(var4 & 1)) continue;
        GameObject* var5 = var0->GetGameObjectByIndex(var3);
        if (var5 != 0 && var2 != inline_ov017_02191cc0(var5)) continue;

        int var6 = var4 & 4;
        int var7 = var4 & 2;
        if (var6 && var7) {
            func_ov017_02191e5c((int)arg0, var3, 0x999, 1, 0x65ff);
            func_ov017_0219230c(arg0, var3, 8);
        } else if (var6) {
            func_ov017_02191e5c((int)arg0, var3, 0x1000, 0, 0x282f);
            func_ov017_02192400(arg0, var3);
        } else if (var7) {
            unsigned char* var8 = *(unsigned char**)(arg0 + Enum_ov017_02191cc0_15184);
            short var9 = 0x999;
            if (var8[3] != 0 && var8[1] == 0) var9 = 0x1000;
            func_ov017_02191e5c((int)arg0, var3, var9, 1, 0x79e8);
            func_ov017_0219230c(arg0, var3, 8);
        } else {
            func_ov017_02191f4c((int)arg0, var3);
            func_ov017_02192400(arg0, var3);
        }
        unsigned char* var10 = func_ov017_0219219c(arg0, var3);
        if (var10 != 0) *var10 &= ~1;
    }
}
