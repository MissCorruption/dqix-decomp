#include <globaldefs.h>

struct Struct_020e1eb0_2 {
    char unknown_0_[0x38];
    unsigned char unknown_38_;
    unsigned char unknown_39_;
};

struct Struct_020e1eb0 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_020e1e4c {
    char unknown_0_[4];
    struct Struct_020e1eb0_2* unknown_4_;
    signed char unknown_8_;
    char unknown_9_;
    struct Struct_020e1eb0 unknown_a_[1];
};

// USA: func_020e1eb0
extern "C" ARM int func_020e1eb0(struct Struct_020e1e4c* arg0, int arg1, int arg2) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_8_; var0++) {
        struct Struct_020e1eb0_2* var1 = arg0->unknown_4_;
        int var2 = var1->unknown_38_ + arg0->unknown_a_[var0].unknown_0_;
        int var3 = var1->unknown_39_ + arg0->unknown_a_[var0].unknown_2_;
        int var4 = var1->unknown_38_ + arg0->unknown_a_[var0].unknown_4_;
        int var5 = var1->unknown_39_ + arg0->unknown_a_[var0].unknown_6_;
        if (var2 <= arg1 && arg1 <= var4 && var3 <= arg2 && arg2 <= var5) {
            return var0;
        }
    }
    return -1;
}
