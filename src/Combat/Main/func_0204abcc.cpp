#include <globaldefs.h>
#include "std_library_functions.h"

typedef void (*Type_0204abcc)(void*, int, int);

struct Struct_0204abcc {
    char unknown_0_[2];
    unsigned short unknown_2_;
};

struct Struct_0204abcc_2 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[1];
};

// USA: func_0204abcc
extern "C" ARM void func_0204abcc(struct Struct_0204abcc* arg0, Type_0204abcc arg1, struct Struct_0204abcc_2* arg2) {
    int var0;
    memcpy(&var0, &arg2->unknown_8_, 4);
    if (arg0->unknown_2_ == 0xffff) {
        arg1(arg2->unknown_c_, 0, var0);
    } else {
        int var1 = arg0->unknown_2_ & 0xff;
        int var2;
        for (var2 = 0; var2 < 16; var2++) {
            if (var1 & 1) {
                arg1(arg2->unknown_c_ + var2 * 32, var2 * 32, 32);
            }
            var1 = (var1 >> 1) & 0xff;
        }
    }
}
