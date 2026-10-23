#include <globaldefs.h>

extern "C" void func_ov023_021dfb4c(void*);

#if defined(jpn)
#define MODE_OFFSET 0x6f9
#define FLAGS_OFFSET 0x6f0
#else
#define MODE_OFFSET 0x77d
#define FLAGS_OFFSET 0x774
#endif

// USA: func_ov023_021dfad8
extern "C" ARM void func_ov023_021dfad8(char* arg0) {
    func_ov023_021dfb4c(arg0);
    if (*(signed char*)(arg0 + MODE_OFFSET) != 2) return;
    unsigned short var0 = *(unsigned short*)(arg0 + FLAGS_OFFSET);
    volatile unsigned int* var1 = (volatile unsigned int*)0x4000000;
    if (var0 & 0x800) {
        unsigned int var2 = (*var1 & 0x1f00) >> 8;
        *var1 = (*var1 & ~0x1f00) | ((var2 | 1) << 8);
    } else {
        unsigned int var3 = (*var1 & 0x1f00) >> 8;
        *var1 = (*var1 & ~0x1f00) | ((var3 & ~1) << 8);
    }
}
