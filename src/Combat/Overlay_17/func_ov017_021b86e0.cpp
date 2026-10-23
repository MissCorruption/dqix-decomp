#include <globaldefs.h>

extern "C" void func_ov000_02166e3c(void* arg0);

// USA: func_ov017_021b86e0
extern "C" ARM void func_ov017_021b86e0(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x6ac);
    if (var0) func_ov000_02166e3c(var0);
}
