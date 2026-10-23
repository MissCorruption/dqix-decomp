#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_0200fd58
extern "C" ARM void* func_0200fd58(GameState* arg0) {
    return memset(arg0->objects_, 0, 0x3a4);
}
