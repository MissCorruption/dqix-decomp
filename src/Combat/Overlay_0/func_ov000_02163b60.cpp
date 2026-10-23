#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x701e
#define REGION_OFFSET_1 0x7020
#else
#define REGION_OFFSET_0 0x6e2e
#define REGION_OFFSET_1 0x6e30
#endif

// USA: func_ov000_02163b60
extern "C" ARM void func_ov000_02163b60(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    var0[REGION_OFFSET_0] = 0;
    for (int var1 = 0; var1 < 3; var1++) *(unsigned short*)(var0 + REGION_OFFSET_1 + var1 * 2) = 0;
}
