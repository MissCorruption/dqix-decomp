#include <globaldefs.h>

struct Struct_ov017_021a85d4 {
    char unknown_0_[0x24];
    int unknown_24_;
    char unknown_28_[0x10];
    unsigned short unknown_38_;
};

// USA: func_ov017_021a85d4
extern "C" ARM void func_ov017_021a85d4(struct Struct_ov017_021a85d4* arg0, int arg1) {
    arg0->unknown_24_ = arg1;
    if (arg1 == 5) {
        arg0->unknown_38_ = 0x3c;
    }
}
