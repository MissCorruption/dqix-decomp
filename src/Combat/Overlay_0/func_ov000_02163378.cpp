#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x948
#define REGION_OFFSET_1 0x95c
#define REGION_OFFSET_2 0x7e4
#else
#define REGION_OFFSET_0 0x758
#define REGION_OFFSET_1 0x76c
#define REGION_OFFSET_2 0x5f4
#endif


// USA: func_ov000_02163378
extern "C" ARM void func_ov000_02163378(void* arg0, int* arg1, unsigned char arg2) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        *(int*)((char*)arg0 + var0 * 4 + 0x5000 + REGION_OFFSET_0) = arg1[var0];
    }
    *((unsigned char*)arg0 + 0x5000 + REGION_OFFSET_1) = arg2;
    *(int*)((char*)arg0 + 0x5000 + REGION_OFFSET_2) |= 0x4000;
}
