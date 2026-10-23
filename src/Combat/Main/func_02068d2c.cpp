#include <globaldefs.h>

extern "C" int func_02067f9c(int* arg0, int arg1);

// USA: func_02068d2c
extern "C" ARM int func_02068d2c(int arg0, void* arg1) {
    int* var0 = *(int**)((char*)arg1 + 0x10);
    if (var0 != NULL) {
        return func_02067f9c(var0, *var0) == 0;
    }
    return 0;
}
