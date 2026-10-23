#include <globaldefs.h>
#include "Resource/Brightness.h"

// USA: func_ov025_021e7fdc
extern "C" ARM int func_ov025_021e7fdc(unsigned char* arg0) {
    unsigned char var0 = arg0[8];
    GameResources* var1 = GetGameResources();
    if (var0) {
        ClearFlags04(var1, 0x100000);
    } else {
        SetFlags04(var1, 0x100000);
    }
    return 1;
}
