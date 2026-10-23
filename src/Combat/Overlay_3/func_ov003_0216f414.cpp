#include <globaldefs.h>

struct Struct_ov003_0216f414 {
    short unknown_0_;
    char unknown_2_[0x18 - 2];
};

struct Struct_ov003_0216efdc_2 {
    char unknown_0_[8];
    struct Struct_ov003_0216f414* unknown_8_;
    char unknown_c_[0x14 - 0xc];
    unsigned short unknown_14_;
};

// USA: func_ov003_0216f414
extern "C" ARM void* func_ov003_0216f414(struct Struct_ov003_0216efdc_2* arg0, int arg1) {
    struct Struct_ov003_0216f414* var0 = arg0->unknown_8_;
    unsigned short var1;
    unsigned short var2;
    if (var0 == NULL) {
        return 0;
    }
    var1 = arg0->unknown_14_;
    if (var1 == 0) {
        return 0;
    }
    for (var2 = 0; var2 < var1; var2++) {
        short var3 = var0[var2].unknown_0_;
        if (var3 == arg1) {
            return &var0[var2];
        }
    }
    return 0;
}
