#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069ce0 { void* unknown_0_; };

// USA: func_02069ce0
extern "C" ARM int func_02069ce0(struct Struct_02069ce0* arg0) {
    void* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff0f;
    memcpy(var0, &var1, 2);
    return 2;
}
