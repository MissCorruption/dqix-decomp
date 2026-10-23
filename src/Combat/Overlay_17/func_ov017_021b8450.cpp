#include <globaldefs.h>

extern "C" void func_ov000_02160ad0(void*);

// USA: func_ov017_021b8450
extern "C" ARM void func_ov017_021b8450(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x6ac);
    if (var0) func_ov000_02160ad0(var0);
}
