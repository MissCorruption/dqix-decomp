#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0204792c_3 {
    int unknown_0_;
    char* unknown_4_;
};

// USA: func_020480b8
extern "C" ARM int func_020480b8(struct Struct_0204792c_3* arg0, char* arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_0_; var0++) {
        if (strcmp(arg1, arg0->unknown_4_ + var0 * 30) == 0) return var0;
    }
    return 0;
}
