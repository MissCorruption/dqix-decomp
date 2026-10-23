#include <globaldefs.h>

struct Struct_0205a180_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_0205a180 {
    char unknown_0_[4];
    struct Struct_0205a180_2* unknown_4_;
    char unknown_8_[0xb6 - 8];
    short unknown_b6_;
};

// USA: func_0205a180
extern "C" ARM void func_0205a180(struct Struct_0205a180* arg0) {
    struct Struct_0205a180_2* var0 = arg0->unknown_4_;
    if (var0 != NULL) {
        int var1 = arg0->unknown_b6_;
        var0->unknown_4_ = 0;
        var0->unknown_8_ = var1;
    }
}
