#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_02163248
extern "C" ARM int func_ov001_02163248(void* arg0) {
    unsigned char* var0 = (unsigned char*)func_020100bc(GameState::GetInstance());
    if (var0 == NULL) return 1;
    *(unsigned char*)((char*)var0 + 0x265) = (func_ov017_021d60f4(arg0) == 0);
    return 1;
}
