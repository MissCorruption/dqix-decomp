#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

// USA: func_020ac460
extern "C" ARM int func_020ac460(void* arg0) {
    memset(arg0, 0, 0x3c);
#if defined(jpn)
    memcpy(arg0, (char*)GameState::GetInstance() + 0x2c4 + 0x7000, 0x3c);
#else
    memcpy(arg0, (char*)GameState::GetInstance() + 0x104 + 0x7400, 0x3c);
#endif
    return 1;
}
