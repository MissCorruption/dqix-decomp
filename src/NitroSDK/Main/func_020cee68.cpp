#include <globaldefs.h>


struct Struct_0210cfdc {
    char unknown_0_[8];
    struct Struct_0210cfdc* unknown_8_;
};

struct Struct_020cee68 {
    struct Struct_0210cfdc* unknown_0_;
};

// USA: func_020cee68
extern "C" ARM void func_020cee68(struct Struct_020cee68* arg0, struct Struct_0210cfdc* arg1) {
    struct Struct_0210cfdc* var0;
    struct Struct_0210cfdc* var1;
    if (arg0 == 0) return;
    var0 = arg0->unknown_0_;
    if (var0 == 0) {
        arg1->unknown_8_ = 0;
        arg0->unknown_0_ = arg1;
        return;
    }
    var1 = var0->unknown_8_;
    if (var1 != 0) {
        do {
            var0 = var1;
            var1 = var1->unknown_8_;
        } while (var1 != 0);
    }
    arg1->unknown_8_ = var1;
    var0->unknown_8_ = arg1;
}
