#include <globaldefs.h>

struct Struct_ov001_021599dc { char unknown_0_[0x10]; int unknown_10_; };
struct Struct_ov001_021599dc_2 { char unknown_0_[0x50]; int unknown_50_; };

// USA: func_ov001_021599dc
extern "C" ARM int func_ov001_021599dc(Struct_ov001_021599dc* arg0, Struct_ov001_021599dc_2* arg1) {
    int var0 = arg1->unknown_50_;
    int var1 = arg0->unknown_10_;
    if (var0 >= var1) {
        arg1->unknown_50_ = 0;
        return 0;
    }
    arg1->unknown_50_ = var0 + 1;
    return 1;
}
