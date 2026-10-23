#include <globaldefs.h>

extern "C" void* func_020bd454(int arg0);
extern "C" int func_020bded0(unsigned short arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_020be13c(unsigned int arg0, int arg1, int arg2);
extern "C" int func_020bd8ac(unsigned int arg0);

struct Struct_020bddec {
    int unknown_0_;
    unsigned short unknown_4_;
};

// USA: func_020bddec
extern "C" ARM int func_020bddec(int arg0, int arg1, int arg2, int arg3, int* arg4) {
    struct Struct_020bddec* var0 = (struct Struct_020bddec*)func_020bd454(arg0);
    if (var0 == NULL) return 2;
    int var1 = func_020bded0(var0->unknown_4_, arg1, arg2, arg3, 0);
    if (var1 != 0) return var1;
    if (arg1 & 1) {
        var1 = func_020be13c((unsigned int)var0->unknown_0_, arg2, arg3);
        if (var1 == 0) return 6;
    } else {
        var1 = func_020bd8ac((unsigned int)var0->unknown_0_);
    }
    if (arg4 != NULL) *arg4 = var1;
    return 0;
}
