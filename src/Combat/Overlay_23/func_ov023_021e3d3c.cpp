#include <globaldefs.h>

struct Struct_ov023_021e3d3c_2 {
    short unknown_0_;
    char unknown_2_[0x16 - 0x2];
    unsigned char unknown_16_;
    char unknown_17_[0x18 - 0x17];
};

struct Struct_ov023_021e3d3c {
    char unknown_0_[0x8];
    struct Struct_ov023_021e3d3c_2* unknown_8_;
    char unknown_c_[0x14 - 0xc];
    unsigned short unknown_14_;
};

// USA: func_ov023_021e3d3c
extern "C" ARM void func_ov023_021e3d3c(struct Struct_ov023_021e3d3c* arg0, short arg1, int arg2) {
    struct Struct_ov023_021e3d3c_2* var0;
    unsigned short var1;
    unsigned short var2;
    struct Struct_ov023_021e3d3c_2* var3 = arg0->unknown_8_;
    if (var3 == 0) {
        var0 = 0;
        goto DONE;
    }
    var2 = arg0->unknown_14_;
    if (var2 == 0) {
        var0 = 0;
        goto DONE;
    }
    var1 = 0;
    goto CHECK;
LOOP:
    {
        short var4 = var3[var1].unknown_0_;
        if (var4 == arg1) {
            var0 = &var3[var1];
            goto DONE;
        }
    }
    var1 = var1 + 1;
CHECK:
    if (var1 < var2) goto LOOP;
    var0 = 0;
DONE:
    if (var0 != 0) {
        var0->unknown_16_ = var0->unknown_16_ & ~arg2;
    }
}
