#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_021632a8
extern "C" ARM int func_ov001_021632a8(void* arg0) {
    GameResources* var0 = GetGameResources();
    int var1 = func_ov017_021d60f4(arg0);
    if (var1 != 0) {
        SetFlags00(var0, 0x4000);
    } else {
        ClearFlags00(var0, 0x4000);
    }
    return 1;
}
