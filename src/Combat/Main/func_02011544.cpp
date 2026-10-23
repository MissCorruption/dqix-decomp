#include <globaldefs.h>

struct Struct_02011544 {
#if defined(jpn)
    char unknown1_0_[0x5A6C];
#else
    char unknown_0_[0x5CCC];
#endif
    signed int unknown_5ccc_0_ : 1;
};

// USA: func_02011544
extern "C" ARM void func_02011544(struct Struct_02011544* arg0) {
    arg0->unknown_5ccc_0_ = 1;
}
