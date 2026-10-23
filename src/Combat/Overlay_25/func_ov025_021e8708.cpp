#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov025_021e8708_1162 = 0x1da };
#else
enum { Enum_ov025_021e8708_1162 = 0x48a };
#endif

// USA: func_ov025_021e8708
extern "C" ARM int func_ov025_021e8708(void) {
    *(unsigned char*)((char*)GetGameResources() + 0x4000 + Enum_ov025_021e8708_1162) = 0;
    return 1;
}
