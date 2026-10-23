#include <globaldefs.h>

struct Struct_02094d88 { unsigned char unknown_0_[0xc]; void* unknown_c_; };
struct Struct_02109418 { unsigned char unknown_0_[0xa0]; struct Struct_02094d88* unknown_a0_; };

// USA: func_020958fc
extern "C" ARM void func_020958fc(struct Struct_02109418* arg0, struct Struct_02094d88* arg1) {
    struct Struct_02094d88* var0 = arg0->unknown_a0_;
    arg0->unknown_a0_ = arg1;
    if (var0 != NULL) {
        arg1->unknown_c_ = var0;
    }
}
