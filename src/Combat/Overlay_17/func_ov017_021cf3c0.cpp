#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cf3c0 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov017_021cf3c0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    short unknown_10_;
    unsigned char unknown_12_0_ : 1;
    unsigned char unknown_12_1_ : 1;
    unsigned char unknown_12_2_ : 6;
    signed char unknown_13_;
};

// USA: func_ov017_021cf3c0
extern "C" ARM void func_ov017_021cf3c0(struct Struct_ov017_021cf3c0 arg0, short arg1, unsigned char arg2, unsigned char arg3, signed char arg4) {
    void* var0 = func_0202ae24();
    struct Struct_ov017_021cf3c0_2 var1;
    var1.unknown_0_ = 0x38;
    var1.unknown_4_ = arg0.unknown_0_;
    var1.unknown_8_ = arg0.unknown_4_;
    var1.unknown_c_ = arg0.unknown_8_;
    var1.unknown_10_ = arg1;
    var1.unknown_12_0_ = arg2;
    var1.unknown_12_1_ = arg3;
    var1.unknown_13_ = arg4;
    func_0205e330(var0, &var1, 0);
}
