#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" unsigned char* func_0205ec34(void);

// USA: func_02010774
extern "C" ARM void func_02010774(char* arg0, int arg1) {
#if defined(jpn)
    *(int*)(arg0 + 0x5a50) = arg1;
#else
    *(int*)(arg0 + 0x5cb0) = arg1;
#endif
    unsigned char* var0 = func_0205ec34();
    var0[var0[0x332] * 0x1c] = arg1;
}
