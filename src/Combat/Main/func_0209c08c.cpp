#include <globaldefs.h>

struct Struct_0209c08c {
    unsigned short unknown_0_[0xc];
    unsigned short unknown_18_;
};

// USA: func_0209c08c
extern "C" ARM void func_0209c08c(struct Struct_0209c08c* arg0, unsigned short arg1) {
    unsigned short var0 = arg0->unknown_18_;
    if (var0 < 0xc) {
        arg0->unknown_18_ = var0 + 1;
        arg0->unknown_0_[var0] = arg1;
    }
}
