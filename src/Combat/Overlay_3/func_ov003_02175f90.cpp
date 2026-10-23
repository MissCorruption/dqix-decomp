#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02175f90_4114 = 0xf8e };
#else
enum { Enum_ov003_02175f90_4114 = 0x1012 };
#endif
#include "GameState/GameState.h"

extern "C" unsigned char func_0207ca94(int arg0);
extern "C" short func_0207c638(void* arg0, unsigned int arg1);

// USA: func_ov003_02175f90
extern "C" ARM short func_ov003_02175f90(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    short var2 = *(short*)((char*)arg0 + Enum_ov003_02175f90_4114);
    int var3 = (short)(var2 - 286);
    unsigned char var4 = func_0207ca94(var3);
    return func_0207c638((char*)var1 + 0x1d4, var4);
}
