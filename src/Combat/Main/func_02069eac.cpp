#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02069eac { void* unknown_0_; };

// USA: func_02069eac
extern "C" ARM int func_02069eac(struct Struct_02069eac* arg0) {
    void* var0 = arg0->unknown_0_;
    unsigned short var1 = 0xff2f;
    memcpy(var0, &var1, 2);
    return 2;
}
