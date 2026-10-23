#include <globaldefs.h>

// USA: func_020dde84
extern "C" ARM void func_020dde84(char* arg0, int arg1, int arg2) {
    *(int*)(arg0 + 0x8) = arg1;
    *(int*)(arg0 + 0xc) = arg2;
}
