#include <globaldefs.h>

extern "C" void func_ov008_02184918(void* arg0);

// USA: func_ov017_021c1208
extern "C" ARM void func_ov017_021c1208(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x1c);
    if (var0) func_ov008_02184918(var0);
}
