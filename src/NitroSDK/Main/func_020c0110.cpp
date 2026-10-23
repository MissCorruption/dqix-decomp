#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void* func_020bd8ac(unsigned int);

// USA: func_020c0110
extern "C" ARM int func_020c0110(char* arg0, void* arg1) {
    void* var0 = func_020bd8ac((unsigned int)arg1);
    *(void**)(arg0 + 0xa4) = var0;
    VectorizedInvertedMemcpy(var0, arg0 + 0xa8, 0x40);
    return 1;
}
