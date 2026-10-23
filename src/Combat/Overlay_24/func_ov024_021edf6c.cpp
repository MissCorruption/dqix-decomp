#include <globaldefs.h>

struct Struct_ov024_021edf6c { unsigned int unknown_0_; unsigned int unknown_4_0_ : 12; };

extern "C" int func_ov000_02154a04(void* arg0, int arg1, unsigned short arg2, int arg3);

// USA: func_ov024_021edf6c
extern "C" ARM int func_ov024_021edf6c(void** arg0, int arg1, struct Struct_ov024_021edf6c* arg2, int* arg3, int arg4) {
    *arg3 = func_ov000_02154a04(*arg0, arg1, arg2->unknown_4_0_, arg4);
    return 1;
}
