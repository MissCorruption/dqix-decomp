#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov002_0215a920(void*);

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_ov002_0215a8cc
extern "C" ARM int func_ov002_0215a8cc(char* arg0) {
    if (*(unsigned char*)(arg0 + 0x2000 + RG(0x53c, 0x364)) == 0) return 0;
    unsigned int var0 = *(unsigned int*)(arg0 + 0x2000 + RG(0x540, 0x368));
    *(short*)(arg0 + RG(0x1b00 + 0xe0, 0x1a00 + 0xa8)) = (short)var0;
    void* var1 = (void*)(arg0 + RG(0x13c + 0x2400, 0x364 + 0x2000));
    unsigned int var2 = *(unsigned int*)(arg0 + 0x2000 + RG(0x544, 0x36c));
    *(short*)(arg0 + RG(0x1b00 + 0xfe, 0x1a00 + 0xc6)) = (short)var2;
    func_ov002_0215a920(var1);
    char* var3 = (char*)GetGameResources();
    void* var4 = *(void**)(var3 + 0x3000 + RG(0x71c, 0x50c));
    func_ov002_0215a920((char*)var4 + 0x24);
    return 1;
}
