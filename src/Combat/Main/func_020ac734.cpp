#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Memory.h"

// USA: func_020ac734
extern "C" ARM int func_020ac734(void* arg0) {
    GameState* var0 = GameState::GetInstance();
#if defined(jpn)
    VectorizedInvertedMemcpy(arg0, (char*)var0 + 0x62b4, 0xad6);
#else
    VectorizedInvertedMemcpy(arg0, (char*)var0 + 0x64f4, 0xad6);
#endif
    return 1;
}
