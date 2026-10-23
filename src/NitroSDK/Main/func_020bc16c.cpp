#include <globaldefs.h>

struct Struct_020bc16c { char unknown_0_[0x40]; unsigned char unknown_40_; };
struct Struct_020bc16c_2 { struct Struct_020bc16c *unknown_0_; };

static inline bool inline_020bc158(const struct Struct_020bc16c_2 *arg0) { return arg0->unknown_0_ != NULL; }

// USA: func_020bc16c
extern "C" ARM void func_020bc16c(struct Struct_020bc16c_2 *arg0, unsigned char arg1) {
    if (inline_020bc158(arg0)) {
        arg0->unknown_0_->unknown_40_ = arg1;
    }
}
