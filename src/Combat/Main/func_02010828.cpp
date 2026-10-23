#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_02010828
extern "C" ARM void* func_02010828(GameState* arg0) {
#if defined(jpn)
    return (char*)arg0 + 0x27a4;
#else
    return (char*)arg0 + 0x2a04;
#endif
}
