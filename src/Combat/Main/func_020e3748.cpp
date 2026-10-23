#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

// USA: func_020e3748
extern "C" ARM void func_020e3748(unsigned char* arg0, int arg1) {
    if (func_0202b7d8((int*)func_0202ae18())) {
        arg0[1] &= ~(1 << arg1);
    }
}
