#include <globaldefs.h>

struct Struct_020d1344 {
    unsigned char unknown_0_[5];
    unsigned char unknown_5_0_ : 1;
};

// USA: func_020d1344
extern "C" ARM int func_020d1344() {
    volatile struct Struct_020d1344* var0 = (struct Struct_020d1344*)0x27ffc30;
    return var0->unknown_5_0_;
}
