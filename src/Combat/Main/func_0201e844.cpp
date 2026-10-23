#include <globaldefs.h>

struct Struct_020130b0 {
    unsigned short unknown_0_;
    char unknown_2_[0x6e];
    struct Struct_020130b0* unknown_70_;
};

// USA: func_0201e844
extern "C" ARM struct Struct_020130b0* func_0201e844(void* arg0, int arg1, int arg2) {
    struct Struct_020130b0* var0;
    if (arg2 < 0) {
        return 0;
    }
    var0 = *(struct Struct_020130b0**)((char*)arg0 + arg1 * 4 + 0x3c);
    while (var0 != 0) {
        if (var0->unknown_0_ == arg2) {
            return var0;
        }
        var0 = var0->unknown_70_;
    }
    return var0;
}
