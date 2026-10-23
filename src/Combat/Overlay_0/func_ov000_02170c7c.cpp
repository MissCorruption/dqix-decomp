#include <globaldefs.h>

struct Struct_ov000_02170c7c {
    char unknown_0_[8];
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
};

// USA: func_ov000_02170c7c
extern "C" ARM int func_ov000_02170c7c(struct Struct_ov000_02170c7c* arg0) {
    int var0 = 0;
    short var1 = arg0->unknown_8_;
    if (var1 == 0) return 6;
    short var2 = arg0->unknown_c_;
    float var3 = (float)var2 / (float)var1;
    if (var3 <= 0.0f) {
        var0 = 6;
    } else if (var3 <= 0.08f) {
        var0 = 5;
    } else if (var3 <= 0.25f) {
        var0 = 4;
    }
    return var0;
}
