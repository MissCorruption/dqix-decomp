#include <globaldefs.h>

struct Struct_020098fc {
    unsigned char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[0x20] __attribute__((aligned(1)));
};

// USA: func_02009d1c
extern "C" ARM int func_02009d1c(Struct_020098fc* arg0, Struct_020098fc* arg1) {
    unsigned char var0 = arg0->unknown_5_[0];
    if (var0 == 0) return arg1->unknown_5_[0] == 0;
    if (arg1->unknown_5_[0] == 0) return var0 == 0;
    if (arg0->unknown_2_ != arg1->unknown_2_) goto different;
    int var1;
    int var2;
    int var3;
    var3 = arg0->unknown_4_;
    int var4 = arg1->unknown_4_;
    var1 = 0;
    var2 = var3;
    if (var2 > var4) var2 = var4;
    if (var2 > 0) {
        do {
            if (arg0->unknown_5_[var1] != arg1->unknown_5_[var1]) return 0;
            var1++;
        } while (var1 < var2);
    }
    if (var2 == var3) arg0 = arg1;
    if (var1 < arg0->unknown_4_) {
        do {
            if (arg0->unknown_5_[var1]) return 0;
            var1++;
        } while (var1 < arg0->unknown_4_);
    }
    return 1;
different:
    return 0;
}
