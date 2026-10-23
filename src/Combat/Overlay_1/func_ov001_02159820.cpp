#include <globaldefs.h>

struct Struct_ov001_02159820 { char unknown_0_[0x10]; int unknown_10_; int unknown_14_; };
struct Struct_ov001_02159820_2 { char unknown_0_[0x64]; int unknown_64_; char unknown_68_[0x24]; float unknown_8c_; char unknown_90_[0x84]; float unknown_114_; };

// USA: func_ov001_02159820
extern "C" ARM int func_ov001_02159820(Struct_ov001_02159820* arg0, Struct_ov001_02159820_2* arg1) {
    int var0 = arg0->unknown_14_;
    int var1 = arg1->unknown_64_;
    if (var1 >= var0) {
        arg1->unknown_8c_ = (float)arg0->unknown_10_;
        arg1->unknown_64_ = 0;
        return 0;
    }
    float var2 = arg1->unknown_8c_;
    if (var1 <= 0) {
        int var3 = arg0->unknown_10_ - (int)var2;
        if (var0 == 0) return 0;
        arg1->unknown_114_ = (float)var3 / (float)var0;
    } else {
        arg1->unknown_8c_ = var2 + arg1->unknown_114_;
    }
    arg1->unknown_64_ = arg1->unknown_64_ + 1;
    return 1;
}
