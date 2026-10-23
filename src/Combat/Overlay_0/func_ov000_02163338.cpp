#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xb40
#else
#define REGION_OFFSET_0 0x950
#endif


// USA: func_ov000_02163338
extern "C" ARM void func_ov000_02163338(unsigned char* arg0, unsigned char arg1) {
    *(arg0 + 0x5000 + REGION_OFFSET_0) = arg1;
}
