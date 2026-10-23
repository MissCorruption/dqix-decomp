#include <globaldefs.h>

struct Struct_ov000_02160094 {
    char unknown_0_[0x30];
    struct Struct_ov000_02160094* unknown_30_;
};

struct Struct_ov000_0215440c_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    char unknown_9_[7];
    struct Struct_ov000_02160094* unknown_10_;
};

// USA: func_ov000_02160094
extern "C" ARM struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1) {
    struct Struct_ov000_02160094* var0;
    int var1;
    if (arg0->unknown_8_ <= arg1) return 0;
    var0 = arg0->unknown_10_;
    var1 = 0;
    while (var1 < arg1 && var0 != 0) {
        var0 = var0->unknown_30_;
        var1++;
    }
    return var0;
}
