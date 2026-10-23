#include <globaldefs.h>

struct Struct_0206e2a0 {
    unsigned char unknown_0_[0x2CC];
    unsigned char unknown_2cc_[1];
};

// USA: func_0206e2a0
extern "C" ARM void func_0206e2a0(struct Struct_0206e2a0* arg0, int arg1) {
    int var0;
    if (arg1 >= 0xCC || arg1 < 0) {
        return;
    }
    var0 = arg1 / 2;
    arg0->unknown_2cc_[var0] |= (arg1 % 2) ? 0x80 : 0x8;
}
