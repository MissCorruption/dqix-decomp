#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_0217a220_4163 = 0xfbf };
enum { Enum_ov003_0217a220_2204 = 0x818 };
enum { Enum_ov003_0217a220_4110 = 0xf8a };
enum { Enum_ov003_0217a220_4154 = 0xfb6 };
#else
enum { Enum_ov003_0217a220_4163 = 0x1043 };
enum { Enum_ov003_0217a220_2204 = 0x89c };
enum { Enum_ov003_0217a220_4110 = 0x100e };
enum { Enum_ov003_0217a220_4154 = 0x103a };
#endif

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" short func_02080468(void* arg0, int arg1);

// USA: func_ov003_0217a220
extern "C" ARM void func_ov003_0217a220(unsigned char* arg0) {
    short var0 = -1;
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = var1->GetPartyMemberByIndex(*(signed char*)(arg0 + Enum_ov003_0217a220_4163));
    if (var2 != NULL) {
        unsigned char* var3 = (unsigned char*)func_02053c6c((unsigned char*)var2);
        short var4 = func_02080468(*(void**)(arg0 + Enum_ov003_0217a220_2204), 0x15);
        short var5 = *(short*)(arg0 + Enum_ov003_0217a220_4110) - var4;
        var0 = *(short*)(var3 + var5 * 2 + 0x400 + 0x54);
    }
    *(short*)(arg0 + Enum_ov003_0217a220_4154) = var0;
}
