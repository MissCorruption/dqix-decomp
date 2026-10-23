#include <globaldefs.h>

// USA: func_020881c4
extern "C" ARM int func_020881c4(unsigned char* arg0) {
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
