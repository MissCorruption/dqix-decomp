#include <globaldefs.h>

// USA: func_0208810c
extern "C" ARM int func_0208810c(unsigned char* arg0) {
    int var0 = *(int*)(arg0 + 0x14);
    if (var0 & 1) {
        return 0;
    }
    if (var0 & 0x1000000) {
        return 0;
    }
    if (var0 & 0x10) {
        return 0;
    }
    if (var0 & 0x80000) {
        return 0;
    }
    return (var0 & 0x8) == 0;
}
