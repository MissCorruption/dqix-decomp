#include <globaldefs.h>

struct Struct_ov025_021def64 {
    char unknown_0_[8];
    struct Struct_ov025_021def64* unknown_8_;
};

// USA: func_ov025_021df5cc
extern "C" ARM struct Struct_ov025_021def64* func_ov025_021df5cc(struct Struct_ov025_021def64* arg0) {
    struct Struct_ov025_021def64* var0;
    while ((var0 = arg0->unknown_8_) != NULL) {
        arg0 = var0;
    }
    return arg0;
}
