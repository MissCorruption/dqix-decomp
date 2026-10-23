#include <globaldefs.h>
#include "Combat/CombatantRecovery.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_0202c1a4;
struct Struct_02033b58;

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" int func_02048418(unsigned char* arg0, unsigned short arg1);
extern "C" void func_02033b58(struct Struct_02033b58* arg0, unsigned char arg1);
extern "C" void func_ov017_021c9d2c(int arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3, int arg4, unsigned int arg5, unsigned char arg6, int arg7, int arg8);
extern "C" void func_ov017_02191108(void* arg0, int arg1, int arg2, int arg3, int arg4);

static inline unsigned short inline_ov017_021bd5d0_4(const BaseCombatStats* arg0) {
    return arg0->primaryStats.maxMP;
}
static inline unsigned short inline_ov017_021bd5d0_5(const BaseCombatStats* arg0) {
    return arg0->primaryStats.maxHP;
}

// USA: func_ov017_021bd5d0
extern "C" ARM void func_ov017_021bd5d0(void) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    GameObject* var2 = var0->GetGameObjectByIndex(0);
    void* var3 = GetGameResources();
    struct Struct_020200c0* var4 = var2->unknown_ac_.unknown_84_;

    if (var4->inline_ov017_021bd5d0() & 1) {
        if (func_0202b7d8((int*)var1) && func_0202c1a4((struct Struct_0202c1a4*)var1) == 0) {
            func_02053fe4(var2, 1, 0);
            func_02048418((unsigned char*)var2, 1);

            var4 = var2->unknown_ac_.unknown_84_;
            struct BaseCombatStats* var5 = var2->baseStats_;
            unsigned char var6 = var4->inline_ov017_021bd5d0_3();
            unsigned int var7 = var4->inline_ov017_021bd5d0();
            unsigned short var8 = inline_ov017_021bd5d0_4(var5);
            unsigned short var9 = inline_ov017_021bd5d0_5(var5);
            unsigned short var10 = var4->inline_ov017_021bd5d0_2();
            func_ov017_021c9d2c(var2->obj3D_.unknown_4_, 1, var9, var10, var8, var7, var6, 1, 0);

            func_02033b58((struct Struct_02033b58*)var2, 0);
            var2->unknown_ac_.unknown_b2_ = 0;
        } else if (func_0202b7d8((int*)var1) == 0) {
            func_02053fe4(var2, 1, 0);
            func_02048418((unsigned char*)var2, 1);
            func_02033b58((struct Struct_02033b58*)var2, 0);
            var2->unknown_ac_.unknown_b2_ = 0;
        }
        func_ov017_02191108(var3, 1, 1, 1, 0);
    }
}
