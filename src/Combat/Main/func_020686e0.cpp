#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);

struct Struct_020686e0 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_;
};

struct Struct_020686e0_2 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};

struct Struct_020686e0_3 {
    char unknown_0_[0x31];
    signed char unknown_31_;
};

// USA: func_020686e0
extern "C" ARM int func_020686e0(GameState* arg0, struct Struct_020686e0_3* arg1) {
    unsigned char* var0 = (unsigned char*)func_02010828(arg0);
    signed char var1 = arg1->unknown_31_;
    if (var1 < 0) {
        int var2;
        var1 = 0;
        for (var2 = 0; var2 < var0[0xf7c]; var2++) {
            GameObject* var3 = arg0->GetPartyMemberByIndex(((struct Struct_020686e0*)(var0 + var2))->unknown_f78_);
            if (var3 != 0) {
                struct Struct_020686e0_2* var4 = *(struct Struct_020686e0_2**)((char*)var3 + 0x130);
                if (!(var4->unknown_0_ & 1)) {
                    if (var4->unknown_4_ != 0) {
                        var1 = var1 + 1;
                    }
                }
            }
        }
    }
    return var1 != 1;
}
