#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov001_0215b058
extern "C" ARM int func_ov001_0215b058(void) {
#if defined(jpn)
    enum { Enum_ov001_0215b058_3244 = 0xa4c };
#else
    enum { Enum_ov001_0215b058_3244 = 0xcac };
#endif
    ((char*)GameState::GetInstance() + 0x5000)[Enum_ov001_0215b058_3244] = 0;
    return 1;
}
