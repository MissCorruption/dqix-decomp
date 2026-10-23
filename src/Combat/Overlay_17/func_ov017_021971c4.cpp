#if defined(jpn)
enum { Enum_ov017_021971c4_434 = 0x1a6, Enum_ov017_021971c4_17408 = 0x4200, Enum_ov017_021971c4_194 = 0x12 };
#else
enum { Enum_ov017_021971c4_434 = 0x1b2, Enum_ov017_021971c4_17408 = 0x4400, Enum_ov017_021971c4_194 = 0xc2 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* __clear(void* arg0, int arg1);

struct Struct_02039df4;

extern "C" int func_ov017_02196fc8(GameObject* arg0, GameObject* arg1, int arg2);

struct Struct_ov017_021971c4 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

// USA: func_ov017_021971c4
extern "C" ARM unsigned short func_ov017_021971c4(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (var0 == NULL) {
        return 0;
    }
    GameObject* var1 = var0->GetUnknownGameObject();
    if (var1 == NULL) {
        return 0;
    }
    struct Struct_ov017_021971c4* var2 = (struct Struct_ov017_021971c4*)func_02010828(var0);
    int var3[4];
    unsigned short var4 = 0;
    __clear(var3, 0x10);
    int var5;
    for (var5 = 0; var5 < var2->unknown_f7c_; var5++) {
        var3[var2->unknown_f78_[var5]] = 1;
    }
    int var6;
    for (var6 = 0; var6 < 4; var6++) {
        if (var3[var6] != 0) {
            continue;
        }
        GameObject* var7 = func_0200ff1c(var0, var6);
        if (var7 == NULL) {
            continue;
        }
        if (((Object3D*)((struct Struct_02039df4*)var7))->GetField06() != ((Object3D*)((struct Struct_02039df4*)var1))->GetField06()) {
            continue;
        }
        if (*((unsigned char*)var7 + 0xbe) != 2) {
            continue;
        }
        if (func_ov017_02196fc8(var1, var7, 0x1000)) {
            unsigned short var8 = *(unsigned short*)((unsigned char*)var7 + Enum_ov017_021971c4_434);
            if (*(unsigned short*)(arg0 + Enum_ov017_021971c4_17408 + Enum_ov017_021971c4_194) != var8) {
                var4 = var8;
                break;
            }
        }
    }
    return var4;
}
