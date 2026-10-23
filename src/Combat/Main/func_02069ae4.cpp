#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069ae4 { char* unknown_0_; };

// USA: func_02069ae4
extern "C" ARM int func_02069ae4(struct Struct_02069ae4* arg0) {
    char* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff04;
    memcpy(var0, &var1, 2);
    return 2;
}
