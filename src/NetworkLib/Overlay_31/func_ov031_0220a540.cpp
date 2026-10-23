#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" ARM void func_ov031_0220b8a0(unsigned int* arg0);
extern "C" ARM void func_ov031_0220afe0(void* arg0);
extern "C" int func_ov031_022032a4(void* arg0);
extern "C" int func_ov031_0220a474(void* arg0);

// USA: func_ov031_0220a540
extern "C" ARM int func_ov031_0220a540(void* arg0) {
    unsigned char var0 = *(unsigned char*)((char*)arg0 + 0x8);
    void* var1 = *(void**)((char*)arg0 + 0xc);
    if (var0 != 4) {
        if (func_ov031_022032a4(arg0) != 0) return 1;
    }
    *(unsigned char*)((char*)var1 + 0x455) = 0;
    *(int*)((char*)var1 + 0x1d4) = 0;
    *(unsigned char*)((char*)var1 + 0x454) = 0;
    func_ov031_0220b8a0((unsigned int*)((char*)var1 + 0x2ec));
    func_ov031_0220afe0((char*)var1 + 0x3a4);
    return func_ov031_0220a474(arg0);
}
