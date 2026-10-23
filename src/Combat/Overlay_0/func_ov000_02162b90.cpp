#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x7e4
#define REGION_OFFSET_1 0x31c
#define REGION_OFFSET_2 0x3400
#else
#define REGION_OFFSET_0 0x5f4
#define REGION_OFFSET_1 0x760
#define REGION_OFFSET_2 0x3000
#endif

extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" int func_ov000_021761ec(char* arg0, int arg1);

// USA: func_ov000_02162b90
extern "C" ARM void func_ov000_02162b90(void* arg0, int arg1, int arg2, int arg3, int arg4, signed char arg5, signed char arg6) {
    int var0 = *(int*)((char*)arg0 + 0x5000 + REGION_OFFSET_0);
    if (!(var0 & 0x10000)) {
        return;
    }
    if (var0 & 0x800000) {
        return;
    }
    int var1 = -1;
    int var2 = 0;
    while (var2 < 12) {
        int var3 = func_ov000_021761ec((char*)arg0 + REGION_OFFSET_1 + REGION_OFFSET_2, var2);
        if (arg4 == var3) {
            var1 = var2;
            break;
        }
        var2++;
    }
    void* var4 = func_ov000_02161318((char*)arg0 + REGION_OFFSET_1 + REGION_OFFSET_2, arg5);
    if (var4 != NULL) {
        *(short*)((char*)var4 + 0x26) = (short)arg2;
        *(unsigned char*)((char*)var4 + 0x1d) = (unsigned char)var1;
        *(unsigned char*)((char*)var4 + 0x2e) = (unsigned char)arg6;
    }
}
