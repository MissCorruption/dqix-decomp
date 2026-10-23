#include <globaldefs.h>

extern "C" void* func_020bc548(void* arg0);

// USA: func_020bc018
extern "C" ARM void* func_020bc018(void* arg0, int) {
    return func_020bc548(*(void**)arg0);
}
