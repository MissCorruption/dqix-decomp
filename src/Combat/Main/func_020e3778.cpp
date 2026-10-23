#include <globaldefs.h>

extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);

// USA: func_020e3778
extern "C" ARM void func_020e3778(unsigned char* p) {
    if (func_0202b7d8(func_0202ae18())) {
        p[2] = 1;
    }
}
