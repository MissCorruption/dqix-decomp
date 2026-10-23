#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x485
#else
#define REGION_OFFSET_0 0x445
#endif


// USA: func_ov000_0217f5d0
extern "C" ARM void func_ov000_0217f5d0(void* arg0) {
    *(unsigned char*)((char*)arg0 + REGION_OFFSET_0) = 0;
}
