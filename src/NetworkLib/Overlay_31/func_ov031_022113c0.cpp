#include <globaldefs.h>

struct Struct_ov031_022113c0 { int unknown_0_; };
extern Struct_ov031_022113c0* data_ov031_0224e590;

// USA: func_ov031_022113c0
extern "C" ARM int func_ov031_022113c0(void) {
    Struct_ov031_022113c0* var0 = data_ov031_0224e590;
    if (var0 == NULL) return 0;
    switch (var0->unknown_0_) {
        case 0:
        case 1:
            return 0;
        case 2:
        case 3:
            return 1;
        default:
            return 0;
    }
}
