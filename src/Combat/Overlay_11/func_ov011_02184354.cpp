#include <globaldefs.h>

extern "C" int func_ov011_02184324(int);

struct Struct_ov011_02184354 { char unknown_0_[0x1c]; int unknown_1c_; };

// USA: func_ov011_02184354
extern "C" ARM int func_ov011_02184354(Struct_ov011_02184354* arg0, int arg1) {
    int var0 = arg0->unknown_1c_;
    if (var0 == 0) {
        arg0->unknown_1c_ = arg1;
        return (int)arg0;
    }
    return func_ov011_02184324(var0);
}
