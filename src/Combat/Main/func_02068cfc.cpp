#include <globaldefs.h>

extern "C" int func_02067f9c(void* arg0, int arg1);

// USA: func_02068cfc
extern "C" ARM int func_02068cfc(int arg0, unsigned char* arg1) {
    int* var0 = *(int**)(arg1 + 0x0);
    if (var0 != NULL) {
        return func_02067f9c(var0, *var0) == 0;
    }
    return 0;
}
