#include <globaldefs.h>

extern "C" void* func_ov000_02161318(void* arg0, int arg1);

// USA: func_ov000_0218173c
extern "C" ARM void func_ov000_0218173c(void* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        char* var1 = (char*)func_ov000_02161318(arg0, var0);
        if (var1 != 0) {
            signed char var2 = *(signed char*)(var1 + 0x18);
            *(unsigned char*)(var1 + var2 + 0x10) = 0x67;
        }
    }
}
