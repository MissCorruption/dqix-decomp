#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x1f00
#define REGION_FIELD_1 0xaa
#else
#define REGION_FIELD_0 0x1d00
#define REGION_FIELD_1 0x72
#endif


// USA: func_ov023_021f1818
extern "C" ARM void func_ov023_021f1818(char* arg0, int arg1) {
    arg0 += REGION_FIELD_0;
    volatile unsigned int* var0 = (volatile unsigned int*)0x4001000;
    if (arg1) {
        *(unsigned short*)(arg0 + REGION_FIELD_1) |= 0x80;
        *var0 = (*var0 & ~0x1f00) | 0x200;
    } else {
        *(unsigned short*)(arg0 + REGION_FIELD_1) &= ~0x80;
        *var0 = (*var0 & ~0x1f00) | 0x1700;
    }
}
