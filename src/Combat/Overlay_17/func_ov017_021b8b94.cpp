#include <globaldefs.h>

extern "C" int func_ov000_0216265c(void* arg0);

// USA: func_ov017_021b8b94
extern "C" ARM int func_ov017_021b8b94(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x6ac);
    if (var0 == NULL) {
        return 0;
    }
    return func_ov000_0216265c(var0);
}
