#include <globaldefs.h>
extern "C" void* func_020bd5e4(int);

extern "C" int func_020beed8(void* arg0, void* arg1, unsigned char arg2, unsigned char arg3,
                             int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);

struct Struct_020bebb4 {
    char unknown_0_[5];
    unsigned char unknown_5_;
    unsigned char unknown_6_;
};

// USA: func_020bebb4
extern "C" ARM int func_020bebb4(void* arg0, int arg1, int arg2) {
    struct Struct_020bebb4* var0 = (struct Struct_020bebb4*)func_020bd5e4((int)(arg1));
    if (var0 == NULL) return 0;
    return func_020beed8(arg0, var0, var0->unknown_6_, var0->unknown_5_, arg1, arg2, 0, 0, 0, 0);
}
