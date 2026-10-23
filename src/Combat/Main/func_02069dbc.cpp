#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069dbc { void* unknown_0_; };

// USA: func_02069dbc
extern "C" ARM int func_02069dbc(struct Struct_02069dbc* arg0) {
    void* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff12;
    memcpy(var0, &var1, 2);
    return 2;
}
