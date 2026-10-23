#include <globaldefs.h>

extern "C" void func_ov003_0215ca68(void*);

// USA: func_ov017_021bae98
extern "C" ARM void func_ov017_021bae98(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x20);
    if (var0) func_ov003_0215ca68(var0);
}
