#include <globaldefs.h>

struct Struct_020bc210 {
    char unknown_0_[0x34];
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    unsigned short unknown_38_;
    unsigned short unknown_3a_;
};

struct Struct_02061c04_19 {
    struct Struct_020bc210* unknown_0_;
};

// USA: func_020bc210
extern "C" ARM void func_020bc210(struct Struct_02061c04_19* arg0, int arg1, int arg2) {
    if (*(int*)arg0 == 0) {
        return;
    }
    arg0->unknown_0_->unknown_34_ = 2;
    arg0->unknown_0_->unknown_38_ = arg1;
    arg0->unknown_0_->unknown_3a_ = arg2;
}
