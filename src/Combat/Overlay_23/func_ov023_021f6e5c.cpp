#include <globaldefs.h>

// USA: func_ov023_021f6e5c
extern "C" ARM int func_ov023_021f6e5c(void* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 0x10; var0++) {
        if ((*(unsigned short*)((char*)arg0 + arg1 * 2 + 0x2c) & (1 << var0)) == 0) {
            return var0;
        }
    }
    return -1;
}
