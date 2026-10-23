#include <globaldefs.h>
#include "std_library_functions.h"

void CleanInvalidateCacheRange(const void* addr, unsigned int size);

// USA: func_0204a8f4
extern "C" ARM void func_0204a8f4(char* arg0, char* arg1) {
    unsigned int var0;
    unsigned int var1;
    memcpy(&var1, arg1, 4);
    memcpy(arg0 + 4, arg1 + 4, 2);
    memcpy(arg0 + 6, arg1 + 6, 2);
    memcpy(arg0 + 8, arg1 + 8, 2);
    memcpy(arg0 + 0xa, arg1 + 0xa, 1);
    memcpy(arg0 + 0xb, arg1 + 0xb, 1);
    memcpy(&var0, arg1 + 0xc, 4);
    CleanInvalidateCacheRange(arg1 + 0x10, var0);
}
