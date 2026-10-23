#include <globaldefs.h>

// USA: func_02068928
extern "C" ARM int func_02068928(int arg0, unsigned char* arg1) {
    unsigned int* var0 = *(unsigned int**)(arg1 + 0x0);
    if (var0 != NULL) {
        return (var0[2] << 4 >> 31) == 0;
    }
    return 0;
}
