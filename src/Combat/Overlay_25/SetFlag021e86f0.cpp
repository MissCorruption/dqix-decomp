#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { kWorldFlagOffset = 0x1da };
#else
enum { kWorldFlagOffset = 0x48a };
#endif

// USA: func_ov025_021e86f0
ARM int SetFlag021e86f0(void) {
    char* p = (char*)GetGameResources() + 0x4000;
    p[kWorldFlagOffset] = 1;
    return 1;
}
