#include <globaldefs.h>

extern "C" int func_ov003_0217daa4(int arg0);

struct Struct_020dae80 { char unknown_0_[0xc]; int unknown_c_; };

// USA: func_020dae80
extern "C" ARM int func_020dae80(struct Struct_020dae80* arg0) {
    int var0 = arg0->unknown_c_;
    if (var0 == 0) return var0;
    return func_ov003_0217daa4(var0);
}
