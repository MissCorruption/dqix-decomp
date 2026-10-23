#include <globaldefs.h>

#include <World/Object3D.h>

struct Struct_020e77cc {
    int unknown_0_[12];
};

struct Struct_020e77b0 {
    signed char unknown_0_[12];
};

struct Struct_020e77bc {
    unsigned char unknown_0_[2][7];
};

extern const Struct_020e77cc data_020e77cc;
extern const Struct_020e77b0 data_020e77b0;
extern const Struct_020e77bc data_020e77bc;
extern const char *const data_020ef978[7];
extern const char data_020efa40[];
extern const char *const data_020ef994[12];

struct Struct_02033ba0 {
    Object3D unknown_0_;
    unsigned char unknown_ac_[0xc0 - 0xac];
    unsigned char unknown_c0_;
    unsigned char unknown_c1_0_ : 4;
    unsigned char unknown_c1_4_ : 4;
    unsigned char unknown_c2_[0xe0 - 0xc2];
    unsigned char unknown_e0_0_ : 1;
    unsigned char unknown_e0_1_ : 1;
};

// USA: func_02033ba0
extern "C" ARM void func_02033ba0(void *arg0, int arg1) {
    Struct_02033ba0 *var0 = static_cast<Struct_02033ba0 *>(arg0);
    if (arg1 < 0) {
        return;
    }
    Struct_020e77cc var1      = data_020e77cc;
    Struct_020e77b0 var2 = data_020e77b0;
    if (arg1 == 0) {
        unsigned int var3 = var0->unknown_c1_4_;
        if (var3 < 7) {
            Struct_020e77bc var4 = data_020e77bc;
            int var5               = 0;
            if (var0->unknown_0_.unknown_4_ >= 0xc0 && var0->unknown_0_.unknown_4_ <= 0xc7) {
                var5 = 1;
            }
            if (!var0->unknown_0_.MaybeSetRegularAnimation(data_020ef978[var4.unknown_0_[var5][var3]], 0x10)) {
                var0->unknown_0_.MaybeSetRegularAnimation(data_020efa40, 0);
            }
            if (var0->unknown_e0_1_) {
                var0->unknown_0_.EnableFlag(0x40000);
            }
        }
    } else {
        var0->unknown_0_.MaybeSetRegularAnimation(data_020ef994[arg1], var1.unknown_0_[arg1]);
        int var6 = var2.unknown_0_[arg1];
        if (var6 > -1) {
            arg1 = var6;
        }
    }
    var0->unknown_c0_ = arg1;
}
