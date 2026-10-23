#include <globaldefs.h>

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_ov002_02155024
extern "C" ARM void func_ov002_02155024(unsigned char* arg0) {
    if (arg0[0x2000 + RG(0x48f, 0x2bf)] == 0 && arg0[0x2000 + RG(0x48e, 0x2be)] == 0) {
        arg0[0x2000 + RG(0x48e, 0x2be)] = 1;
        arg0 = arg0 + 0x1000;
        *(int*)(arg0 + RG(0xbb8, 0xa80)) = RG(0x2a, 0x2d);
        *(int*)(arg0 + RG(0xbc0, 0xa88)) = 0;
    }
}
