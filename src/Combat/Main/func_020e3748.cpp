#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);

// USA: func_020e3748
extern "C" ARM void func_020e3748(unsigned char* obj, int bit) {
    if (func_0202b7d8((int*)func_0202ae18())) {
        obj[1] &= ~(1 << bit);
    }
}
