#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_ov002_0215a878
extern "C" ARM void func_ov002_0215a878(char* arg0) {
    short var0 = *(short*)(arg0 + RG(0x1b00 + 0xe0, 0x1a00 + 0xa8));
    *(unsigned int*)(arg0 + 0x2000 + RG(0x540, 0x368)) = var0;
    short var1 = *(short*)(arg0 + RG(0x1b00 + 0xfe, 0x1a00 + 0xc6));
    *(unsigned int*)(arg0 + 0x2000 + RG(0x544, 0x36c)) = var1;
    *(unsigned char*)(arg0 + 0x2000 + RG(0x53c, 0x364)) = 1;
    char* var2 = (char*)GetGameResources();
    char* var3 = *(char**)(var2 + 0x3000 + RG(0x71c, 0x50c));
    *(unsigned char*)(var3 + 0x24) = *(unsigned char*)(arg0 + 0x2000 + RG(0x53c, 0x364));
    *(unsigned int*)(var3 + 0x28) = *(unsigned int*)(arg0 + 0x2000 + RG(0x540, 0x368));
    *(unsigned int*)(var3 + 0x2c) = *(unsigned int*)(arg0 + 0x2000 + RG(0x544, 0x36c));
}
