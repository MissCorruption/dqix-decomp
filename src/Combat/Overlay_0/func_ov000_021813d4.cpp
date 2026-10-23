#include <globaldefs.h>

extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" void func_ov000_02174b14(void* arg0);

// USA: func_ov000_021813d4
extern "C" ARM void func_ov000_021813d4(void* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        void* var1 = func_ov000_02161318(arg0, var0);
        if (var1) {
            signed char var2 = *(signed char*)((char*)var1 + 0x18);
            *(unsigned char*)((char*)var1 + var2 + 0x10) = 0x64;
            unsigned char var3 = *(unsigned char*)((char*)var1 + 0x24);
            var3 &= ~0x4;
            *(unsigned char*)((char*)var1 + 0x24) = var3;
            func_ov000_02174b14(arg0);
        }
    }
}
