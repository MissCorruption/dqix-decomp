#include <globaldefs.h>

extern "C" int func_020bdce8(void* arg0, int arg1);

// USA: func_020bdc80
extern "C" ARM int func_020bdc80(void* arg0, int arg1) {
    return func_020bdce8(arg0, arg1) == 0;
}
