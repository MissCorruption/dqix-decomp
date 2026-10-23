#include <globaldefs.h>

extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

// USA: func_020e3778
extern "C" ARM void func_020e3778(unsigned char* arg0) {
    if (func_0202b7d8(func_0202ae18())) {
        arg0[2] = 1;
    }
}
