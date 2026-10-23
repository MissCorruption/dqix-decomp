#include <globaldefs.h>

struct Struct_0205faf4_13 {
    unsigned char unknown_0_[0x2CC];
    unsigned char unknown_2cc_[1];
};

// USA: func_0206e2dc
extern "C" ARM int func_0206e2dc(struct Struct_0205faf4_13* arg0, int arg1) {
    int var0;
    if (arg1 >= 0xCC || arg1 < 0) {
        return 0;
    }
    var0 = (arg1 % 2) ? 0x80 : 0x8;
    return var0 & arg0->unknown_2cc_[arg1 / 2];
}
