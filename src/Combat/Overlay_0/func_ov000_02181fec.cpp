#include <globaldefs.h>

extern "C" int func_ov000_021819c8(void* arg0, int arg1, int* arg2, int arg3);

// USA: func_ov000_02181fec
extern "C" ARM int func_ov000_02181fec(void* arg0, void* arg1, int* arg2) {
    return func_ov000_021819c8(arg1, 0, arg2, 0);
}
