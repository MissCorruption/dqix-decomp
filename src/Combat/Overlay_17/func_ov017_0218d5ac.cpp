#include <globaldefs.h>

extern "C" void func_020dbdc0(void* arg0);

// USA: func_ov017_0218d5ac
extern "C" ARM void func_ov017_0218d5ac(void* arg0) {
    void* var0 = *(void**)((char*)arg0
#if defined(jpn)
 + 0x41e8
#else
 + 0x4498
#endif
);
    if (var0) func_020dbdc0(var0);
}
