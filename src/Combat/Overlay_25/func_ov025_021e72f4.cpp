#include <globaldefs.h>
#include "Resource/Brightness.h"

// USA: func_ov025_021e72f4
extern "C" ARM int func_ov025_021e72f4(unsigned char* arg0) {
    GameResources* var0 = GetGameResources();
    if (arg0[8]) {
        ClearFlags04(var0, 0x2000);
    } else {
        SetFlags04(var0, 0x2000);
    }
    return 1;
}
