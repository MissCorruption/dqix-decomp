#include <globaldefs.h>

extern "C" int func_020bddec(void* obj, int a, int b, int c, int d);

// USA: func_020bdcc4
extern "C" ARM int func_020bdcc4(void* obj, int a, int b) {
    return func_020bddec(obj, a, b, 1, 0) == 0;
}
