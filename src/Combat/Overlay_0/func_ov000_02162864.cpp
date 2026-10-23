#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x218
#else
#define REGION_OFFSET_0 0x29c
#endif


static inline void* inline_ov000_02162864(void* arg0, int arg1) {
    void* var0 = *(void**)((char*)arg0 + REGION_OFFSET_0);
    return (char*)var0 + 0x21c + 0x8000 + arg1 * 0x28;
}

// USA: func_ov000_02162864
extern "C" ARM int func_ov000_02162864(void* arg0, int arg1) {
    void* var0 = *(void**)((char*)arg0 + REGION_OFFSET_0);
    int var1 = *(int*)((char*)var0 + 0x8000 + 0xe24);
    int var2;
    for (var2 = 0; var2 < var1; var2++) {
        void* var3 = inline_ov000_02162864(arg0, var2);
        if (var3 == 0) continue;
        void* var4 = *(void**)((char*)var3 + 0x10);
        while (var4) {
            if (*(unsigned short*)((char*)var4 + 0x20) == arg1) return var2;
            var4 = *(void**)((char*)var4 + 0x30);
        }
    }
    return -1;
}
