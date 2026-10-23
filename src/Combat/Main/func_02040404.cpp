#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02040404 {
    char unknown_0_[0x38];
    int unknown_38_;
};

struct Struct_0204027c_2 {
    unsigned int unknown_0_;
    int unknown_4_;
    struct Struct_02040404* unknown_8_;
};

// USA: func_02040404
extern "C" ARM int func_02040404(struct Struct_0204027c_2* arg0, const char* arg1) {
    unsigned int var0;
    struct Struct_02040404* var1 = arg0->unknown_8_;
    if (var1 == NULL) {
        return -1;
    }
    for (var0 = 0; var0 < arg0->unknown_0_; var0++) {
        if (var1[var0].unknown_38_ < 0) {
            continue;
        }
        if (strcmp((char*)&var1[var0], arg1) == 0) {
            return var0;
        }
    }
    return -1;
}
