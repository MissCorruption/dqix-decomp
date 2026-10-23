#include <globaldefs.h>

extern "C" void func_ov014_02186d64(void*);

// USA: func_ov017_021c0520
extern "C" ARM void func_ov017_021c0520(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x20);
    if (var0) func_ov014_02186d64(var0);
}
