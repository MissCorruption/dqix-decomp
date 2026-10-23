#include <globaldefs.h>

struct Struct_ov000_0215767c_6 {
    char unknown_0_[0x30];
    struct Struct_ov000_0215767c_6* unknown_30_;
};
struct Struct_ov000_0215767c_7 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    char unknown_9_[7];
    struct Struct_ov000_0215767c_6* unknown_10_;
};

// USA: func_ov000_02160068
extern "C" ARM void func_ov000_02160068(struct Struct_ov000_0215767c_7* arg0, struct Struct_ov000_0215767c_6* arg1) {
    struct Struct_ov000_0215767c_6** var0 = &arg0->unknown_10_;
    while (*var0 != NULL) {
        var0 = &(*var0)->unknown_30_;
    }
    *var0 = arg1;
    arg0->unknown_8_++;
}
