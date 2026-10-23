#include <globaldefs.h>

extern "C" void __sinit_020e5920();
extern "C" char ARM9_INIT_START[];

struct Struct_0200f29c { char unknown_0_[0xc]; void (*unknown_c_)(void); unsigned int unknown_10_; };

// USA: func_0200f29c
extern "C" ARM int func_0200f29c(struct Struct_0200f29c* arg0) {
    arg0->unknown_c_ = __sinit_020e5920;
    arg0->unknown_10_ = (unsigned int)ARM9_INIT_START;
    return 1;
}
