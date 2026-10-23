#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Object3D.h"

struct Struct_020fdd44 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short : 14;
};
extern "C" struct Struct_020fdd44* func_02027ca4(void);
extern "C" struct Struct_020fdd44* func_02028bd0(struct Struct_020fdd44* arg0, int arg1);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" GameObject* func_ov017_021a2738(void* arg0, int arg1);

// USA: func_ov017_0219e180
extern "C" ARM void func_ov017_0219e180(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_020fdd44* var1 = func_02027ca4();
    void* var2 = func_0202ae18();
    if (func_0202b7d8((int*)var2) != 0) {
        if (func_0202c1a4((struct Struct_0202c1a4*)var2) != 0) {
            return;
        }
    }
    struct Struct_020fdd44* var3 = func_02028bd0(var1, arg1);
    if (var3 == NULL) {
        return;
    }
    int var4 = var3->unknown_2_0_;
    for (int var5 = 0; var5 < 0xc; var5++) {
        GameObject* var6 = var0->GetMaybeFieldMonsterByIndex(var4 * 0xc + 0x70 + var5);
        if (var6 == NULL) {
            continue;
        }
        GameObject* var7 = func_ov017_021a2738(arg0, var6->obj3D_.unknown_2_);
        if (var7 == NULL) {
            continue;
        }
        var7->obj3D_.ShallowCloneModelAndAnimationsTo(&var6->obj3D_);
    }
}
