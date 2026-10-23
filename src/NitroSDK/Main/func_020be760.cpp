#include <globaldefs.h>
extern "C" void* func_020bd454(int);

extern "C" int func_020be828(void* arg0, unsigned char arg1, unsigned short arg2, unsigned char arg3, void* arg4, void* arg5);

struct Struct_020be760 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    char unknown_6_[2];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

// USA: func_020be760
extern "C" ARM int func_020be760(void* arg0, void* arg1) {
    struct Struct_020be760* var0 = (struct Struct_020be760*)func_020bd454((int)(arg1));
    if (var0 == NULL) return 0;
    return func_020be828(arg0, var0->unknown_9_, var0->unknown_4_, var0->unknown_8_, var0, arg1);
}
