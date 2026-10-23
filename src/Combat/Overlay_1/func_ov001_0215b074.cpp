#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" GameResources* func_0200fb8c(int* arg0);

// USA: func_ov001_0215b074
extern "C" ARM int func_ov001_0215b074(int arg0, char* arg1, int arg2) {
    int var0;
    int var1;
    int var2 = func_ov017_021d60f4(arg1);
    var0 = -16;
    if (arg2 >= 2) {
        var0 = func_ov017_021d60f4(arg1 + 8);
    }
    GameResources* var3 = func_0200fb8c((int*)GameState::GetInstance());
    if (var3 == NULL) return 0;
    var1 = 0;
    if (arg0 == 0) {
        SetBrightness(var3, 0, var2);
    } else if (arg0 == 1) {
        SetBrightness(var3, var0, var2);
    } else if (arg0 == 2) {
        SetSubBrightness(var3, 0, var2);
    } else if (arg0 == 3) {
        SetSubBrightness(var3, var0, var2);
    } else if (arg0 == 4) {
        SetMainBrightness(var3, 0, var2);
    } else if (arg0 == 5) {
        SetMainBrightness(var3, var0, var2);
    } else if (arg0 == 6) {
        SetAndLockBrightness(var3, 0, var2);
    } else if (arg0 == 7) {
        SetAndLockBrightness(var3, var0, var2);
    } else if (arg0 == 8) {
        SetAndLockSubBrightness(var3, 0, var2);
    } else if (arg0 == 9) {
        SetAndLockSubBrightness(var3, var0, var2);
    } else if (arg0 == 10) {
        SetAndLockMainBrightness(var3, 0, var2);
    } else if (arg0 == 11) {
        SetAndLockMainBrightness(var3, var0, var2);
    } else if (arg0 == 12) {
        UnlockAndSetBrightness(var3, 0, var2);
    } else if (arg0 == 13) {
        UnlockAndSetBrightness(var3, var0, var2);
    } else if (arg0 == 14) {
        UnlockAndSetSubBrightness(var3, 0, var2);
    } else if (arg0 == 15) {
        UnlockAndSetSubBrightness(var3, var0, var2);
    } else if (arg0 == 16) {
        UnlockAndSetMainBrightness(var3, 0, var2);
    } else if (arg0 == 17) {
        UnlockAndSetMainBrightness(var3, var0, var2);
    }
    int var4 = (arg0 % 2 == 1);
    if (arg0 % 6 < 4 && var4) {
        var1 = 1;
    }
    char* var5 = (char*)GetGameResources()->unknown_ptr_array_371c[6];
    if (var1) {
        if (*(unsigned short*)(var5 + 0xa) <= 3) {
            #if defined(jpn)
            var5[0xfe] = 1;
#else
            var5[0x102] = 1;
#endif
        }
    }
    return 1;
}
