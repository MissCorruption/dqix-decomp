#include <globaldefs.h>

struct Struct_020bec10_2 {
    unsigned int unknown_0_[68];
    unsigned int unknown_110_;
};

struct Struct_020bec10 {
    struct Struct_020bec10_2* unknown_0_;
};

static inline bool inline_020bc158(const struct Struct_020bec10* arg0) { return arg0->unknown_0_ != NULL; }

// USA: func_020bec10
extern "C" ARM void func_020bec10(struct Struct_020bec10* arg0) {
    if (inline_020bc158(arg0)) {
        arg0->unknown_0_->unknown_110_ |= 4;
    }
}
