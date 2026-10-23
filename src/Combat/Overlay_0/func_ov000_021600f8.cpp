#include <globaldefs.h>

struct Struct_ov000_021600f8 {
    char unknown_0_[0x20];
    struct Struct_ov000_021600f8* unknown_20_;
};

struct Struct_ov000_0215440c {
    char unknown_0_[9];
    unsigned char unknown_9_;
    char unknown_a_[10];
    struct Struct_ov000_021600f8* unknown_14_;
};

// USA: func_ov000_021600f8
extern "C" ARM struct Struct_ov000_021600f8* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1) {
    struct Struct_ov000_021600f8* var0;
    int var1;
    if (arg0->unknown_9_ <= arg1) return 0;
    var0 = arg0->unknown_14_;
    var1 = 0;
    while (var1 < arg1 && var0 != 0) {
        var0 = var0->unknown_20_;
        var1++;
    }
    return var0;
}
