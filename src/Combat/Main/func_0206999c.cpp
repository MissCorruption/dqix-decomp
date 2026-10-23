#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0206999c { char* unknown_0_; };

// USA: func_0206999c
extern "C" ARM int func_0206999c(struct Struct_0206999c* arg0) {
    char* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff29;
    memcpy(var0, &var1, 2);
    return 2;
}
