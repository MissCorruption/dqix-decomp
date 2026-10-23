#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_0200f3a4_11 {
    unsigned char unknown_0_[6];
    unsigned char unknown_6_0_ : 1;
    unsigned char unknown_6_1_ : 7;
    unsigned char unknown_7_;
    int unknown_8_;
};

// USA: func_0200fad4
// Zeroes the first 6 bytes, clears the flag bits at +0x6, and clears the word at +0x8.
extern "C" ARM void func_0200fad4(struct Struct_0200f3a4_11* arg0) {
    VectorizedMemset(arg0, 0, 6);
    arg0->unknown_6_0_ = 0;
    arg0->unknown_6_1_ = 0;
    arg0->unknown_8_ = 0;
}
