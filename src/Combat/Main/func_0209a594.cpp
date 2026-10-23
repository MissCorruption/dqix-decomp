#include <globaldefs.h>

struct Struct_0209a594_2 {
    #if defined(jpn)
    unsigned short unknown_0_0_ : 12;
    unsigned short unknown_1_4_ : 4;
#else
    unsigned short unknown_0_0_ : 11;
    unsigned short unknown_1_3_ : 5;
#endif
    char unknown_2_[10];
};

struct Struct_0209a594 {
    struct Struct_0209a594_2* unknown_0_;
    int unknown_4_;
};

// USA: func_0209a594
extern "C" ARM struct Struct_0209a594_2* func_0209a594(struct Struct_0209a594* arg0, int arg1) {
    int var0;
    struct Struct_0209a594_2* var1 = arg0->unknown_0_;
    if (var1 == 0) return 0;
    if (arg1 >= 0x11f) return 0;
    if (var1[arg1].unknown_0_0_ == arg1) {
        return &var1[arg1];
    }
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (var1[var0].unknown_0_0_ == arg1) {
            return &var1[var0];
        }
    }
    return 0;
}
