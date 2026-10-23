#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x88
#else
#define REGION_OFFSET_0 0x68
#endif

extern "C" char* func_ov000_02161318(void* arg0, int arg1);

// USA: func_ov000_02174e1c
extern "C" ARM char* func_ov000_02174e1c(void* arg0, int arg1) {
    char* var0 = func_ov000_02161318(arg0, arg1);
    return var0 ? var0 + REGION_OFFSET_0 : 0;
}
