#include <globaldefs.h>

struct Struct_ov014_02184f10 {
    char unknown_0_[0x48];
    int unknown_48_;
    int unknown_4c_;
    int unknown_50_;
    int unknown_54_;
    char unknown_58_[0x7c - 0x58];
    unsigned char unknown_7c_;
    char unknown_7d_[0x81 - 0x7d];
    unsigned char unknown_81_;
};

extern "C" void func_ov014_02184f78(struct Struct_ov014_02184f10* arg0, int arg1, int arg2, int arg3);

// USA: func_ov014_02184f10
extern "C" ARM void func_ov014_02184f10(struct Struct_ov014_02184f10* arg0, int arg1, int arg2) {
    if (!arg0->unknown_7c_) {
        return;
    }
    if (arg0->unknown_4c_ != arg0->unknown_48_) {
        arg0->unknown_4c_ = arg0->unknown_48_;
        arg0->unknown_54_ = arg0->unknown_50_;
        arg0->unknown_81_ |= 0x20;
    }
    if (arg1 == 0 || arg2 == 0) {
        arg0->unknown_48_ = arg1;
        return;
    }
    if (arg0->unknown_48_ == arg1 || arg0->unknown_50_ == arg2) {
        return;
    }
    func_ov014_02184f78(arg0, arg1, arg2, 1);
}
