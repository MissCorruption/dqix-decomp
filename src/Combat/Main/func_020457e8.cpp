#include <globaldefs.h>

struct Struct_0204483c_2 {
    char unknown_0_[0x186c];
    int unknown_186c_[4];
    char unknown_187c_[0x131];
    signed char unknown_19ad_;
};

// USA: func_020457e8
extern "C" ARM void func_020457e8(struct Struct_0204483c_2* arg0, int arg1) {
    arg0->unknown_186c_[arg0->unknown_19ad_] = arg1;
    arg0->unknown_19ad_ = arg0->unknown_19ad_ + 1;
    arg0->unknown_19ad_ = arg0->unknown_19ad_ % 4;
}
