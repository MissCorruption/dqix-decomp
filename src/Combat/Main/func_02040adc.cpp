#include <globaldefs.h>

struct Struct_02040adc {
    char unknown_0_[0x2e];
    short unknown_2e_;
};

struct Struct_0203de84_3 {
    char unknown_0_[0x14];
    struct Struct_02040adc* unknown_14_;
};

// USA: func_02040adc
extern "C" ARM int func_02040adc(struct Struct_0203de84_3* arg0) {
    struct Struct_02040adc* var0 = arg0->unknown_14_;
    if (var0 != 0) {
        return var0->unknown_2e_;
    }
    return 0x3d;
}
