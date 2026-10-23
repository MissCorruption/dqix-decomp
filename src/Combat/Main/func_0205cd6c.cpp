#include <globaldefs.h>

// USA: func_0205cd6c
extern "C" ARM int func_0205cd6c(unsigned char* arg0) {
    int* var0 = *(int**)(arg0 + 0x440);
    if (var0 != NULL) {
        return var0[2] == 2;
    }
    return 0;
}
