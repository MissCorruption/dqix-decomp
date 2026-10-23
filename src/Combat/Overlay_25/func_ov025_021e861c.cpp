#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov025_021e861c_1160 = 0x1d8 };
#else
enum { Enum_ov025_021e861c_1160 = 0x488 };
#endif

// USA: func_ov025_021e861c
extern "C" ARM int func_ov025_021e861c(void) {
    *(unsigned char*)((char*)GetGameResources() + 0x4000 + Enum_ov025_021e861c_1160) = 0;
    return 1;
}
