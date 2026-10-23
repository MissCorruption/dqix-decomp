#include <globaldefs.h>

struct Struct_021117ec_4 { unsigned char unknown_0_[0x1c]; int unknown_1c_; void (*unknown_20_)(int, int); int unknown_24_; };
extern struct Struct_021117ec_4 data_021117ec;

// USA: func_020ce240
extern "C" ARM void func_020ce240(int arg0) {
    void (*var0)(int, int);
    int var1;
    var0 = data_021117ec.unknown_20_;
    var1 = data_021117ec.unknown_24_;
    data_021117ec.unknown_1c_ = 0;
    if (var0 == NULL) {
        return;
    }
    data_021117ec.unknown_20_ = NULL;
    var0(arg0, var1);
}
