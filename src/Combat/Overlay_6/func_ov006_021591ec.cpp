#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02154e58 func_ov006_021565b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov006_021591ec {
    unsigned char unknown_0_[R(0x48, 0x50)];
    unsigned short* unknown_50_;
    unsigned char unknown_54_[0x362 - R(0x4c, 0x54)];
    short unknown_362_;
};

// USA: func_ov006_021591ec
extern "C" ARM unsigned short func_ov006_021591ec(struct Struct_ov006_021591ec* arg0) {
    unsigned short var0 = 0;
    short var1 = arg0->unknown_362_ - 0x5b;
    if (var1 >= 0) {
        var0 = arg0->unknown_50_[var1];
    }
    return var0;
}
