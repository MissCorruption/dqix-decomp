#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02040184 {
    char* unknown_0_;
    char unknown_4_[0x10];
};
struct Struct_0203f0fc_2 {
    void* unknown_0_;
    char unknown_4_[0x14];
    unsigned int unknown_18_;
    Struct_02040184* unknown_1c_;
};

// USA: func_02040184
extern "C" ARM int func_02040184(Struct_0203f0fc_2* arg0, const char* arg1) {
    unsigned int var0;
    if (arg0->unknown_0_ == NULL)
        return -1;
    for (var0 = 0; var0 < arg0->unknown_18_; var0++) {
        if (strcmp(arg1, arg0->unknown_1c_[var0].unknown_0_) == 0)
            return var0;
    }
    return -1;
}
