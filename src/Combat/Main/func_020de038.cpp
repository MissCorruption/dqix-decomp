#include <globaldefs.h>

extern "C" int func_020c3260(int);
extern "C" float func_0200c700(int);
extern "C" int fix32_Divide(unsigned int, unsigned int);

struct Struct_020de038 {
    char unknown_0_[4];
    unsigned char unknown_4_;
    char unknown_5_[0xb];
    int unknown_10_;
    char unknown_14_[8];
    int unknown_1c_;
};

// USA: func_020de038
extern "C" ARM void func_020de038(struct Struct_020de038* arg0) {
    float var0;
    int var1;
    int var2;

    arg0->unknown_1c_ = arg0->unknown_1c_ + 0x800;
    var0 = func_0200c700(func_020c3260(arg0->unknown_1c_)) / 4294967296.0f;
    var1 = (int)(var0 * 4096.0f);
    var2 = fix32_Divide(
        (unsigned int)(((long long)(0xc800 - arg0->unknown_1c_) * var1 + 0x800) >> 12), 0x3000);
    arg0->unknown_10_ = (int)((float)var2 / 4096.0f);
    if (arg0->unknown_1c_ >= 0xc800) {
        arg0->unknown_1c_ = 0;
        arg0->unknown_4_ = 1;
    }
}
