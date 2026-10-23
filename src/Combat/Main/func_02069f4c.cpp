#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069f4c { void* unknown_0_; };

// USA: func_02069f4c
extern "C" ARM int func_02069f4c(struct Struct_02069f4c* arg0) {
    void* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff17;
    memcpy(var0, &var1, 2);
    return 2;
}
