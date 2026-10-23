#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c95ec {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov017_021c95ec_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned char unknown_6_0_ : 6;
    unsigned char unknown_6_6_ : 1;
    unsigned char unknown_6_7_ : 1;
    unsigned char unknown_7_0_ : 4;
    signed char unknown_7_4_ : 4;
    short unknown_8_;
    short unknown_a_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_ov017_021c95ec
extern "C" ARM void func_ov017_021c95ec(int arg0, int arg1, int arg2, int arg3, int arg4,
                                        struct Struct_ov017_021c95ec arg5, int arg6, unsigned char arg7, unsigned char arg8) {
    void* var0 = func_0202ae24();
    struct Struct_ov017_021c95ec_2 var1;
    var1.unknown_7_0_ = arg1;
    var1.unknown_7_4_ = arg4;
    var1.unknown_c_ = arg5.unknown_0_;
    var1.unknown_6_0_ = arg3;
    var1.unknown_6_6_ = arg7;
    var1.unknown_6_7_ = arg8;
    var1.unknown_4_ = arg0;
    var1.unknown_0_ = 0x87;
    var1.unknown_a_ = arg5.unknown_4_ >> 4;
    var1.unknown_10_ = arg5.unknown_8_;
    var1.unknown_8_ = arg6;
    func_0205e330(var0, &var1, 0);
}
