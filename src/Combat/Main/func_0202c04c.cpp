#include <globaldefs.h>

extern "C" int func_020d4ac8(void);

struct Struct_0202c04c_3 {
    int unknown_0_;
    int unknown_4_;
};

inline Struct_0202c04c_3& inline_0202c04c() {
    static Struct_0202c04c_3 s;
    return s;
}

struct Struct_0202c04c {
    unsigned short unknown_0_0_ : 3;
    unsigned short unknown_0_3_ : 2;
    unsigned short unknown_0_5_ : 3;
    unsigned short unknown_1_0_ : 8;
    unsigned short unknown_2_0_ : 5;
    unsigned short unknown_2_5_ : 2;
    unsigned short unknown_2_7_ : 2;
    unsigned short unknown_3_1_ : 2;
};

struct Struct_0202c04c_2 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[0x7b4];
    Struct_0202c04c unknown_7c0_;
    char unknown_7c4_[0x7fc];
    int unknown_fc0_;
    char unknown_fc4_[0x40];
    int unknown_1004_;
    int unknown_1008_;
    char unknown_100c_[0x2c];
    char unknown_1038_;
    signed char unknown_1039_;
    signed char unknown_103a_;
    signed char unknown_103b_;
};

// USA: func_0202c04c
extern "C" ARM void func_0202c04c(Struct_0202c04c_2* arg0) {
    if (arg0->unknown_fc0_ != 0) {
        return;
    }
    arg0->unknown_7c0_.unknown_0_0_ = 1;
    inline_0202c04c().unknown_0_++;
    arg0->unknown_7c0_.unknown_0_5_ = (unsigned short)arg0->unknown_1004_;
    Struct_0202c04c* var0 = &arg0->unknown_7c0_;
    arg0->unknown_7c0_.unknown_0_3_ = (unsigned short)func_020d4ac8();

    int var1 = arg0->unknown_1008_;
    if (var1 != -1) {
        var0->unknown_0_5_ = (unsigned short)var1;
        arg0->unknown_1008_ = -1;
    }

    int var2 = arg0->unknown_8_;
    if (var2 != 0) {
        if (var2 > 0) {
            arg0->unknown_8_ = 1 - var2;
        } else {
            arg0->unknown_8_ = -1 - var2;
        }
    }

    var0->unknown_2_5_ = arg0->unknown_1039_;
    var0->unknown_2_7_ = arg0->unknown_103a_;
    var0->unknown_3_1_ = arg0->unknown_103b_;
}
