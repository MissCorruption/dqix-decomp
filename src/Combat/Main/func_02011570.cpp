#include <globaldefs.h>

struct Struct_02000c9c_9 {
#if defined(jpn)
    char unknown1_0_[0x5a6c];
#else
    char unknown_0_[0x5CCC];
#endif
    signed int unknown_5ccc_0_ : 1;
};

// USA: func_02011570
extern "C" ARM int func_02011570(struct Struct_02000c9c_9* arg0) {
    return arg0->unknown_5ccc_0_;
}
