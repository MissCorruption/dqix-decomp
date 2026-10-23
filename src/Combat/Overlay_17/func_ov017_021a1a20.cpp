#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void* func_0207d78c(void);
struct Struct_0207d7f4;
extern "C" struct Struct_0207d7f4* func_0207d9bc(struct Struct_0207d7f4* arg0, unsigned short arg1);

extern unsigned char data_ov017_021d7654[4];

// USA: func_ov017_021a1a20
extern "C" ARM unsigned short func_ov017_021a1a20(void) {
#if defined(jpn)
 enum {Enum_ov017_021a1a20_434=0x1a6};
#else
 enum {Enum_ov017_021a1a20_434=0x1b2};
#endif
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0207d78c();
    int var2;
retry:
    if (*(unsigned short*)(data_ov017_021d7654 + 2) > 0x7fff) {
        *(unsigned short*)(data_ov017_021d7654 + 2) = 0x7ff8;
    }
    for (var2 = 0; var2 < 4; var2++) {
        GameObject* var3 = func_0200ff1c(var0, var2);
        if (var3 != NULL) {
            unsigned short var4 = *(unsigned short*)((char*)var3 + Enum_ov017_021a1a20_434);
            if (*(unsigned short*)(data_ov017_021d7654 + 2) == var4) {
                *(unsigned short*)(data_ov017_021d7654 + 2) = *(unsigned short*)(data_ov017_021d7654 + 2) + 1;
                goto retry;
            }
        }
    }
    if (func_0207d9bc((struct Struct_0207d7f4*)var1, *(unsigned short*)(data_ov017_021d7654 + 2)) != NULL) {
        *(unsigned short*)(data_ov017_021d7654 + 2) = *(unsigned short*)(data_ov017_021d7654 + 2) + 1;
        goto retry;
    }
    unsigned short var5 = *(unsigned short*)(data_ov017_021d7654 + 2);
    *(unsigned short*)(data_ov017_021d7654 + 2) = var5 + 1;
    return var5;
}
