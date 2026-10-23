#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020287b4_2 {
    unsigned char unknown_0_[0x1c8];
    int unknown_1c8_;
    int unknown_1cc_;
    int unknown_1d0_;
};

// USA: func_0209af34
extern "C" ARM void func_0209af34(struct Struct_020287b4_2* arg0) {
    arg0->unknown_1c8_ = -1;
    arg0->unknown_1cc_ = 0;
    arg0->unknown_1d0_ = 0;
    memset(arg0, 0, 0x1c8);
}
