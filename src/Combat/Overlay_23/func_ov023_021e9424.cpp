#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov023_021e8f28(int arg0);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov023_021e9424
extern "C" ARM int func_ov023_021e9424(char* arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov023_021e9424_336=0x144};
#else
 enum {Enum_ov023_021e9424_336=0x150};
#endif
    GameState::GetInstance();
    int var0 = func_ov017_021d60f4(arg0);
    arg0 += 8;
    GameObject* var1 = func_ov023_021e8f28(var0);
    if (!var1) return 0;

    int var2 = 1;
    int var3;
    for (var3 = 0; var3 < arg1 - 2; var3 += 2) {
        int var4 = func_ov017_021d60f4(arg0);
        char* var5 = arg0 + 8;
        arg0 += 0x10;
        int var6 = func_ov017_021d60f4(var5);
        int var7 = *(int*)((char*)var1 + Enum_ov023_021e9424_336) + 0x194;
        unsigned char var8 = (unsigned char)var4;
        int var9 = var7 + (var8 << 5);
        short var10 = *(short*)(var9 + 0x18);
        if (var10 != var6) var2 = 0;
    }

    if (var2 != 0) {
        func_ov017_021d6134(arg0, 1);
    } else {
        func_ov017_021d6134(arg0, 0);
    }
    return 1;
}
