#include <globaldefs.h>

struct Struct_0203e6c8 {
    unsigned short* unknown_0_;      // 0x0
    unsigned short unknown_4_;  // 0x4
    unsigned short unknown_6_;     // 0x6
    unsigned short unknown_8_;      // 0x8
    unsigned short unknown_a_;      // 0xa
};

// USA: func_0203e6c8
extern "C" ARM int func_0203e6c8(Struct_0203e6c8* arg0, unsigned int arg1) {
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
            if (var5 >= 0) var1 += var2;
        }
    }
    {
        unsigned short* var6;
        unsigned int var7 = arg0->unknown_6_;
        if (var7 >= arg0->unknown_4_) return -1;
        var6 = &arg0->unknown_0_[var7];
        while (var7 > (unsigned int)(var1 + 1)) {
            *var6 = var6[-1];
            var6--;
            var7--;
        }
        *var6 = var0;
        arg0->unknown_6_++;
        if (arg0->unknown_8_ < arg0->unknown_6_) {
            volatile unsigned short* var8 = &arg0->unknown_8_;
            *var8 = *var8 << 1;
        }
        return var1 + 1;
    }
}
