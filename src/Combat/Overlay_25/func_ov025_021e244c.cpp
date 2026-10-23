#include <globaldefs.h>

struct Struct_ov000_0217179c_2 {
    char unknown_0_[8];
    struct Struct_ov000_0217179c_2* unknown_8_;
};
struct Struct_ov000_0217179c {
    struct Struct_ov000_0217179c_2* unknown_0_;
};

// USA: func_ov025_021e244c
#if defined(jpn)
extern "C" ARM void func_ov000_0217179c(struct Struct_ov000_0217179c* arg0, struct Struct_ov000_0217179c_2* arg1)
#else
extern "C" ARM void func_ov025_021e244c(struct Struct_ov000_0217179c* arg0, struct Struct_ov000_0217179c_2* arg1)
#endif
{
    struct Struct_ov000_0217179c_2* var0 = arg0->unknown_0_;
    struct Struct_ov000_0217179c_2* var1 = NULL;
    while (var0 != NULL) {
        if (var0 == arg1) {
            if (var1 != NULL) {
                var1->unknown_8_ = var0->unknown_8_;
            } else {
                arg0->unknown_0_ = var0->unknown_8_;
            }
            arg1->unknown_8_ = NULL;
            return;
        }
        var1 = var0;
        var0 = var0->unknown_8_;
    }
}
