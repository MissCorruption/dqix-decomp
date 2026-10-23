#include <globaldefs.h>

struct Struct_0203c6b8 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[3];
};

struct Struct_0203c108 {
    int unknown_0_;
    struct Struct_0203c6b8 unknown_4_[32];
    char unknown_504_[0xE];
    unsigned short unknown_512_;
};

// USA: func_0203c6b8
extern "C" ARM void func_0203c6b8(struct Struct_0203c108* arg0, short arg1) {
    struct Struct_0203c6b8* var0;
    unsigned char var1;
    if (arg1 < 0) {
        return;
    }
    var0 = &arg0->unknown_4_[arg1];
    var1 = var0->unknown_24_;
    if (var1 == 0) {
        var0->unknown_24_ = 1;
        arg0->unknown_512_++;
    } else {
        var0->unknown_24_ = var1 + 1;
    }
}
