#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_ov017_021d0e00(int arg0);

// USA: func_ov017_021d0dbc
extern "C" ARM void func_ov017_021d0dbc(void) {
    func_0202ae24();
    unsigned char* var0 = (unsigned char*)func_02010828(GameState::GetInstance());
    unsigned char var1 = var0[0xf7c];
    for (unsigned char var2 = 0; var2 < var1; var2++) {
        signed char var3 = *(signed char*)(var0 + var2 + 0xf78);
        func_ov017_021d0e00(var3);
    }
}
