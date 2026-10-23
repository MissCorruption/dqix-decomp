#include <globaldefs.h>

// USA: func_02049b20
extern "C" ARM void func_02049b20(unsigned char* arg0, int* arg1) {
    if (*(int**)(arg0 + 0x13c) == 0) {
        return;
    }
    (*(int**)(arg0 + 0x13c))[1] = arg1[0];
    (*(int**)(arg0 + 0x13c))[3] = arg1[2];
    (*(int**)(arg0 + 0x13c))[8] &= ~0x2;
}
