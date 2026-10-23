#include <globaldefs.h>

extern "C" int func_02067fec(void*, int);

// USA: func_02068aec
extern "C" ARM int func_02068aec(int arg0, unsigned char* arg1) {
    unsigned int* var0 = *(unsigned int**)(arg1 + 0x28);
    if (var0 != NULL) {
        return func_02067fec(var0, var0[0]) == 0;
    }
    return 0;
}
