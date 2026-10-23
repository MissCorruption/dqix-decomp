#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

// USA: func_ov003_0215873c
extern "C" ARM void func_ov003_0215873c(void* arg0) {
    *(int*)((char*)arg0 + R(0x208,0x20c)) = -1;
    *(int*)((char*)arg0 + R(0x328,0x32c)) = 0;
    *((unsigned char*)arg0 + R(0x204,0x208)) = 0;
}
