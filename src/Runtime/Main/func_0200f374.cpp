#include <globaldefs.h>

// USA: func_0200f374
extern "C" ARM void* __clear(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (arg0 != 0 && arg1 != 0) {
        do {
            *var0++ = 0;
        } while (--arg1);
    }
    return arg0;
}
