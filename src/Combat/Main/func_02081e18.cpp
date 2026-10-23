#include <globaldefs.h>

extern "C" int func_0204c7e0(unsigned char* arg0);
struct Struct_0204aa28;
extern "C" unsigned int func_0204aa28(Struct_0204aa28* arg0);

struct Struct_02081e18 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};

struct Struct_02081e18_2 {
    char unknown_0_[4];
    Struct_02081e18* unknown_4_;
    char unknown_8_[0xa0 - 8];
    unsigned int unknown_a0_;
    unsigned int unknown_a4_;
    char unknown_a8_[0xe0 - 0xa8];
};

struct Struct_020813ec {
#if defined(jpn)
    char unknown_0_[0x20];
#else
    char unknown1_0_[0x2c];
#endif
    int unknown_2c_;
    Struct_02081e18_2* unknown_30_;
    char unknown_34_[5];
    unsigned char unknown_39_;
};

extern "C" ARM unsigned int func_02081e18(Struct_020813ec* arg0, int arg1) {
    if (arg0->unknown_2c_ == 0 || arg0->unknown_30_ == 0) return 0;
    Struct_02081e18_2* var0;
    int var1;
    for (var1 = (int)arg0->unknown_39_ - 1; var1 >= 0; var1--) {
        var0 = &arg0->unknown_30_[var1];
        if (func_0204c7e0(reinterpret_cast<unsigned char*>(var0)) && var0->unknown_4_) {
            Struct_02081e18* var2 = var0->unknown_4_;
            if (arg1 == var2->unknown_1c_4_) {
                return var0->unknown_a0_ + var0->unknown_a4_;
            }
        }
    }
    return func_0204aa28(reinterpret_cast<Struct_0204aa28*>(arg0->unknown_30_->unknown_4_));
}
