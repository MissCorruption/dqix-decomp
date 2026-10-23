#include <globaldefs.h>

struct Struct_02072238 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 21;
    unsigned int unknown_12_5_ : 1;
    unsigned int unknown_12_6_ : 10;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
};

struct Struct_020721f8_2 {
    char unknown_0_[4];
    struct Struct_02072238* unknown_4_;
    char unknown_8_[2];
    unsigned short unknown_a_;
};

// USA: func_02072238
extern "C" ARM struct Struct_02072238* func_02072238(struct Struct_020721f8_2* arg0, int arg1) {
    unsigned short var0 = arg0->unknown_a_;
    struct Struct_02072238* var1 = arg0->unknown_4_;
    struct Struct_02072238* var2 = NULL;
    int var3 = 0x7fff;
    unsigned short var4 = 0;
    for (; var4 < var0; var4++) {
        struct Struct_02072238* var5 = (struct Struct_02072238*)((char*)var1 + (var4 << 5));
        if (var5->unknown_12_5_) {
            if (var5->unknown_1a_ > arg1 && var3 > var5->unknown_1a_) {
                if (var5->unknown_16_ <= 0) {
                    var3 = var5->unknown_1a_;
                    var2 = var5;
                }
            }
        }
    }
    return var2;
}
