#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" unsigned char* func_0205ec34(void);

// USA: func_020107a8
extern "C" ARM void func_020107a8(char* arg0, int arg1) {
#if defined(jpn)
    *(int*)(arg0 + 0x5a54) = arg1;
#else
    *(int*)(arg0 + 0x5cb4) = arg1;
#endif
    unsigned char* var0 = func_0205ec34();
    unsigned char* var1 = var0 + var0[0x332] * 0x1c;
    var1[1] = arg1;
}
