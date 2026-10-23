#include <globaldefs.h>

extern "C" void* func_ov001_02158dcc(void*);

// USA: func_ov001_02159044
extern "C" ARM void* func_ov001_02159044(void* arg0) {
    void* var0 = func_ov001_02158dcc(arg0);
    if (var0 != NULL) *(int*)var0 = 6;
    return var0;
}
