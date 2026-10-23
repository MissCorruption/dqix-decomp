#include <globaldefs.h>

struct Struct_ov003_0217f218 { char unknown_0_[0xc]; void* unknown_c_; };

extern "C" void func_ov003_0216d468(void*);

// USA: func_ov003_0217f218
extern "C" ARM void func_ov003_0217f218(struct Struct_ov003_0217f218* arg0) {
    if (arg0->unknown_c_) {
        func_ov003_0216d468(arg0->unknown_c_);
    }
}
