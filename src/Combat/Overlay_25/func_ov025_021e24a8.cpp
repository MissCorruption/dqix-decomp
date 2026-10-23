#include <globaldefs.h>

struct Struct_ov025_021e24a8_2 { int unknown_0_; int unknown_4_; struct Struct_ov025_021e24a8_2* unknown_8_; };
struct Struct_ov025_021e24a8 { struct Struct_ov025_021e24a8_2* unknown_0_; };

// USA: func_ov025_021e24a8
extern "C" ARM int func_ov025_021e24a8(struct Struct_ov025_021e24a8* arg0, struct Struct_ov025_021e24a8_2* arg1) {
    struct Struct_ov025_021e24a8_2* var0 = arg0->unknown_0_;
    while (var0 != 0) {
        if (var0 == arg1) return 1;
        var0 = var0->unknown_8_;
    }
    return 0;
}
