#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(void* arg0);
extern "C" void* func_02010828(GameState* arg0);
extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_021ce400(unsigned char arg0, unsigned short arg1);

// USA: func_ov017_021ce4e0
extern "C" ARM void func_ov017_021ce4e0(void) {
    if (func_0202c540(func_0202ae18())) return;
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02010828(var0);
    if (var1[0xf7d] == 0) return;
    unsigned short* var2 = (unsigned short*)func_02012fe4();
    func_ov017_021ce400(var1[0xf7d], *var2);
}
