#include <globaldefs.h>

struct Struct_02024518_3 {
    char unknown_0_[0x24];
};

struct Struct_02024518_2 {
    char unknown_0_[0x20];
    struct Struct_02024518_3* unknown_20_;
    int unknown_24_;
};

// USA: func_02027878
extern "C" ARM struct Struct_02024518_3* func_02027878(struct Struct_02024518_2* arg0, int arg1) {
    if (arg1 < 0) {
        goto ret0;
    }
    if (arg0->unknown_24_ > arg1) {
        goto valid;
    }
ret0:
    return 0;
valid:
    return &arg0->unknown_20_[arg1];
}
