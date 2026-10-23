#include <globaldefs.h>

struct Struct_02087d24 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 18;
    int unknown_5a_2_ : 3;
};

// USA: func_02087d24
extern "C" ARM int func_02087d24(struct Struct_02087d24* arg0, int arg1) {
    if (arg0->unknown_14_ & 1) return 0;
    if (arg1 == 0) {
        if (arg0->unknown_5a_2_ < 2) return 1;
    } else {
        if (arg0->unknown_5a_2_ > -2) return 1;
    }
    return 0;
}
