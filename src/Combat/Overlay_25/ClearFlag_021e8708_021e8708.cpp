#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { kWorldFlagOffset = 0x1da };
#else
enum { kWorldFlagOffset = 0x48a };
#endif

// USA: func_ov025_021e8708
ARM int ClearFlag_021e8708_021e8708(void) {
    *(unsigned char*)((char*)GetGameResources() + 0x4000 + kWorldFlagOffset) = 0;
    return 1;
}
