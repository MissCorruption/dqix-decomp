#include <globaldefs.h>

extern "C" void func_ov003_0217da48(void* arg0);

struct Struct_020dae68 {
    unsigned char unknown_0_[0xc];
    void* unknown_c_;
};

// USA: func_020dae68
extern "C" ARM void func_020dae68(Struct_020dae68* arg0) {
    void* var0 = arg0->unknown_c_;
    if (var0 != NULL) {
        func_ov003_0217da48(var0);
    }
}
