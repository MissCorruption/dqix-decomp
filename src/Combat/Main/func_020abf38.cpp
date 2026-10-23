#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_020abf38
extern "C" ARM int func_020abf38(void* arg0) {
#if defined(jpn)
    enum { Enum_020abf38_30192 = 0x73b0 };
#else
    enum { Enum_020abf38_30192 = 0x75f0 };
#endif
    memcpy(arg0, (char*)GameState::GetInstance() + Enum_020abf38_30192, 0x4d0);
    return 1;
}
