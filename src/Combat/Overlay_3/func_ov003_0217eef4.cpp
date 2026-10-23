// KEEP-NAME
// USA: func_ov003_0217eef4
#include <globaldefs.h>

struct Struct_ov003_0217eef4 {
    unsigned char unknown_0_[0x1c];
    void* unknown_1c_;
};

extern "C" void func_ov009_02184ca4(void*);

extern "C" ARM void func_ov003_0217eef4(Struct_ov003_0217eef4* arg0) {
    if (arg0->unknown_1c_) {
        func_ov009_02184ca4(arg0->unknown_1c_);
    }
}
