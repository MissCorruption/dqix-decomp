#include <globaldefs.h>

extern "C" void func_ov012_02185ab8(void* arg0);

// USA: func_ov017_021c19e0
extern "C" ARM void func_ov017_021c19e0(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x20);
    if (var0) func_ov012_02185ab8(var0);
}
