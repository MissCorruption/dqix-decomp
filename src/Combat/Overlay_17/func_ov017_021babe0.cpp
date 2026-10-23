#include <globaldefs.h>

extern "C" void func_ov003_02159100(void*);

// USA: func_ov017_021babe0
extern "C" ARM void func_ov017_021babe0(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0x1c);
    if (var0) func_ov003_02159100(var0);
}
