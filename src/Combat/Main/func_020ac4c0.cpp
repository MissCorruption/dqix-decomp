#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

// USA: func_020ac4c0
extern "C" ARM int func_020ac4c0(void* arg0) {
    char* var0;
    memset(arg0, 0, 0xb0);
#if defined(jpn)
    var0 = (char*)GameState::GetInstance() + 0x2c4 + 0x7000;
#else
    var0 = (char*)GameState::GetInstance() + 0x104 + 0x7400;
#endif
    memcpy(arg0, var0 + 0x3c, 0xb0);
    return 1;
}
