#include <globaldefs.h>

extern "C" void* func_ov001_0215a054(void*);

// USA: func_ov001_0215a654
extern "C" ARM void* func_ov001_0215a654(void* arg0, int arg1) {
    void* var0 = func_ov001_0215a054(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 0x15;
        *(int*)((char*)var0 + 0x10) = arg1;
    }
    return var0;
}
