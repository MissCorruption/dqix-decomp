#include <globaldefs.h>

extern "C" int func_020ded1c(int, int, int, int);

struct Struct_020deda4 {
    unsigned char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 12;
};

// USA: func_020deda4
extern "C" ARM int func_020deda4(int arg0, int arg1, struct Struct_020deda4* arg2) {
    if (arg2 != NULL) {
        return func_020ded1c(arg0, arg1, arg2->unknown_10_0_, arg2->unknown_11_2_);
    }
    return 0;
}
