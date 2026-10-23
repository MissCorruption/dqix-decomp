#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_0200fd48
extern "C" ARM void func_0200fd48(GameState* battleStruct, int id) {
    battleStruct->objects_[id] = NULL;
}
