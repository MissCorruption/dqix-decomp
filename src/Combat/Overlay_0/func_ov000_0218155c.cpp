#include <globaldefs.h>

// USA: func_ov000_0218155c
extern "C" ARM int func_ov000_0218155c(void* arg0) {
    int var0 = 0;
    for (unsigned int var1 = 0; var1 < 12; var1++) {
        if (*(unsigned int*)((char*)arg0 + 0x68) & (1 << var1)) var0++;
    }
    return var0;
}
