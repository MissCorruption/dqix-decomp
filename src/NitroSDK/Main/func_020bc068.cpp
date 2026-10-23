#include <globaldefs.h>

extern "C" void* func_020bc594(void* arg0);

// USA: func_020bc068
extern "C" ARM void* func_020bc068(void* arg0, int) {
    return func_020bc594(*(void**)arg0);
}
