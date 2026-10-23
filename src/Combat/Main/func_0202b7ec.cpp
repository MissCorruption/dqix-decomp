#include <globaldefs.h>

extern "C" int func_0202d6c8(void* arg0);

// USA: func_0202b7ec
extern "C" ARM int func_0202b7ec(void* arg0) {
    *(int*)arg0 = 2;
    return func_0202d6c8(arg0);
}
