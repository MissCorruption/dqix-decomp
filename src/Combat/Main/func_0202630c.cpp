#include <globaldefs.h>

// USA: func_0202630c
extern "C" ARM void func_0202630c(void* arg0, int* arg1, int arg2) {
    if (arg1[0] <= arg2) {
        arg1[0] = arg2;
    }
    if (arg1[0] >= 0x100000 - arg2) {
        arg1[0] = 0x100000 - arg2;
    }
    if (arg1[2] <= arg2) {
        arg1[2] = arg2;
    }
    if (arg1[2] >= 0xC0000 - arg2) {
        arg1[2] = 0xC0000 - arg2;
    }
}
