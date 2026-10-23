#include <globaldefs.h>

struct Struct_ov011_02184324 { char unknown_0_[0x18]; Struct_ov011_02184324* unknown_18_; };

// USA: func_ov011_02184324
extern "C" ARM void func_ov011_02184324(Struct_ov011_02184324* arg0, Struct_ov011_02184324* arg1) {
    if (arg0->unknown_18_ != 0) {
        Struct_ov011_02184324* var0 = arg0->unknown_18_;
        while (var0->unknown_18_ != 0) {
            var0 = var0->unknown_18_;
        }
        var0->unknown_18_ = arg1;
    } else {
        arg0->unknown_18_ = arg1;
    }
}
