#include <globaldefs.h>

struct Struct_ov006_02157368_2 {
    short unknown_0_;
    char unknown_2_[0x18 - 2];
};

struct Struct_ov006_02157368 {
    char unknown_0_[8];
    struct Struct_ov006_02157368_2* unknown_8_;
    char unknown_c_[0x14 - 0xc];
    unsigned short unknown_14_;
};

// USA: func_ov006_02157368
extern "C" ARM struct Struct_ov006_02157368_2* func_ov006_02157368(struct Struct_ov006_02157368* arg0, int arg1) {
    struct Struct_ov006_02157368_2* var0 = arg0->unknown_8_;
    if (var0 == 0) {
        return 0;
    }
    unsigned short var1 = arg0->unknown_14_;
    if (var1 == 0) {
        return 0;
    }
    for (unsigned short var2 = 0; var2 < var1; var2++) {
        struct Struct_ov006_02157368_2* var3 = &var0[var2];
        if (var3->unknown_0_ == arg1) {
            return var3;
        }
    }
    return 0;
}
