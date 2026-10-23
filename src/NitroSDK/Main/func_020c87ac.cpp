#include <globaldefs.h>

struct Struct_020c87ac {
    struct Struct_020c87ac* unknown_0_;
    struct Struct_020c87ac* unknown_4_;
    unsigned int unknown_8_;
};

// USA: func_020c87ac
extern "C" ARM struct Struct_020c87ac* func_020c87ac(struct Struct_020c87ac* arg0, struct Struct_020c87ac* arg1) {
    struct Struct_020c87ac* var0 = NULL;
    struct Struct_020c87ac* var1 = arg0;
    if (var1 != NULL) {
        for (;;) {
            if (arg1 <= var1) break;
            var0 = var1;
            var1 = var1->unknown_4_;
            if (var1 == NULL) break;
        }
    }
    arg1->unknown_0_ = var0;
    arg1->unknown_4_ = var1;
    if (var1 != NULL) {
        var1->unknown_0_ = arg1;
        if ((struct Struct_020c87ac*)((char*)arg1 + arg1->unknown_8_) == var1) {
            arg1->unknown_8_ += var1->unknown_8_;
            var1 = var1->unknown_4_;
            arg1->unknown_4_ = var1;
            if (var1 != NULL) {
                var1->unknown_0_ = arg1;
            }
        }
    }
    if (var0 != NULL) {
        var0->unknown_4_ = arg1;
        if ((struct Struct_020c87ac*)((char*)var0 + var0->unknown_8_) == arg1) {
            var0->unknown_8_ += arg1->unknown_8_;
            var0->unknown_4_ = var1;
            if (var1 != NULL) {
                var1->unknown_0_ = var0;
            }
        }
        return arg0;
    }
    return arg1;
}
