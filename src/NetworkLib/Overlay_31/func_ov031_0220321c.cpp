#include <globaldefs.h>

extern void* data_02111304;

// USA: func_ov031_0220321c
extern "C" ARM void func_ov031_0220321c(void) {
    void* var0 = *((void**)&data_02111304 + 1);
    void* var1 = *(void**)((char*)var0 + 0xa4);
    if (var1 == NULL) return;
    *(void**)((char*)var1 + 0x0) = var0;
    *(unsigned char*)((char*)var1 + 0x8) = 0;
    *(int*)((char*)var1 + 0x44) = 0;
    *(int*)((char*)var1 + 0x60) = 0;
    *(int*)((char*)var1 + 0x38) = 0;
}
