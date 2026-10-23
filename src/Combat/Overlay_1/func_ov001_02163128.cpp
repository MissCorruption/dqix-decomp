#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_02163128
extern "C" ARM int func_ov001_02163128(void* arg0) {
    GameResources* var0 = GetGameResources();
    int var1 = func_ov017_021d60f4(arg0);
    if (var1 != 0) {
        ClearFlags04(var0, 0x800);
    } else {
        SetFlags04(var0, 0x800);
    }
    return 1;
}
