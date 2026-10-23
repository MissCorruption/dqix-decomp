#include <globaldefs.h>

struct Struct_02072a68 {
    short unknown_0_;
    void* unknown_4_;
};

struct Struct_02072a68_2 {
    struct Struct_02072a68* unknown_0_;
    short unknown_4_;
};

// USA: func_02072a68
extern "C" ARM void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (arg1 == arg0->unknown_0_[var0].unknown_0_) {
            return arg0->unknown_0_[var0].unknown_4_;
        }
    }
    return 0;
}
