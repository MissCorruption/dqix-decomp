#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020de0ec {
    unsigned char unknown_0_[0x24];
    unsigned char unknown_24_;
};

// USA: func_020de0ec
extern "C" ARM void func_020de0ec(struct Struct_020de0ec* arg0) {
    int var0 = rand() % 10000;
    arg0->unknown_24_ = 0;
    if (var0 < 25) {
        arg0->unknown_24_ |= 4;
        return;
    }
    if (var0 < 200) {
        arg0->unknown_24_ |= 2;
    } else {
        arg0->unknown_24_ |= 1;
    }
}
