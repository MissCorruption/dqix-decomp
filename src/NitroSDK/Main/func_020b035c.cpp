#include <globaldefs.h>

// USA: func_020b035c
extern "C" ARM void func_020b035c(char* arg0, int arg1, int arg2) {
    *(int*)(arg0 + (arg1 << 2) + 0x8) = arg2;
}
