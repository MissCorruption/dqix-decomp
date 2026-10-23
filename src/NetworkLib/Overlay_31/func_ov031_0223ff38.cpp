#include <globaldefs.h>

struct Struct_ov031_0223ff38 {
    struct Struct_ov031_0223ff38* unknown_0_; /* 0x0 */
    struct Struct_ov031_0223ff38* unknown_4_; /* 0x4 */
};

// USA: func_ov031_0223ff38
extern "C" ARM struct Struct_ov031_0223ff38* func_ov031_0223ff38(struct Struct_ov031_0223ff38** arg0) {
    struct Struct_ov031_0223ff38* var0 = *arg0;
    if (var0 != NULL) {
        if (var0 == var0->unknown_0_) {
            *arg0 = NULL;
        } else {
            var0->unknown_0_->unknown_4_ = var0->unknown_4_;
            var0->unknown_4_->unknown_0_ = var0->unknown_0_;
            *arg0 = var0->unknown_4_;
        }
    }
    return var0;
}
