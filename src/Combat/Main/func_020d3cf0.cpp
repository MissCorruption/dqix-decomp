#include <globaldefs.h>

#if defined(jpn)
struct Struct_020d3cf0_2 { unsigned char unknown_0_[11]; };
#else
struct Struct_020d3cf0_2 { unsigned char unknown_0_[16]; };
#endif

struct Struct_020d39dc_3 {
    struct Struct_020d3cf0_2 unknown_0_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned int unknown_1c_;
    unsigned short unknown_20_;
    unsigned short unknown_22_;
};

struct Struct_020d3cf0 {
    struct Struct_020d39dc_3 unknown_0_[5];
    int unknown_b4_;
};

// USA: func_020d3cf0
extern "C" ARM void func_020d3cf0(struct Struct_020d3cf0* arg0, struct Struct_020d39dc_3* arg1) {
    int var0 = arg0->unknown_b4_;
    struct Struct_020d39dc_3* var1;
    if (var0 >= 5) return;
#if defined(jpn)
    arg0->unknown_b4_ = var0 + 1;
    var1 = &arg0->unknown_0_[var0];
#else
    var1 = &arg0->unknown_0_[var0];
    arg0->unknown_b4_ = var0 + 1;
#endif
    var1->unknown_0_ = arg1->unknown_0_;
    var1->unknown_10_ = arg1->unknown_10_;
    var1->unknown_11_ = arg1->unknown_11_;
    var1->unknown_12_ = arg1->unknown_12_;
    var1->unknown_13_ = arg1->unknown_13_;
    var1->unknown_14_ = arg1->unknown_14_;
    var1->unknown_18_ = arg1->unknown_18_;
    var1->unknown_1c_ = arg1->unknown_1c_;
    var1->unknown_20_ = arg1->unknown_20_;
    var1->unknown_22_ = arg1->unknown_22_;
}
