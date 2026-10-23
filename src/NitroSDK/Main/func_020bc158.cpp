#include <globaldefs.h>

struct Struct_020bc158_2 { char unknown_0_[0x41]; unsigned char unknown_41_; };
struct Struct_020bc158 { struct Struct_020bc158_2 *unknown_0_; };

static inline bool inline_020bc158(const struct Struct_020bc158 *arg0) { return arg0->unknown_0_ != NULL; }

// USA: func_020bc158
extern "C" ARM void func_020bc158(struct Struct_020bc158 *arg0, unsigned char arg1) {
    if (inline_020bc158(arg0)) {
        arg0->unknown_0_->unknown_41_ = arg1;
    }
}
