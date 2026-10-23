#include <globaldefs.h>

struct Struct_020d3d90_2 {
#if defined(jpn)
    unsigned char unknown_0_[0xb];
#else
    unsigned char unknown1_0_[0x10];
#endif
    unsigned char unknown_10_0_ : 3;
    unsigned char : 5;
#if defined(jpn)
    unsigned char unknown_c_[0x14];
#else
    unsigned char unknown_11_[0x13];
#endif
};

struct Struct_020d3d90 {
    struct Struct_020d3d90_2 unknown_0_[5];
    int unknown_b4_;
};

// USA: func_020d3d90
extern "C" ARM struct Struct_020d3d90_2* func_020d3d90(struct Struct_020d3d90* arg0, int arg1) {
    struct Struct_020d3d90_2* var0 = arg0->unknown_0_;
    int var1;
    for (var1 = 0; var1 < arg0->unknown_b4_; var1++) {
        if (var0->unknown_10_0_ == arg1) return var0;
        var0++;
    }
    return NULL;
}
