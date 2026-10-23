#include <globaldefs.h>

struct Struct_0200ffc0 {
    char unknown_0_[0x32c];
    void* unknown_32c_;
};

// USA: func_0200ffc0
extern "C" ARM void* func_0200ffc0(struct Struct_0200ffc0* arg0) {
    return arg0->unknown_32c_ ? arg0->unknown_32c_ : 0;
}
