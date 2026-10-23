#include <globaldefs.h>

extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

// USA: func_020e37e8
extern "C" ARM int func_020e37e8(unsigned char* arg0) {
    if (func_0202b7d8(func_0202ae18())) {
        return arg0[2];
    }
    return 1;
}
