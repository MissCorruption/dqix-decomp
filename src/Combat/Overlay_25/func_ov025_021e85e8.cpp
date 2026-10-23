#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov025_021e85e8_17544 = 0x41d8 };
#else
enum { Enum_ov025_021e85e8_17544 = 0x4488 };
#endif

// USA: func_ov025_021e85e8
extern "C" ARM int func_ov025_021e85e8(unsigned char* arg0) {
    unsigned char* var0 = (unsigned char*)GetGameResources();
    var0[Enum_ov025_021e85e8_17544] = 1;
    unsigned char var1 = arg0[8];
    unsigned char var2 = 1;
    if (var1 == 0) {
        var2 = 0;
    }
    var0[Enum_ov025_021e85e8_17544] = var2;
    return 1;
}
