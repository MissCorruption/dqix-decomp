#include <globaldefs.h>

// USA: func_02042af4
extern "C" ARM void func_02042af4(int arg0, unsigned char* arg1, int arg2) {
    arg1[arg2 >> 3] &= ~(1 << (arg2 & 7));
}
