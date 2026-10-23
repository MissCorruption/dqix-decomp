#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x485
#else
#define REGION_OFFSET_0 0x445
#endif


extern "C" void* func_ov000_02161318(void* arg0, int arg1);

// USA: func_ov000_021816e8
extern "C" ARM void func_ov000_021816e8(void* arg0, int arg1) {
    void* var0;
    int var1;
    if (arg1 < 0) {
        for (var1 = 0; var1 < 4; var1++) {
            var0 = func_ov000_02161318(arg0, var1);
            if (var0 != 0) *((char*)var0 + REGION_OFFSET_0) = 0;
        }
    } else {
        var0 = func_ov000_02161318(arg0, arg1);
        if (var0 != 0) *((char*)var0 + REGION_OFFSET_0) = 0;
    }
}
