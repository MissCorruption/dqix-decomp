#include <globaldefs.h>

struct Struct_ov003_021705d4 {
    char unknown_0_[1];
    signed char unknown_1_;
    char unknown_2_[4];
    signed char unknown_6_;
    char unknown_7_[0x19];
    unsigned short unknown_20_;
};

// USA: func_ov003_021705d4
#pragma optimize_for_size off
extern "C" ARM void func_ov003_021705d4(struct Struct_ov003_021705d4* arg0, unsigned short* arg1, unsigned short* arg2) {
    if (arg0->unknown_1_ == 5) {
        if ((arg0->unknown_20_ & 4) == 0 || (arg0->unknown_6_ >= 0 && arg0->unknown_6_ <= 3)) {
            *arg1 = 4;
            *arg2 = (arg0->unknown_6_ << 4) + 0x2b;
            return;
        }
        *arg1 = 0;
        *arg2 = 0;
        return;
    }
    *arg1 = 0;
    *arg2 = 0;
}
