#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02161318(void* arg0, int arg1);

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_ov000_021719f8(int* arg0);

// USA: func_ov000_021756b8
extern "C" ARM void func_ov000_021756b8(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02010828(var0);
    unsigned char var2 = var1[0xf7c];
    unsigned char var3;
    for (var3 = 0; var3 < var2; var3++) {
        signed char var4 = *((signed char*)var1 + var3 + 0xf00 + 0x78);
        GameObject* var5 = var0->GetPartyMemberByIndex(var4);
        if (var5 == 0) {
            continue;
        }
        int var6 = func_02053c6c((unsigned char*)var5);
#if defined(jpn)
        enum { Enum_ov000_021756b8_2380 = 0x8b4 };
#else
        enum { Enum_ov000_021756b8_2380 = 0x94c };
#endif
        int var7 = *(int*)(var6 + Enum_ov000_021756b8_2380);
        signed char var8 = (signed char)var7;
        if (var8 == 5) {
            continue;
        }
        void* var9 = func_ov000_02161318(arg0, var4);
        if (var9 == 0) {
            continue;
        }
        if (func_ov000_021719f8((int*)var9) == 0) {
            signed char var10 = *((signed char*)var9 + 0x18);
            unsigned char* var11 = (unsigned char*)var9 + var10;
            var11[0x10] = 0xd;
        }
    }
}
