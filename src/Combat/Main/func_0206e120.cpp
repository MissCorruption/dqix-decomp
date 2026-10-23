#include <globaldefs.h>

struct Struct_0205faf4_3 {
    unsigned char unknown_0_[0x2CC];
    unsigned char unknown_2cc_[1];
};

// USA: func_0206e120
extern "C" ARM int func_0206e120(struct Struct_0205faf4_3* arg0, int arg1) {
    int var0;
    if (arg1 >= 0xCC || arg1 < 0) {
        return 0;
    }
    var0 = arg1 / 2;
    if (arg1 % 2) {
        return (arg0->unknown_2cc_[var0] >> 4) & 3;
    }
    return arg0->unknown_2cc_[var0] & 3;
}
