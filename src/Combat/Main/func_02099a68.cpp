#include <globaldefs.h>

struct Struct_02099a68_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[12];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

struct Struct_02099a68 {
    struct Struct_02099a68_2* unknown_0_;
    int unknown_4_;
};

// USA: func_02099a68
extern "C" ARM int func_02099a68(struct Struct_02099a68* arg0, unsigned short arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (arg1 == arg0->unknown_0_[var0].unknown_0_) {
            unsigned int var1 = arg0->unknown_0_[var0].unknown_e_;
            var1 = (var1 << 26) >> 28;
            if (var1 == 8) return 0;
            return 1 << var1;
        }
    }
    return 0;
}
