#include <globaldefs.h>

extern "C" void* func_ov000_02161318(void* arg0, int arg1);

// USA: func_ov000_02174fc0
extern "C" ARM void func_ov000_02174fc0(void* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        signed char var1 = *((char*)arg0 + var0 + 0x6c);
        void* var2 = func_ov000_02161318(arg0, var1);
        if (var2 != NULL) {
            signed char var3 = *((char*)var2 + 0x18);
            int var4 = 0;
            int var5 = *(int*)((char*)var2 + 0x48);
            if (*((char*)var2 + var3 + 0x10) == 0x65) var4 = -8;
            *(int*)((char*)var2 + 0x44) = var4;
            *(int*)((char*)var2 + 0x48) = var5;
        }
    }
}
