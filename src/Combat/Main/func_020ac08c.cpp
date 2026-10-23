#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_020ac08c
extern "C" ARM int func_020ac08c(void* arg0) {
#if defined(jpn)
    memcpy((char*)GameState::GetInstance() + 0x7880, arg0, 4);
#else
    memcpy((char*)GameState::GetInstance() + 0x7ac0, arg0, 4);
#endif
    return 1;
}
