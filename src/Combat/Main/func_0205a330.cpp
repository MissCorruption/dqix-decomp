#include <globaldefs.h>

struct Struct_0205a330 {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

extern "C" void func_0205a254(struct Struct_0205a330*, int, int);

// USA: func_0205a330
extern "C" ARM void func_0205a330(struct Struct_0205a330* arg0, int arg1) {
    unsigned short var0;
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        func_0205a254(arg0, var0 & 0xff, arg1);
    }
}
