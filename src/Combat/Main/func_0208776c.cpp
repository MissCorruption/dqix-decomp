#include <globaldefs.h>

// USA: func_0208776c
extern "C" ARM int func_0208776c(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (*(int*)(var0 + 0x14) & 1) {
        return 0;
    }
    if (arg1 == 0) {
        int var1 = (*(int*)(var0 + 0x58) << 29) >> 29;
        if (var1 < 2) {
            return 1;
        }
    } else {
        int var2 = (*(int*)(var0 + 0x58) << 29) >> 29;
        if (var2 > -2) {
            return 1;
        }
    }
    return 0;
}
