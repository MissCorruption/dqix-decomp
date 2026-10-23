#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02003c3c {
    char* unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

// USA: func_02003c3c
extern "C" ARM int func_02003c3c(struct Struct_02003c3c* arg0, void* arg1, unsigned int arg2) {
    if (arg0->unknown_8_ + arg2 > arg0->unknown_4_) {
        arg2 = arg0->unknown_4_ - arg0->unknown_8_;
    }
    memcpy(arg0->unknown_0_ + arg0->unknown_8_, arg1, arg2);
    arg0->unknown_8_ += arg2;
    return 1;
}
