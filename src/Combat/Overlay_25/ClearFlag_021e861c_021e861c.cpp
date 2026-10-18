#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { kWorldFlagOffset = 0x1d8 };
#else
enum { kWorldFlagOffset = 0x488 };
#endif

// USA: func_ov025_021e861c
ARM int ClearFlag_021e861c_021e861c(void) {
    *(unsigned char*)((char*)GetGameResources() + 0x4000 + kWorldFlagOffset) = 0;
    return 1;
}
