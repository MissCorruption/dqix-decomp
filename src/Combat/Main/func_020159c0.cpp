#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020159c0_1143 = 0x497 };
#else
enum { Enum_020159c0_1143 = 0x477 };
#endif


struct Struct_020159c0 {
    unsigned char unknown_0_[0x14];
    signed char unknown_14_;
    unsigned char unknown_15_[0xb];
    int unknown_20_;
};

struct Struct_020159c0_2 {
    unsigned char unknown_0_[Enum_020159c0_1143];
    unsigned char unknown_477_;
    unsigned char unknown_478_[4];
    struct Struct_020159c0* unknown_47c_;
    unsigned char unknown_480_[0x820 - 0x480];
    int unknown_820_;
};

// USA: func_020159c0
extern "C" ARM void func_020159c0(struct Struct_020159c0_2* arg0, int arg1) {
    int var0;
    int var1;
    if (arg1 >= 0 && arg1 <= 3) {
        var0 = 1;
    } else {
        var0 = 0;
    }
    if (var0 == 0) {
        return;
    }
    for (var1 = 0; var1 < arg0->unknown_477_; var1++) {
        struct Struct_020159c0* var2 = &arg0->unknown_47c_[var1];
        if (var2->unknown_20_ != 0 && var2->unknown_14_ == arg1) {
            var2->unknown_20_ = 0;
            arg0->unknown_820_ = 0;
        }
    }
}
