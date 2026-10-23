#include <globaldefs.h>

struct Struct_020de574_2 {
    unsigned char unknown_0_[0x10];
    int unknown_10_;
};

struct Struct_020de574 {
    unsigned char unknown_0_[4];
    int unknown_4_;
};

// USA: func_020de574
extern "C" ARM int func_020de574(Struct_020de574_2 *arg0, Struct_020de574 *arg1) {
    int var0 = 1;
    int var1 = (int)((char *)arg1->unknown_4_ - (char *)0);
    if (var1 != -1) {
        if (arg0->unknown_10_ != 0) {
            var0 = 0;
        }
    }
    arg1->unknown_4_ = var0 ? 0 : arg0->unknown_10_ + var1;
    return 1;
}
