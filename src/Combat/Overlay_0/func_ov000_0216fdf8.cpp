#include <globaldefs.h>

struct Struct_ov000_0216fdf8 {
    char unknown_0_[4];
    short unknown_4_[64];
    int unknown_84_;
};

// USA: func_ov000_0216fdf8
extern "C" ARM void func_ov000_0216fdf8(struct Struct_ov000_0216fdf8* arg0, int arg1) {
    int var0;
    if (arg0->unknown_84_ > 0x3f) return;
    if (arg1 <= 0) return;
    for (var0 = 0; var0 < arg0->unknown_84_; var0++) {
        if (arg1 == arg0->unknown_4_[var0]) return;
    }
    arg0->unknown_4_[arg0->unknown_84_] = (short)arg1;
    arg0->unknown_84_ = arg0->unknown_84_ + 1;
}
