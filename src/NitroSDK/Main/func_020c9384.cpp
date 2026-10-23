#include <globaldefs.h>

struct Struct_020c9384 {
    char unknown_0_[0x14];
    struct Struct_020c9384* unknown_14_;
    struct Struct_020c9384* unknown_18_;
};

struct Struct_02111654_4 {
    char unknown_0_[0xc];
    struct Struct_020c9384* unknown_c_;
    struct Struct_020c9384* unknown_10_;
};

extern struct Struct_02111654_4 data_02111654;

// USA: func_020c9384
extern "C" ARM void func_020c9384(struct Struct_020c9384* arg0) {
    struct Struct_020c9384* var0;
    struct Struct_020c9384* var1;
    if (arg0 == NULL) {
        return;
    }
    var0 = arg0->unknown_14_;
    var1 = arg0->unknown_18_;
    if (var1 != NULL) {
        var1->unknown_14_ = var0;
    } else {
        data_02111654.unknown_10_ = var0;
    }
    if (var0 != NULL) {
        var0->unknown_18_ = var1;
    } else {
        data_02111654.unknown_c_ = var1;
    }
}
