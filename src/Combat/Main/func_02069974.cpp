#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069974 { char* unknown_0_; };

// USA: func_02069974
extern "C" ARM int func_02069974(struct Struct_02069974* arg0) {
    char* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff28;
    memcpy(var0, &var1, 2);
    return 2;
}
