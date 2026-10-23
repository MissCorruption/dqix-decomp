#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x7100
#define REGION_OFFSET_1 0xb2
#define REGION_OFFSET_2 0xaa
#else
#define REGION_OFFSET_0 0x6f00
#define REGION_OFFSET_1 0xc2
#define REGION_OFFSET_2 0xba
#endif


// USA: func_ov000_021634c8
extern "C" ARM void func_ov000_021634c8(char* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < *(short*)(arg0 + REGION_OFFSET_0 + REGION_OFFSET_1); var0++) {
        if (arg1 == *(short*)(arg0 + var0 * 2 + REGION_OFFSET_0 + REGION_OFFSET_2)) break;
    }
    if (var0 != *(short*)(arg0 + REGION_OFFSET_0 + REGION_OFFSET_1)) return;
    {
        short* var1 = (short*)(arg0 + REGION_OFFSET_0 + REGION_OFFSET_1);
        int var2 = *var1;
        short* var3 = (short*)(arg0 + *(short*)(arg0 + REGION_OFFSET_0 + REGION_OFFSET_1) * 2 + REGION_OFFSET_0 + REGION_OFFSET_2);
        *var1 = var2 + 1;
        *var3 = (short)arg1;
    }
}
