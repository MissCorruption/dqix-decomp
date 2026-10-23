#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" void* func_02053c6c(unsigned char* arg0);
extern "C" void* func_ov000_02161318(void* arg0, int arg1);

// USA: func_ov000_02175628
extern "C" ARM void func_ov000_02175628(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02010828(var0);
    unsigned char var2 = var1[0xf7c];
    unsigned char var3;
    for (var3 = 0; var3 < var2; var3++) {
        signed char var4 = *(signed char*)(var1 + var3 + 0xf00 + 0x78);
        GameObject* var5 = var0->GetPartyMemberByIndex(var4);
        if (var5 == 0) {
            continue;
        }
        void* var6 = func_02053c6c((unsigned char*)var5);
#if defined(jpn)
        enum { Enum_ov000_02175628_2380 = 0x8b4 };
#else
        enum { Enum_ov000_02175628_2380 = 0x94c };
#endif
        signed char var7 = (signed char)*(int*)((char*)var6 + Enum_ov000_02175628_2380);
        if (var7 == 5) {
            continue;
        }
        char* var8 = (char*)func_ov000_02161318(arg0, var4);
        if (var8) {
            signed char var9 = *(signed char*)(var8 + 0x18);
            *(var8 + var9 + 0x10) = 0x64;
        }
    }
}
