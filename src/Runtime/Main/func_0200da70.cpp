#include <globaldefs.h>

struct Struct_0200da70 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    int unknown_8_;
};

// USA: func_0200da70
extern "C" ARM void* func_0200da70(struct Struct_0200da70* arg0, int arg1, unsigned int arg2) {
    int var0 = 0;
    int var1 = arg1 - 1;
    if (var1 < 0) goto notfound;
    do {
        int var2 = (var0 + var1) >> 1;
        struct Struct_0200da70* var3 = &arg0[var2];
        if (arg2 < var3->unknown_0_) {
            var1 = var2 - 1;
        } else {
            unsigned int var4 = var3->unknown_0_ + (var3->unknown_4_ & ~1);
            if (arg2 > var4) {
                var0 = var2 + 1;
            } else {
                return var3;
            }
        }
    } while (var0 <= var1);
notfound:
    return 0;
}
