#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02163c80_672 = 0x21c };
#else
enum { Enum_ov000_02163c80_672 = 0x2a0 };
#endif

#include "GameState/GameState.h"

struct Struct_ov000_02163c80 { char unknown_0_[Enum_ov000_02163c80_672]; unsigned char* unknown_2a0_; };

struct Struct_0201bdac_4;
struct Struct_02010088;
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" int func_02086b98(struct Struct_0201bdac_4* arg0);
extern "C" int func_02010088(struct Struct_02010088* arg0);

// USA: func_ov000_02163c80
extern "C" ARM int func_ov000_02163c80(struct Struct_ov000_02163c80* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_0201bdac_4* var1 = (struct Struct_0201bdac_4*)func_02010828(var0);
    int var2 = 1;
    int var3;
    int var4;
    for (var3 = 0; var3 < 4; var3++) {
        GameObject* var5 = var0->GetPartyMemberByIndex(var3);
        if (var5 == NULL) continue;
        if (func_020a35e0(arg0->unknown_2a0_, var3 & 0xff)) continue;
        if (!(**(int**)((char*)var5 + 0x130) & 1)) var2 = 0;
    }
    int var6 = func_02086b98(var1) != 0;
    if (arg1) {
        var6 = 1;
        for (var4 = 0; var4 < 4; var4++) {
            GameObject* var7 = var0->GetCombatantByIndex(var4);
            if (var7 == NULL) continue;
            if (!func_020a35e0(arg0->unknown_2a0_, var4 & 0xff)) continue;
            if (!func_02010088((struct Struct_02010088*)var7)) var6 = 0;
        }
    }
    if (var6 && !var2) {
        unsigned char* var8 = arg0->unknown_2a0_;
        if (var8[0x24] != 0 || var8[0x25] != 0) return 1;
    }
    return 0;
}
