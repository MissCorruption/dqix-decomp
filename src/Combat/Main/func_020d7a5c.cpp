#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "std_library_functions.h"

struct Struct_0214e34c {
    unsigned char unknown_0_[(IS_JPN ? 0xf0 : 0x150)];
    unsigned char unknown_150_;
    unsigned char unknown_151_;
    unsigned short unknown_152_;
};

// USA: func_020d7a5c
extern "C" ARM void func_020d7a5c(struct Struct_0214e34c* arg0) {
    memset(arg0, 0, (IS_JPN ? 0xf0 : 0x150));
    arg0->unknown_150_ &= ~0x3f;
    arg0->unknown_152_ = 0;
    arg0->unknown_150_ &= ~0x40;
    arg0->unknown_150_ &= ~0x80;
}
