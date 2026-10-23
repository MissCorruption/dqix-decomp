#include <globaldefs.h>

extern "C" int func_ov000_02170c7c(int);

struct Struct_ov000_0217f5e4 { char unknown_0_[0x25]; signed char unknown_25_; char unknown_26_[0x28 - 0x26]; };
struct Struct_ov000_02173954 { char unknown_0_[0x170]; struct Struct_ov000_0217f5e4* unknown_170_; };

// USA: func_ov000_0217f5e4
extern "C" ARM void func_ov000_0217f5e4(struct Struct_ov000_02173954* arg0, int arg1) {
    if (arg1 == 0) return;
    signed char var0 = (signed char)func_ov000_02170c7c(arg1);
    for (int var1 = 7; var1 < 0x11; var1++) {
        arg0->unknown_170_[var1].unknown_25_ = var0;
    }
}
