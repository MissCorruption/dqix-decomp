#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x5ab4
#define REGION_OFFSET_1 0x5abc
#define REGION_OFFSET_2 0x5ab8
#define REGION_OFFSET_3 0x5ab9
#define REGION_OFFSET_4 0x5aba
#define REGION_OFFSET_5 0x57e4
#else
#define REGION_OFFSET_0 0x58c4
#define REGION_OFFSET_1 0x58cc
#define REGION_OFFSET_2 0x58c8
#define REGION_OFFSET_3 0x58c9
#define REGION_OFFSET_4 0x58ca
#define REGION_OFFSET_5 0x55f4
#endif


// USA: func_ov000_02163344
extern "C" ARM void func_ov000_02163344(void* arg0, int arg1, short arg2, unsigned char arg3, unsigned short arg4, unsigned short arg5) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + REGION_OFFSET_0) = arg1;
    *(short*)(var0 + REGION_OFFSET_1) = arg2;
    var0[REGION_OFFSET_2] = arg3;
    var0[REGION_OFFSET_3] = (unsigned char)arg4;
    *(unsigned short*)(var0 + REGION_OFFSET_4) = arg5;
    *(unsigned int*)(var0 + REGION_OFFSET_5) |= 0x2000;
}
