#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201bc94;
struct Struct_020541a4;

extern "C" void func_ov002_02153e90(void* arg0);
extern "C" struct Struct_0201bc94* func_02012fe4();
extern "C" int func_0201bc94(struct Struct_0201bc94* arg0);
extern "C" void* func_02010828(GameState* arg0);
extern "C" void func_020541a4(struct Struct_020541a4* arg0, unsigned char arg1);

// USA: func_ov002_02154824
extern "C" ARM int func_ov002_02154824(void* arg0, unsigned char* arg1, int arg2) {
    GameState* var0;
    unsigned char* var1;
    int var2;
    int var3;

    if (arg1 == NULL) return 0;
    if (arg2 == 0) return 0;

    var3 = 0;
    func_ov002_02153e90(arg1 + 8);
    if (func_0201bc94(func_02012fe4())) {
        var0 = GameState::GetInstance();
        var1 = (unsigned char*)func_02010828(var0);
        for (var2 = 0; var2 < (int)var1[0xf7c]; var2++) {
            unsigned char* var4 = var1 + var2;
            GameObject* var5 = var0->GetPartyMemberByIndex(var4[0xf78]);
            func_020541a4((struct Struct_020541a4*)var5, 1);
        }

        arg1[0x8] = 3;
        var3 = 1;
        *(int*)(arg1 + 0x38) = var3;
    }

    return var3;
}
