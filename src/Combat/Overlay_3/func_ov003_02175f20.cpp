#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02175f20_4114 = 0xf8e };
enum { Enum_ov003_02175f20_4110 = 0xf8a };
enum { Enum_ov003_02175f20_4116 = 0xf90 };
#else
enum { Enum_ov003_02175f20_4114 = 0x1012 };
enum { Enum_ov003_02175f20_4110 = 0x100e };
enum { Enum_ov003_02175f20_4116 = 0x1014 };
#endif

extern "C" unsigned char func_0207ca94(int arg0);
extern "C" int func_0207c6b8(unsigned char* arg0, unsigned int arg1, int arg2);

// USA: func_ov003_02175f20
extern "C" ARM int func_ov003_02175f20(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    short var2 = *(short*)((char*)arg0 + Enum_ov003_02175f20_4114);
    int var3 = (short)(var2 - 286);
    unsigned char var4 = func_0207ca94(var3);
    short var5 = *(short*)((char*)arg0 + Enum_ov003_02175f20_4110);
    short var6 = *(short*)((char*)arg0 + Enum_ov003_02175f20_4116);
    unsigned char* var7 = (unsigned char*)var1 + 0x1d4;
    short var8 = (short)(var5 - 295);
    var8 = var6 * 5 + var8;
    return func_0207c6b8(var7, var4, var8);
}
