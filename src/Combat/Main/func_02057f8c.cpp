#include <globaldefs.h>

struct Struct_02057f8c {
    int unknown_0_;
    char unknown_4_[0x1e8];
    struct Struct_02057f8c* unknown_1ec_;
};

// USA: func_02057f8c
extern "C" ARM struct Struct_02057f8c* func_02057f8c(void* arg0, int arg1) {
    struct Struct_02057f8c* var0 = *(struct Struct_02057f8c**)arg0;
    while (var0 != 0) {
        if (arg1 == var0->unknown_0_) {
            return var0;
        }
        var0 = var0->unknown_1ec_;
    }
    return 0;
}
