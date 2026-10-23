#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_020ac0b4
extern "C" ARM int func_020ac0b4(void* arg0) {
#if defined(jpn)
    memcpy(arg0, (char*)GameState::GetInstance() + 0x7880, 4);
#else
    memcpy(arg0, (char*)GameState::GetInstance() + 0x7ac0, 4);
#endif
    return 1;
}
