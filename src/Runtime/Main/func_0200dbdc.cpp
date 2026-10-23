#include <globaldefs.h>

struct Struct_0200dbdc {
    char unknown_0_[8];
    unsigned char* unknown_8_;
};

// USA: func_0200dbdc
extern "C" ARM int func_0200dbdc(struct Struct_0200dbdc* arg0) {
    unsigned char* var0 = arg0->unknown_8_;
    int var1;
    if (var0 != 0) {
        var1 = *var0 & 0x1f;
    } else {
        var1 = 0;
    }
    return var1 & 0xff;
}
