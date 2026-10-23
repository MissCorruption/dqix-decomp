#include <globaldefs.h>

struct Struct_ov003_0217f248 { char unknown_0_[0xc]; void* unknown_c_; };

extern "C" void func_ov003_0216d53c(void*);

// USA: func_ov003_0217f248
extern "C" ARM void func_ov003_0217f248(struct Struct_ov003_0217f248* arg0) {
    if (arg0->unknown_c_) {
        func_ov003_0216d53c(arg0->unknown_c_);
    }
}
