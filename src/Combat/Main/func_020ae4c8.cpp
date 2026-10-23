#include <globaldefs.h>
#include "Resource/GameResources.h"

// USA: func_020ae4c8
extern "C" ARM bool func_020ae4c8() {
    int var0 = (int)GetGameResources();
#if defined(jpn)
    int var1 = *(int*)(var0 + 0x3524);
#else
    int var1 = *(int*)(var0 + 0x3734);
#endif
    return *(unsigned short*)(var1 + 0xa) == 4;
}
