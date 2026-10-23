#include <globaldefs.h>

extern "C" void func_ov003_02159078(void*);

// USA: func_ov017_021babc8
extern "C" ARM void func_ov017_021babc8(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x1c);
    if (var0) func_ov003_02159078(var0);
}
