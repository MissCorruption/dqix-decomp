#include <globaldefs.h>
extern "C" struct Struct_02011ff0* func_020108f0(void*, int);

struct Struct_02011ff0 {
    char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
};

// USA: func_02011ff0
extern "C" ARM int func_02011ff0(void* arg0, int arg1) {
    struct Struct_02011ff0* var0 = func_020108f0((void*)(arg0), (int)(arg1));
    return var0 ? var0->unknown_56b_0_ : 0;
}
