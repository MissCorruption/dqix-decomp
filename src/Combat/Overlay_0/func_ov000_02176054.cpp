#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x47e
#else
#define REGION_OFFSET_0 0x43e
#endif


extern "C" void* func_ov000_02161318(void* arg0, int arg1);

// USA: func_ov000_02176054
extern "C" ARM void func_ov000_02176054(void* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        void* var1 = func_ov000_02161318(arg0, var0);
        if (var1 != 0) {
            *((char*)var1 + REGION_OFFSET_0) = 0;
        }
    }
}
