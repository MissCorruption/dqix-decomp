#include <globaldefs.h>

struct Struct_0209c0c0 {
    unsigned short unknown_0_[12];
    unsigned short unknown_18_;
};

// USA: func_0209c0c0
extern "C" ARM unsigned short func_0209c0c0(struct Struct_0209c0c0* arg0, struct Struct_0209c0c0* arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_18_; var0++) {
        arg1->unknown_0_[var0] = arg0->unknown_0_[var0];
    }
    return arg0->unknown_18_;
}
