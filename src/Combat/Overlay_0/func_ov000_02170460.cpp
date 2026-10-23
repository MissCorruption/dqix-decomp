#include <globaldefs.h>

struct Struct_ov000_02170460 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[0x40 - 0x25];
    float unknown_40_;
    char unknown_44_[0x4c - 0x44];
    int unknown_4c_;
};

// USA: func_ov000_02170460
extern "C" ARM void func_ov000_02170460(struct Struct_ov000_02170460* arg0, int arg1) {
    if (arg0->unknown_4c_ < 0) return;
    if (arg1 <= 0) arg1 = 1;
    if (arg0->unknown_24_ & 8) {
        float var0 = arg0->unknown_40_ + (float)arg1 * 0.2f;
        if (3.1415926f < (arg0->unknown_40_ = var0)) {
            arg0->unknown_40_ = 3.1415926f;
        }
    } else {
        arg0->unknown_40_ = 0.0f;
    }
}
