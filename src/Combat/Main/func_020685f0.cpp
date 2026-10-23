#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" void* func_02010828(GameState*);

struct Struct_020685f0 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

struct Struct_020685f0_2 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_;
};

// USA: func_020685f0
extern "C" ARM int func_020685f0(GameState* arg0) {
    unsigned char* var0 = (unsigned char*)func_02010828(arg0);
    int var1;
    for (var1 = 0; var1 < var0[0xf7c]; var1++) {
        GameObject* var2 = arg0->GetPartyMemberByIndex(((struct Struct_020685f0_2*)(var0 + var1))->unknown_f78_);
        if (var2 != 0) {
            struct Struct_020685f0* var3 = *(struct Struct_020685f0**)((char*)var2 + 0x150);
            if (var3->unknown_49c_0_ == 0) {
                return 1;
            }
        }
    }
    return 0;
}
