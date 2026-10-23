#include <globaldefs.h>

extern "C" void func_0202f45c(void*, int, int, int, int, int, int);

struct Struct_0202f404 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    int   unknown_8_;
    int   unknown_c_;
    int   unknown_10_;
    int   unknown_14_;
};

// USA: func_0202f404
extern "C" ARM void func_0202f404(void* arg0, int arg1, int arg2) {
    struct Struct_0202f404* var0 = *(struct Struct_0202f404**)((char*)arg0 + 0x440);
    if (var0 != NULL && var0->unknown_8_ != 0) {
        func_0202f45c(arg0, var0->unknown_0_ << 12, var0->unknown_2_ << 12,
                      var0->unknown_4_ * var0->unknown_10_, var0->unknown_6_ * var0->unknown_14_, arg1, arg2);
    }
}
