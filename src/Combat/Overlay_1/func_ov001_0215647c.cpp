#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { kOwnerFlag = 0xf8, kGlobalFlag = 0x40c2 };
#else
enum { kOwnerFlag = 0xfc, kGlobalFlag = 0x42e2 };
#endif

// USA: func_ov001_0215647c
extern "C" ARM int func_ov001_0215647c(void* ctx) {
    if (*((unsigned char*)ctx + kOwnerFlag) != 0) return 0xa;
    if (*((unsigned char*)GetGameResources() + kGlobalFlag) != 0) return 0xa;
    return *(unsigned short*)((char*)ctx + 0xa);
}
