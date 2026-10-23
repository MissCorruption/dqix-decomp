#include <globaldefs.h>

struct Struct_0200ffd0 {
    char unknown_0_[0x330];
    void* unknown_330_;
};

// USA: func_0200ffd0
extern "C" ARM void* func_0200ffd0(struct Struct_0200ffd0* arg0) {
    return arg0->unknown_330_ ? arg0->unknown_330_ : 0;
}
