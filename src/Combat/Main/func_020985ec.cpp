#include <globaldefs.h>

struct Struct_020985ec {
    unsigned char unknown_0_[0x10];
    unsigned int unknown_10_;
    unsigned char unknown_14_[0xd4];
};

// USA: func_020985ec
extern "C" ARM struct Struct_020985ec* func_020985ec(struct Struct_020985ec* arg0, int arg1) {
    int var0;
    if (arg1 < 0) {
        return 0;
    }
    for (var0 = 0; var0 < 30; var0++) {
        if ((arg0[var0].unknown_10_ >> 2) == arg1) {
            return &arg0[var0];
        }
    }
    return 0;
}
