#include <globaldefs.h>

// USA: func_ov000_0218158c
extern "C" ARM int func_ov000_0218158c(void* arg0, int arg1) {
    int var0 = *(int*)((char*)arg0 + 0x68);
    int var1 = 0;
    int var2;
    for (var2 = 0; var2 < 0xc; var2++) {
        if (var0 & (1 << var2)) {
            if (var1 == arg1) return var2;
            var1++;
        }
    }
    return 0;
}
