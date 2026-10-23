#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069f74 { void* unknown_0_; };

// USA: func_02069f74
extern "C" ARM int func_02069f74(struct Struct_02069f74* arg0) {
    void* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff01;
    memcpy(var0, &var1, 2);
    return 2;
}
