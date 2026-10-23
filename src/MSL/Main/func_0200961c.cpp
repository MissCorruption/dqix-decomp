#include <globaldefs.h>

struct Struct_0200961c {
    char unknown_0_[2];
    short unknown_2_;
};

// USA: func_0200961c
extern "C" ARM void func_0200961c(struct Struct_0200961c* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0 + 5;
    unsigned char* var1 = var0 + arg1 - 1;
    for (;;) {
        unsigned char var2 = *var1;
        if (var2 < 9) {
            *var1 = var2 + 1;
            return;
        }
        if (var1 == var0) {
            *var1 = 1;
            arg0->unknown_2_ = arg0->unknown_2_ + 1;
            return;
        }
        *var1-- = 0;
    }
}
