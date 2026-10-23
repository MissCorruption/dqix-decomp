#include <globaldefs.h>

struct Struct_020df77c_2 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_020df77c_3 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[6];
    Struct_020df77c_2 *unknown_8_;
    int unknown_c_;
};

struct Struct_020df77c {
    short unknown_0_;
    short unknown_2_;
    int unknown_4_;
};

// USA: func_020df77c
extern "C" ARM int func_020df77c(Struct_020df77c_3 *arg0, Struct_020df77c *arg1) {
    int var0 = arg1->unknown_4_;
    if (var0 == -1) {
        arg1->unknown_4_ = 0;
    } else {
        int var1;
        Struct_020df77c_2 *var2 = arg0->unknown_8_ + arg0->unknown_0_ + var0;
        arg1->unknown_4_ = (int)var2;
        var1 = arg1->unknown_2_;
        for (int var3 = 0; var3 < var1; var3++) {
            int var4 = 1;
            int var5 = (int)((char *)var2->unknown_4_ - (char *)0);
            if (var5 != -1) {
                if (arg0->unknown_c_ != 0) {
                    var4 = 0;
                }
            }
            var2->unknown_4_ = var4 ? 0 : arg0->unknown_c_ + var5;
            var2++;
        }
    }
    return 1;
}
