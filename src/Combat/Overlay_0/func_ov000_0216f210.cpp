#include <globaldefs.h>
#include <Graphics/Vector.h>

struct Struct_ov000_0216f210 {
    int unknown_0_;
    Vector3fix unknown_4_;
};

// USA: func_ov000_0216f210
extern "C" ARM fix32_t func_ov000_0216f210(Struct_ov000_0216f210* arg0, fix32_t* arg1) {
    Vector3fix var0 = arg0->unknown_4_;
    var0.y = 0;
    fix32_t var1 = Vector3fix_Length(&var0);
    *arg1 = var1;
    if (var1 < 0x8000) {
        return 0;
    }
    if (var1 > 0x11000) {
        var1 = 0x11000;
    }
    fix32_t var2 = fix32_Divide(var1 - 0x8000, 0x9000);
    fix32_t var3 = 0x1000 - fix32cos(FIX32_MULTIPLY(var2, 0x1922));
    if (var3 < 0) {
        var3 = 0;
    }
    return FIX32_MULTIPLY(var3, 0x5000);
}
