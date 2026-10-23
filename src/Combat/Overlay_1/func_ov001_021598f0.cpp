#include <globaldefs.h>

extern "C" ARM int fix32_Divide(unsigned int arg0, unsigned int arg1);

struct Struct_ov001_021598f0 { char unknown_0_[0x10]; int unknown_10_; int unknown_14_; };
struct Struct_ov001_021598f0_2 { char unknown_0_[0x68]; int unknown_68_; char unknown_6c_[0x90 - 0x6c]; int unknown_90_; char unknown_94_[0x118 - 0x94]; int unknown_118_; };

// USA: func_ov001_021598f0
extern "C" ARM int func_ov001_021598f0(struct Struct_ov001_021598f0* arg0, struct Struct_ov001_021598f0_2* arg1) {
    int var0 = arg0->unknown_14_;
    int var1 = arg1->unknown_68_;
    if (var1 >= var0) {
        arg1->unknown_90_ = arg0->unknown_10_;
        arg1->unknown_68_ = 0;
        return 0;
    }
    if (var1 <= 0) {
        int var2 = arg0->unknown_10_ - arg1->unknown_90_;
        if (var0 == 0) {
            return 0;
        }
        arg1->unknown_118_ = fix32_Divide(var2, var0 << 12);
    } else {
        arg1->unknown_90_ += arg1->unknown_118_;
    }
    arg1->unknown_68_ = arg1->unknown_68_ + 1;
    return 1;
}
