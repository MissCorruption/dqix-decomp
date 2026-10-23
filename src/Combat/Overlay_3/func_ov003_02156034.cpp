#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

// USA: func_ov003_02156034
extern "C" ARM void* func_ov003_02156034(void* arg0) {
    short var0 = *(short*)((char*)arg0 + R(0x1e0,0x1e4));
    void** var1 = *(void***)((char*)arg0 + 0x20);
    short var2 = (short)(var0 - 0x13);
    return var1[var2];
}
