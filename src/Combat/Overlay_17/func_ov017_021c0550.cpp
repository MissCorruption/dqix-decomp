#include <globaldefs.h>

extern "C" void func_ov014_02186dc8(void*);

// USA: func_ov017_021c0550
extern "C" ARM void func_ov017_021c0550(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x20);
    if (var0) func_ov014_02186dc8(var0);
}
