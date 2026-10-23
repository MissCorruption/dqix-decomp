#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069f9c { void* unknown_0_; };

// USA: func_02069f9c
extern "C" ARM int func_02069f9c(struct Struct_02069f9c* arg0) {
    void* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff03;
    memcpy(var0, &var1, 2);
    return 2;
}
