#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069f24 { void* unknown_0_; };

// USA: func_02069f24
extern "C" ARM int func_02069f24(struct Struct_02069f24* arg0) {
    void* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff16;
    memcpy(var0, &var1, 2);
    return 2;
}
