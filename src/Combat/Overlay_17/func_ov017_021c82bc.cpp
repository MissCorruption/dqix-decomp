#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void func_ov017_021c812c(int arg0, int arg1);
extern "C" void func_02049390(unsigned char* arg0, unsigned char arg1);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void func_ov000_02160fa8(void* arg0, int arg1);

struct Struct_ov017_021c82bc {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_0_ : 4;
    unsigned char unknown_4_4_ : 1;
    unsigned char unknown_4_5_ : 3;
    unsigned char unknown_5_[4];
    unsigned char unknown_9_[8];
};

// USA: func_ov017_021c82bc
extern "C" ARM void func_ov017_021c82bc(int arg0, struct Struct_ov017_021c82bc* arg1, int arg2, int arg3, struct Struct_0202c1a4* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021c82bc_1816=0x508};
#else
 enum {Enum_ov017_021c82bc_1816=0x718};
#endif
    signed char var0 = func_0202c1a4(arg4);
    if (arg1->unknown_4_0_ != var0) return;
    if (arg1->unknown_4_4_) {
        func_ov017_021c812c((unsigned char)arg0, 0);
        return;
    }

    GameState* var1 = GameState::GetInstance();
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        GameObject* var3 = var1->GetCombatantByIndex(var2);
        if (var3 != NULL && arg1->unknown_5_[var2] != 0xff) {
            func_02049390((unsigned char*)var3, arg1->unknown_5_[var2]);
        }
    }
    int var4;
    for (var4 = 0; var4 < 8; var4++) {
        GameObject* var5 = var1->GetCombatantByIndex(var4 + 0xc0);
        if (var5 != NULL && arg1->unknown_9_[var4] != 0xff) {
            func_02049390((unsigned char*)var5, arg1->unknown_9_[var4]);
        }
    }

    void* var6 = *(void**)((char*)arg3 + 0x3000 + Enum_ov017_021c82bc_1816);
    void* var7 = func_ov017_021b8468(var6);
    if (!var7) return;
    func_ov000_02160fa8(var7, 0x200000);
}
