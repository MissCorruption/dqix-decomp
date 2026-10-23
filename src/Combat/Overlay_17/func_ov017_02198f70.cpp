#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);

// USA: func_ov017_02198f70
extern "C" ARM void func_ov017_02198f70(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)func_0205ec34();
    var0[0x491] = arg1;
}
