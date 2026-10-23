#include <globaldefs.h>

struct Struct_ov025_021def64_2 {
    int unknown_0_;
    struct Struct_ov025_021def64_2* unknown_4_;
    struct Struct_ov025_021def64_2* unknown_8_;
};

// USA: func_ov025_021df568
extern "C" ARM struct Struct_ov025_021def64_2* func_ov025_021df568(struct Struct_ov025_021def64_2* arg0, struct Struct_ov025_021def64_2* arg1) {
    struct Struct_ov025_021def64_2* var0 = arg0;
    while (var0 != NULL) {
        if (arg1->unknown_0_ < var0->unknown_0_) {
            if (var0->unknown_4_ != NULL) {
                var0->unknown_4_->unknown_8_ = arg1;
            }
            arg1->unknown_8_ = var0;
            arg1->unknown_4_ = var0->unknown_4_;
            var0->unknown_4_ = arg1;
            if (var0 == arg0) {
                arg0 = arg1;
            }
            return arg0;
        }
        if (var0->unknown_8_ == NULL) {
            var0->unknown_8_ = arg1;
            arg1->unknown_4_ = var0;
            return arg0;
        }
        var0 = var0->unknown_8_;
    }
    return arg0;
}
