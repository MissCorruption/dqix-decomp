#include <globaldefs.h>

struct Struct_0204c87c {
    char unknown_0_[0x9c];        // 0x00
    int unknown_9c_;                // 0x9c
    unsigned int unknown_a0_;        // 0xa0
    char unknown_a4_[4];         // 0xa4
    short unknown_a8_;               // 0xa8 (width)
    short unknown_aa_;               // 0xaa (height)
    char unknown_ac_[0x19];      // 0xac..0xc4
    unsigned char unknown_c5_;       // 0xc5 (flags)
    char unknown_c6_[0xe];       // 0xc6..0xd3
    unsigned short *unknown_d4_;     // 0xd4 (buffer)
};

// USA: func_0204e998
extern "C" ARM void func_0204e998(struct Struct_0204c87c *arg0) {
    unsigned short var0;
    unsigned short *var1;
    short var2, var3;
    if ((arg0->unknown_c5_ & 1) && arg0->unknown_d4_ != NULL) {
        var1 = arg0->unknown_d4_;
        var0 = arg0->unknown_a0_ >> 5;
        for (var2 = 0; var2 < arg0->unknown_aa_; var2++) {
            for (var3 = 0; var3 < arg0->unknown_a8_; var3++) {
                var1[var3] = var0;
                var0++;
            }
            var1 += arg0->unknown_a8_;
        }
        arg0->unknown_9c_++;
    }
}
