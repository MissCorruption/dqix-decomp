#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_020100b0
extern "C" ARM unsigned char func_020100b0(GameState* battleStruct) {
#if defined(jpn)
    return battleStruct->unknownObjectIndex_397c_;
#else
    return battleStruct->unknownObjectIndex_397c_;
#endif
}
