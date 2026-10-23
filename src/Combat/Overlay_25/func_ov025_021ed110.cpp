#include <globaldefs.h>

struct Struct_ov025_021ed110_2 {
    char unknown_0_[0x4];
    unsigned short unknown_4_;
};

struct Struct_ov025_021ed110 {
    char unknown_0_[0x300];
    Struct_ov025_021ed110_2 unknown_300_;

    Struct_ov025_021ed110_2* inline_ov025_021ed110() { return &unknown_300_; }
};

// USA: func_ov025_021ed110
extern "C" ARM void func_ov025_021ed110(Struct_ov025_021ed110* arg0, int arg1) {
    arg0->inline_ov025_021ed110()->unknown_4_ = arg1;
}
