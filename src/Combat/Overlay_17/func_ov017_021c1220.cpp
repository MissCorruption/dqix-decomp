#include <globaldefs.h>

extern "C" void func_ov008_02184968(void* arg0);

// USA: func_ov017_021c1220
extern "C" ARM void func_ov017_021c1220(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x1c);
    if (var0) func_ov008_02184968(var0);
}
