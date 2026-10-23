#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069924 { char* unknown_0_; };

// USA: func_02069924
extern "C" ARM int func_02069924(struct Struct_02069924* arg0) {
    char* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff26;
    memcpy(var0, &var1, 2);
    return 2;
}
