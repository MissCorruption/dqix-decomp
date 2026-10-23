#include <globaldefs.h>

#if defined(jpn)
#define REGION_BASE1 (0x194 + 0x1c00)
#define REGION_COUNT1 8
#define REGION_STRIDE1 0x38
#else
#define REGION_BASE1 (0x30c + 0x1800)
#define REGION_COUNT1 3
#define REGION_STRIDE1 0x18
#endif

extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" void func_0203c198(char* arg0);

// USA: func_ov000_02181608
extern "C" ARM void func_ov000_02181608(void* arg0) {
    for (int var0 = 0; var0 < 4; var0++) {
        char* var1 = (char*)func_ov000_02161318(arg0, var0);
        if (var1) {
            func_0203c198(var1 + 0x50);
        }
    }
    char* var2 = (char*)arg0 + REGION_BASE1;
    for (int var3 = 0; var3 < REGION_COUNT1; var3++) {
        func_0203c198(var2 + var3 * REGION_STRIDE1);
    }
#if !defined(jpn)
    char* var4 = (char*)arg0 + 0x5c + 0x1c00;
    for (int var5 = 0; var5 < 8; var5++) {
        func_0203c198(var4 + var5 * 0x18);
    }
#endif
}
