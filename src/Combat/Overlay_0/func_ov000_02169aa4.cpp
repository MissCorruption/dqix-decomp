#include <globaldefs.h>

struct Struct_ov000_02169aa4 {
    unsigned short* unknown_0_;
    unsigned short unknown_4_;
    char unknown_6_[6];
    struct Struct_ov000_02169aa4* unknown_c_;
};

// USA: func_ov000_02169aa4
extern "C" ARM int func_ov000_02169aa4(struct Struct_ov000_02169aa4* arg0, unsigned short arg1, void** arg2, int arg3) {
    int var0 = 0;
    while (arg0 != 0) {
        int var1;
        for (var1 = 0; var1 < arg0->unknown_4_; var1++) {
            if (arg0->unknown_0_[var1] == arg1) {
                arg2[var0++] = arg0;
                if (var0 == arg3) break;
            }
        }
        arg0 = arg0->unknown_c_;
    }
    return var0;
}
