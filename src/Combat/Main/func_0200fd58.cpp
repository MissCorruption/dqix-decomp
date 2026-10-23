#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_0200fd58
extern "C" ARM void* func_0200fd58(GameState* battleStruct) {
    return memset(battleStruct->objects_, 0, 0x3a4);
}
