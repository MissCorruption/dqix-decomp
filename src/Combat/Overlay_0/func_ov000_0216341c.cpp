#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x7014
#define REGION_OFFSET_1 0x701a
#define REGION_OFFSET_2 0x701b
#define REGION_OFFSET_3 0x701c
#else
#define REGION_OFFSET_0 0x6e24
#define REGION_OFFSET_1 0x6e2a
#define REGION_OFFSET_2 0x6e2b
#define REGION_OFFSET_3 0x6e2c
#endif


// USA: func_ov000_0216341c
extern "C" ARM void func_ov000_0216341c(void* arg0, unsigned char arg1, unsigned char arg2, short arg3) {
    *(int*)((char*)arg0 + REGION_OFFSET_0) = 1;
    *((unsigned char*)arg0 + REGION_OFFSET_1) = arg1;
    *((unsigned char*)arg0 + REGION_OFFSET_2) = arg2;
    *(short*)((char*)arg0 + REGION_OFFSET_3) = arg3;
}
