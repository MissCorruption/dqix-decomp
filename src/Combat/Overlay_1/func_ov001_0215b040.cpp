#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov001_0215b040
extern "C" ARM int func_ov001_0215b040() {
#if defined(jpn)
    enum { Enum_ov001_0215b040_3244 = 0xa4c };
#else
    enum { Enum_ov001_0215b040_3244 = 0xcac };
#endif
    *(unsigned char*)((char*)GameState::GetInstance() + 0x5000 + Enum_ov001_0215b040_3244) = 1;
    return 1;
}
