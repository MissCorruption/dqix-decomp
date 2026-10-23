#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x488
#else
#define REGION_OFFSET_0 0x448
#endif


extern "C" void func_ov000_02170db0(void* arg0);

// USA: func_ov000_0217457c
extern "C" ARM void func_ov000_0217457c(void* arg0, int arg1) {
    if (arg1 < 0) {
        int var0;
        for (var0 = 0; var0 < 4; var0++) {
            signed char var1 = *((signed char*)arg0 + var0 + 0x6c);
            void* var2 = (char*)arg0 + 0x158 + 0x800 + var1 * REGION_OFFSET_0;
            if (*(int*)((char*)var2 + 0x4c) >= 0) {
                func_ov000_02170db0(var2);
            }
        }
        return;
    }
    int var3;
    for (var3 = 0; var3 < 4; var3++) {
        signed char var4 = *((signed char*)arg0 + var3 + 0x6c);
        void* var5 = (char*)arg0 + 0x158 + 0x800 + var4 * REGION_OFFSET_0;
        if (arg1 == *(int*)((char*)var5 + 0x4c)) {
            func_ov000_02170db0(var5);
            return;
        }
    }
}
