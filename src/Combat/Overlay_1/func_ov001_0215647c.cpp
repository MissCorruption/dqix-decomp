#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov001_0215647c_252 = 0xf8, Enum_ov001_0215647c_17122 = 0x40c2 };
#else
enum { Enum_ov001_0215647c_252 = 0xfc, Enum_ov001_0215647c_17122 = 0x42e2 };
#endif

// USA: func_ov001_0215647c
extern "C" ARM int func_ov001_0215647c(void* arg0) {
    if (*((unsigned char*)arg0 + Enum_ov001_0215647c_252) != 0) return 0xa;
    if (*((unsigned char*)GetGameResources() + Enum_ov001_0215647c_17122) != 0) return 0xa;
    return *(unsigned short*)((char*)arg0 + 0xa);
}
