#include <globaldefs.h>
#include "NitroSDK/NSBXX/RenderCommands_Common.h"

extern "C" void func_020ca528(void* block, void* dst);

// USA: func_020c552c
ARM int func_020c552c(void* arg0) {
    unsigned int* var0 = (unsigned int*)0x4000600;
    if (*var0 & 0x8000000) {
        return -1;
    }
    func_020ca528((unsigned char*)var0 + 0x80, arg0);
    return 0;
}
