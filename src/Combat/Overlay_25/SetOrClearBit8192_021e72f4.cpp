#include <globaldefs.h>
#include "Resource/Brightness.h"

// USA: func_ov025_021e72f4
ARM int SetOrClearBit8192_021e72f4(unsigned char* param) {
    GameResources* obj = GetGameResources();
    if (param[8]) {
        ClearFlags04(obj, 0x2000);
    } else {
        SetFlags04(obj, 0x2000);
    }
    return 1;
}
