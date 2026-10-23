#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020d784c {
    unsigned int unknown_0_;      // 0x0
    unsigned char unknown_4_[0x10];  // 0x4
    unsigned short unknown_14_;   // 0x14
};

// USA: func_020d784c
extern "C" ARM void func_020d784c(struct Struct_020d784c* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_14_ = 0;
    memset(arg0->unknown_4_, -1, 0x10);
}
