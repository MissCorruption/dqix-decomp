#include <globaldefs.h>

extern "C" void func_020bbe64(int);

struct Struct_020bc9a8 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
};

// USA: func_020bc9a8
extern "C" ARM void func_020bc9a8(struct Struct_020bc9a8* arg0) {
    if (arg0->unknown_44_ != 0) {
        func_020bbe64(arg0->unknown_44_);
        arg0->unknown_44_ = 0;
        arg0->unknown_48_ = 0;
    }
}
