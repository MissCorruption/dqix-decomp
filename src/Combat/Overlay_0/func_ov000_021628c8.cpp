#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x218
#else
#define REGION_OFFSET_0 0x29c
#endif


static inline void* inline_ov000_021628c8(void* arg0, int arg1) {
    void* var0 = *(void**)((char*)arg0 + REGION_OFFSET_0);
    return (char*)var0 + 0x21c + 0x8000 + arg1 * 0x28;
}

// USA: func_ov000_021628c8
extern "C" ARM int func_ov000_021628c8(void* arg0, int arg1, int* arg2) {
    void* var0 = inline_ov000_021628c8(arg0, arg1);
    void* var1 = *(void**)((char*)var0 + 0x10);
    int var2 = 0;
    while (var1) {
        arg2[var2++] = *(unsigned short*)((char*)var1 + 0x20);
        var1 = *(void**)((char*)var1 + 0x30);
    }
    return var2;
}
