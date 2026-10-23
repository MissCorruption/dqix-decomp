#include <globaldefs.h>

struct Struct_020bc084 {
    int unknown_0_;
};

static inline bool inline_020bc084(struct Struct_020bc084* const* arg0) {
    return *arg0 != NULL;
}

// USA: func_020bc084
extern "C" ARM void func_020bc084(struct Struct_020bc084** arg0) {
    if (!inline_020bc084(arg0)) {
        return;
    }
    (*arg0)->unknown_0_ = 0;
    *arg0 = NULL;
}
