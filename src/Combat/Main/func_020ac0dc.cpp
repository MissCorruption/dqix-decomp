#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

// USA: func_020ac0dc
extern "C" ARM int func_020ac0dc() {
    GameState* var0 = GameState::GetInstance();
#if defined(jpn)
    memset((char*)var0 + 0x7884, 0, 0x3ae);
#else
    memset((char*)var0 + 0x7ac4, 0, 0x3ae);
#endif
    return 1;
}
