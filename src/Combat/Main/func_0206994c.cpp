#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0206994c { char* unknown_0_; };

// USA: func_0206994c
extern "C" ARM int func_0206994c(struct Struct_0206994c* arg0) {
    char* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff27;
    memcpy(var0, &var1, 2);
    return 2;
}
