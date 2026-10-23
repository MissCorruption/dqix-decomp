#include <globaldefs.h>

struct Struct_0203e63c {
    unsigned short* unknown_0_;      // 0x0
    unsigned short unknown_4_;  // 0x4
    unsigned short unknown_6_;     // 0x6
    unsigned short unknown_8_;      // 0x8
    unsigned short unknown_a_;      // 0xa
};

// USA: func_0203e63c
extern "C" ARM unsigned char func_0203e63c(Struct_0203e63c* arg0, unsigned int arg1) {
    unsigned int var0;
    int var1, var2;
    if (!(arg1 & 0x8000)) return 0;
    var1 = 0;
    var2 = arg0->unknown_8_;
    var0 = (unsigned short)(arg1 & arg0->unknown_a_);
    for (; var2 > 0; ) {
        int var3;
        var2 >>= 1;
        var3 = var1 + var2;
        if ((unsigned int)var3 < arg0->unknown_6_) {
            unsigned short var4 = arg0->unknown_0_[var3];
            int var5;
            if (var0 == var4) var5 = 0;
            else if (var0 < var4) var5 = -1;
            else var5 = 1;
            if (var5 == 0) return var3;
            if (var5 > 0) var1 += var2;
        }
    }
    return 0;
}
