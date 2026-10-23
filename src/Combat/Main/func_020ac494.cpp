#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_020ac494
extern "C" ARM int func_020ac494(void* arg0) {
#if defined(jpn)
    int* var0 = (int*)((char*)GameState::GetInstance() + 0x2c4);
#else
    int* var1 = (int*)((char*)GameState::GetInstance() + 0x104);
#endif
#if defined(jpn)
    memcpy((char*)(var0 + 0x1c00) + 0x3c, arg0, 0xb0);
#else
    memcpy((char*)(var1 + 0x1d00) + 0x3c, arg0, 0xb0);
#endif
    return 1;
}
