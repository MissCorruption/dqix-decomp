#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov000_02169b2c { char unknown_0_[4]; struct Struct_ov000_02169b2c* unknown_4_; };
extern "C" void func_ov000_02169b2c(struct Struct_ov000_02169b2c* arg0, struct Struct_ov000_02169b2c* arg1);

struct Struct_ov000_02169b78 { char unknown_0_[8]; struct Struct_ov000_02169b2c* unknown_8_; };
struct Struct_ov000_02184264 { char unknown_0_[4]; struct Struct_ov000_02169b78* unknown_4_; };
extern struct Struct_ov000_02184264 data_ov000_02184264;

// USA: func_ov000_02169b78
extern "C" ARM void func_ov000_02169b78(struct Struct_ov000_02169b2c* arg0) {
    struct Struct_ov000_02169b78* var0 = data_ov000_02184264.unknown_4_;
    if (!var0) {
        return;
    }
    struct Struct_ov000_02169b2c* var1 = var0->unknown_8_;
    if (!var1) {
        var0->unknown_8_ = arg0;
        arg0->unknown_4_ = NULL;
        return;
    }
    func_ov000_02169b2c(var1, arg0);
}
