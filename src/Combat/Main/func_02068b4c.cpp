#include <globaldefs.h>

extern "C" int func_02067fec(void* arg0, int arg1);

// USA: func_02068b4c
extern "C" ARM int func_02068b4c(int arg0, unsigned char* arg1) {
    int* var0 = *(int**)(arg1 + 0x10);
    if (var0 != NULL) {
        return func_02067fec(var0, *var0) == 0;
    }
    return 0;
}
