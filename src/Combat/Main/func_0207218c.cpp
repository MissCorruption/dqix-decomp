#include <globaldefs.h>

struct Struct_0207218c {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 21;
    unsigned int unknown_12_5_ : 1;
    unsigned int unknown_12_6_ : 10;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
};

struct Struct_0207214c_2 {
    char unknown_0_[4];
    struct Struct_0207218c* unknown_4_;
    char unknown_8_[2];
    unsigned short unknown_a_;
};

// USA: func_0207218c
extern "C" ARM struct Struct_0207218c* func_0207218c(struct Struct_0207214c_2* arg0, int arg1) {
    unsigned short var0 = arg0->unknown_a_;
    struct Struct_0207218c* var1 = arg0->unknown_4_;
    struct Struct_0207218c* var2 = NULL;
    int var3 = 0x7fff;
    unsigned short var4 = 0;
    for (; var4 < var0; var4++) {
        struct Struct_0207218c* var5 = (struct Struct_0207218c*)((char*)var1 + (var4 << 5));
        if (var5->unknown_12_5_) {
            if (var5->unknown_18_ > arg1 && var3 > var5->unknown_18_) {
                if (var5->unknown_16_ <= 0) {
                    var3 = var5->unknown_18_;
                    var2 = var5;
                }
            }
        }
    }
    return var2;
}
