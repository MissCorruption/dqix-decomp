#include <globaldefs.h>

extern "C" int func_020bdce8(void* obj, int arg);

// USA: func_020bdc80
extern "C" ARM int func_020bdc80(void* obj, int arg) {
    return func_020bdce8(obj, arg) == 0;
}
