#include <globaldefs.h>

extern "C" int func_ov031_022072d0(int arg0, void* arg1, int arg2, int arg3, void* arg4);

// USA: func_ov031_0221e538
extern "C" THUMB int func_ov031_0221e538(int arg0, void* arg1, int arg2, int arg3, unsigned char* arg4, int* arg5) {
    *arg4 = (unsigned char)*arg5;
    return func_ov031_022072d0(arg0, arg1, arg2, arg3, arg4);
}
