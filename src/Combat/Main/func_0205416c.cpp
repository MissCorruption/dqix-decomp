#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0205416c_448 = 0x1b4 };
#else
enum { Enum_0205416c_448 = 0x1c0 };
#endif

#include "GameState/GameState.h"

extern "C" void func_02054028(void* arg0, int arg1);

// USA: func_0205416c
extern "C" ARM void func_0205416c(void* arg0) {
    unsigned int var0 = (unsigned int)((GameState*)(GameState::GetInstance()))->GetEffectiveDeltaTime();
    unsigned short var1 = *(unsigned short*)((char*)arg0 + Enum_0205416c_448);
    if (var1 >= var0) {
        *(unsigned short*)((char*)arg0 + Enum_0205416c_448) = var1 - var0;
        return;
    }
    func_02054028(arg0, 0);
}
