#include <globaldefs.h>

struct Struct_ov000_02169b54 { int unknown_0_; struct Struct_ov000_02169b54* unknown_4_; };

// USA: func_ov000_02169b54
extern "C" ARM struct Struct_ov000_02169b54* func_ov000_02169b54(struct Struct_ov000_02169b54* arg0, int arg1) {
    while (arg0) {
        if (arg0->unknown_0_ == arg1) return arg0;
        arg0 = arg0->unknown_4_;
    }
    return 0;
}
