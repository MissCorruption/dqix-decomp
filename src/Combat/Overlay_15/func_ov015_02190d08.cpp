#include <globaldefs.h>

struct Struct_ov015_02190d08 {
    char unknown_0_[0x1a4];
    int unknown_1a4_;
};

// USA: func_ov015_02190d08
extern "C" ARM int func_ov015_02190d08(struct Struct_ov015_02190d08* arg0) {
    int var0 = arg0->unknown_1a4_;
    if (var0 == 0x11) return 1;
    if (var0 == 0x14) return 1;
    if (var0 == 0x17) return 1;
    if (var0 == 0x18) return 1;
    if (var0 == 0x19) return 1;
    if (var0 == 0x1a) return 1;
    if (var0 == 0x1b) return 1;
    if (var0 == 0x1c) return 1;
    return var0 == 0x16;
}
