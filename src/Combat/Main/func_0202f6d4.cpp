#include <globaldefs.h>

struct Struct_0202f6d4_2 {
    char unknown_0_[0x8];
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_0202f6d4 {
    char unknown_0_[0x440];
    struct Struct_0202f6d4_2* unknown_440_;
};

// USA: func_0202f6d4
extern "C" ARM void func_0202f6d4(struct Struct_0202f6d4* arg0) {
    if (arg0->unknown_440_ == 0) {
        return;
    }
    arg0->unknown_440_->unknown_10_ = 0x1000;
    arg0->unknown_440_->unknown_14_ = 0x1000;
    arg0->unknown_440_->unknown_8_ = 3;
}
