#include <globaldefs.h>

extern "C" void func_ov008_02184878(void* arg0);

// USA: func_ov017_021c11f0
extern "C" ARM void func_ov017_021c11f0(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x1c);
    if (var0) func_ov008_02184878(var0);
}
