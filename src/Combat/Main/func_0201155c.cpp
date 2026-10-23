#include <globaldefs.h>

struct Struct_02000c9c_11 {
#if defined(jpn)
    char unknown1_0_[0x5A6C];
#else
    char unknown_0_[0x5CCC];
#endif
    signed int unknown_5ccc_0_ : 1;
};

// USA: func_0201155c
extern "C" ARM void func_0201155c(struct Struct_02000c9c_11* arg0) {
    arg0->unknown_5ccc_0_ = 0;
}
