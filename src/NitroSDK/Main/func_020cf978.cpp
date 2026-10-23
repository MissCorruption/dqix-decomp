#include <globaldefs.h>

// USA: func_020cf978
extern "C" ARM void* func_020cf978(unsigned char* arg0) {
    int var0 = *(int*)arg0;
    int var1 = *(int*)(arg0 + 4);
    return *(unsigned char**)(arg0 + 8) + (var0 * 0x3c + var1) * 0x3c;
}
