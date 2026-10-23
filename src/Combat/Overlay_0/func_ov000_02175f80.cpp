#include <globaldefs.h>

extern "C" void* func_ov000_02161318(void*, int);

struct Struct_ov000_02175f80 { char unknown_0_[0x28]; int unknown_28_; };

// USA: func_ov000_02175f80
extern "C" ARM int func_ov000_02175f80(void* arg0) {
    int var0 = 0;
    for (int var1 = 0; var1 < 4; var1++) {
        struct Struct_ov000_02175f80* var2 = (struct Struct_ov000_02175f80*)func_ov000_02161318(arg0, var1);
        if (var2) {
            if ((var2->unknown_28_ & 1) == 0) var0++;
        }
    }
    return var0;
}
