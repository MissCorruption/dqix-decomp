#include <globaldefs.h>

struct Struct_020ee798 {
    short unknown_0_;
    short unknown_2_;
};

extern struct Struct_020ee798 data_020ee798[];
extern struct Struct_020ee798 data_020ee7c8[];

struct Struct_020dee58 {
    unsigned char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
    unsigned int unknown_9_1_ : 23;
};

// USA: func_020dee58
extern "C" ARM short func_020dee58(struct Struct_020dee58* arg0) {
    struct Struct_020ee798* var0;
    short var1;
    if (arg0 == NULL) {
        return 0x13;
    }
    var1 = arg0->unknown_8_4_;
    var0 = data_020ee7c8;
    if (arg0->unknown_8_0_ != 0) {
        var1 = arg0->unknown_8_0_;
        var0 = data_020ee798;
    }
    while (var0->unknown_0_ >= 0) {
        if (var0->unknown_0_ == var1) {
            return var0->unknown_2_;
        }
        var0++;
    }
    return 0x13;
}
