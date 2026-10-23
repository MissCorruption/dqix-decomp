#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069efc { void* unknown_0_; };

// USA: func_02069efc
extern "C" ARM int func_02069efc(struct Struct_02069efc* arg0) {
    void* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff15;
    memcpy(var0, &var1, 2);
    return 2;
}
