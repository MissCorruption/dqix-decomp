#include <globaldefs.h>

extern "C" void* func_020bd580(int arg0);
extern "C" int func_020be2ec(unsigned int arg0, int arg1, int arg2);
extern "C" int func_020be280(unsigned int arg0, int arg1, int arg2);
extern "C" int func_020bd8ac(unsigned int arg0);

struct Struct_020be010 {
    unsigned int unknown_0_0_ : 24;
    unsigned int unknown_3_0_ : 8;
};

// USA: func_020be010
extern "C" ARM int func_020be010(int arg0, unsigned int arg1, int arg2, int arg3, int* arg4) {
    struct Struct_020be010* var0 = (struct Struct_020be010*)func_020bd580(arg0);
    if (var0 == NULL) return 5;
    int var1;
    if (arg1 & 4) {
        if (var0->unknown_3_0_ & 1) {
            var1 = func_020be2ec(var0->unknown_0_0_, arg2, arg3);
        } else {
            var1 = func_020be280(var0->unknown_0_0_, arg2, arg3);
        }
        if (var1 == 0) return 9;
    } else {
        var1 = func_020bd8ac(var0->unknown_0_0_);
    }
    if (arg4) *arg4 = var1;
    return 0;
}
