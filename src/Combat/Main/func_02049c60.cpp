#include <globaldefs.h>

// USA: func_02049c60
extern "C" ARM void func_02049c60(unsigned char* arg0, int* arg1) {
    if (*(int**)(arg0 + 0x13c) == 0) return;
    (*(int**)(arg0 + 0x13c))[5] = arg1[1];
    (*(int**)(arg0 + 0x13c))[8] &= ~0x1;
}
