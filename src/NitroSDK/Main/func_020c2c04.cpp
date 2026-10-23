#include <globaldefs.h>

extern "C" int fix32_GetSqrtResult(void);

struct Struct_020c2c04 {
    volatile unsigned short unknown_0_;
    unsigned char unknown_2_[6];
    volatile int unknown_8_;
    volatile int unknown_c_;
};

// USA: func_020c2c04
extern "C" ARM int fix32_Sqrt(int arg0) {
    struct Struct_020c2c04* var0;
    if (arg0 <= 0) return 0;
    var0 = (struct Struct_020c2c04*)0x40002b0;
    var0->unknown_0_ = 1;
    var0->unknown_8_ = 0;
    var0->unknown_c_ = arg0;
    return fix32_GetSqrtResult();
}
