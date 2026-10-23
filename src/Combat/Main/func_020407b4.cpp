#include <globaldefs.h>

struct Struct_02040774_2 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
};

// USA: func_020407b4
extern "C" ARM void func_020407b4(struct Struct_02040774_2* arg0, int arg1, int arg2, int arg3) {
    arg0->unknown_44_ = arg1;
    arg0->unknown_48_ = arg2;
    arg0->unknown_4c_ = arg3;
}
