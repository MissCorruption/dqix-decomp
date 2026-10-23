#include <globaldefs.h>

struct Struct_02049fc0 { unsigned char unknown_0_[0x64]; float unknown_64_; };
struct Struct_02049fc0_2 { unsigned char unknown_0_[0x13c]; Struct_02049fc0* unknown_13c_; };

// USA: func_02049fc0
extern "C" ARM int func_02049fc0(Struct_02049fc0_2* arg0) {
    Struct_02049fc0* var0 = arg0->unknown_13c_;
    if (var0 == 0) {
        return 0;
    }
    return var0->unknown_64_ != 0.0f;
}
