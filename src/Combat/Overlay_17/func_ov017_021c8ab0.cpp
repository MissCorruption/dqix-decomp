#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" void func_02049390(unsigned char* arg0, unsigned char arg1);

struct Struct_ov017_021c8ab0 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021c8ab0_2 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_[8];
    unsigned short unknown_c_;
};

struct Struct_ov017_021c8ab0_3 {
    unsigned char unknown_0_[4];
    struct Struct_ov017_021c8ab0_2 unknown_4_;
};

// USA: func_ov017_021c8ab0
extern "C" ARM void func_ov017_021c8ab0(int arg0, struct Struct_ov017_021c8ab0_3* arg1, GameState* arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c8ab0_1816=0x508};
#else
 enum {Enum_ov017_021c8ab0_1816=0x718};
#endif
    void* var0 = *(void**)(arg3 + 0x3000 + Enum_ov017_021c8ab0_1816);
    Struct_ov017_021c8ab0* var1 = (Struct_ov017_021c8ab0*)func_ov017_021b8478(var0);
    if (var1 == NULL) return;
    if (!func_ov017_021b8468(var0)) return;
    if (!func_ov017_021b8470(var0)) return;

    struct Struct_ov017_021c8ab0_2* var2 = &arg1->unknown_4_;
    if (var1->unknown_8_ != var2->unknown_c_) return;

    int var3;
    for (var3 = 0; var3 < 4; var3++) {
        GameObject* var4 = arg2->GetCombatantByIndex(var3);
        if (var4 != NULL && var2->unknown_0_[var3] != 0xff) {
            func_02049390((unsigned char*)var4, var2->unknown_0_[var3]);
        }
    }
    int var5;
    for (var5 = 0; var5 < 8; var5++) {
        GameObject* var6 = arg2->GetCombatantByIndex(var5 + 0xc0);
        if (var6 != NULL && var2->unknown_4_[var5] != 0xff) {
            func_02049390((unsigned char*)var6, var2->unknown_4_[var5]);
        }
    }
}
