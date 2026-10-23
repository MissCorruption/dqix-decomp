#include <globaldefs.h>

struct Struct_0205a254_2 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    char unknown_a_[0x18 - 0xa];
};

struct Struct_0205a254 {
    struct Struct_0205a254_2* unknown_0_;
    unsigned short unknown_4_;
};

// USA: func_0205a3d0
extern "C" ARM struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1) {
    struct Struct_0205a254_2* var0;
    unsigned short var1;
    if (arg0->unknown_0_ == NULL) {
        return NULL;
    }
    if (arg0->unknown_4_ == 0) {
        return NULL;
    }
    var0 = NULL;
    for (var1 = 0; var1 < arg0->unknown_4_; var1++) {
        if (arg1 == arg0->unknown_0_[var1].unknown_8_) {
            var0 = &arg0->unknown_0_[var1];
            break;
        }
    }
    return var0;
}
