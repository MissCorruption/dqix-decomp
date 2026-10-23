#include <globaldefs.h>

struct Struct_02053dfc_2 {
    char unknown_0_[0x8];
    int unknown_8_;
};

struct Struct_02053dfc {
#if defined(jpn)
    char unknown_0_[0x190];
#else
    char unknown1_0_[0x19c];
#endif
    struct Struct_02053dfc_2* unknown_19c_;
};

// USA: func_02053dfc
extern "C" ARM int func_02053dfc(struct Struct_02053dfc* arg0) {
    struct Struct_02053dfc_2* var0 = arg0->unknown_19c_;
    if (var0 != 0) {
        return var0->unknown_8_;
    }
    return 0;
}
