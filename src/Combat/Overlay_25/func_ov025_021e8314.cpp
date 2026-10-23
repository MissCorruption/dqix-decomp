#include <globaldefs.h>
#include "Resource/Brightness.h"

// USA: func_ov025_021e8314
extern "C" ARM int func_ov025_021e8314(unsigned char* arg0) {
    GameResources* var0 = GetGameResources();
    if (arg0[8]) {
        ClearFlags04(var0, 0x400);
    } else {
        SetFlags04(var0, 0x400);
    }
    return 1;
}
