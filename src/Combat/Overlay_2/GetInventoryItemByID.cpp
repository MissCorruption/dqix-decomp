#include <globaldefs.h>
#if defined(jpn)
#define COMBATANT_ID_OFFSET 0x1ae8
#else
#define COMBATANT_ID_OFFSET 0x1c20
#endif
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov002_0215707c {
    char unknown_0_[0xc];
    short unknown_c_[1];
};

struct Struct_02000c9c_63 {
    char unknown_0_[0xc00];
    Struct_ov002_0215707c unknown_c00_;
    Struct_ov002_0215707c* inline_ov002_0215707c() { return &unknown_c00_; }
};

struct Struct_ov002_0215707c_2 {
    char unknown_0_[0x204];
    Struct_02000c9c_63 unknown_204_;
    Struct_02000c9c_63* inline_ov002_0215707c_2() { return &unknown_204_; }
};

// USA: func_ov002_0215707c
// KEEP-NAME
extern "C" ARM int GetInventoryItemByID(void* arg0, int arg1, int arg2) {
    if (arg1 < 0) {
        return -1;
    }
    if (arg2 < 0) {
        return -1;
    }
    GameState* var0 = GameState::GetInstance();
    if (arg2 == 5) {
        Struct_ov002_0215707c_2* var1 = (Struct_ov002_0215707c_2*)func_02010828(var0);
        return var1->inline_ov002_0215707c_2()->inline_ov002_0215707c()->unknown_c_[arg1];
    }
    if (arg2 == 4) {
        char* var2 = (char*)func_02010828(var0);
        return *(short*)(var2 + 0xc + arg1 * 2);
    }
    signed char var3 = *(signed char*)((char*)arg0 + COMBATANT_ID_OFFSET);
    GameObject* var4 = func_0200ff1c(var0, var3);
    if (var4 == 0) {
        return -1;
    }
    return *(short*)((char*)func_02053c6c((unsigned char*)var4) + 0x454 + arg1 * 2);
}
