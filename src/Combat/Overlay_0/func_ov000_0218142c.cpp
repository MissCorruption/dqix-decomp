#include <globaldefs.h>

extern "C" void* func_ov000_02161318(void* arg0, int arg1);

// USA: func_ov000_0218142c
extern "C" ARM void func_ov000_0218142c(void* arg0, int arg1) {
    if (arg1 < 0) {
        for (int var0 = 0; var0 < 4; var0++) {
            char* var1 = (char*)func_ov000_02161318(arg0, var0);
            if (var1) {
                signed char var2 = *(signed char*)(var1 + 0x18);
                *(var1 + var2 + 0x10) = 0x66;
            }
        }
    } else {
        for (int var3 = 0; var3 < 4; var3++) {
            char* var4 = (char*)func_ov000_02161318(arg0, var3);
            if (var4) {
                if (arg1 == *(int*)(var4 + 0x4c)) {
                    signed char var5 = *(signed char*)(var4 + 0x18);
                    *(var4 + var5 + 0x10) = 0x66;
                    return;
                }
            }
        }
    }
}
