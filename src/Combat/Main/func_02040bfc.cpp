#include <globaldefs.h>

struct Struct_02040bfc {
    char unknown_0_[0x8c];
    int unknown_8c_;
};

struct Struct_02040bfc_2 {
    char unknown_0_[0xc8];
    int unknown_c8_;
};

struct Struct_02040bfc_3 {
#if defined(jpn)
    char unknown_0_[0x2e0];
#else
    char unknown1_0_[0x2ec];
#endif
    int unknown_2ec_;
};

struct Struct_0203d028_22 {
    char unknown_0_[0x14];
    struct Struct_02040bfc* unknown_14_;
    struct Struct_02040bfc_2* unknown_18_;
    struct Struct_02040bfc_3* unknown_1c_;
};

// USA: func_02040bfc
extern "C" ARM void func_02040bfc(struct Struct_0203d028_22* arg0, int arg1) {
    if (arg0->unknown_14_ != 0) {
        arg0->unknown_14_->unknown_8c_ = arg1;
        return;
    }
    if (arg0->unknown_18_ != 0) {
        arg0->unknown_18_->unknown_c8_ = arg1;
        return;
    }
    if (arg0->unknown_1c_ != 0) {
        arg0->unknown_1c_->unknown_2ec_ = arg1;
    }
}
