#include <globaldefs.h>

struct Struct_ov031_02230d2c { unsigned char unknown_0_[4]; unsigned char unknown_4_[4]; };
struct Struct_ov031_02290ca0_24 { unsigned char unknown_0_; unsigned char unknown_1_[7]; Struct_ov031_02230d2c* unknown_8_; };
extern Struct_ov031_02290ca0_24 data_ov031_02290ca0;
struct Struct_ov031_02248f5c { unsigned char unknown_0_[4]; };
extern Struct_ov031_02248f5c data_ov031_02248f5c;

// USA: func_ov031_02230d2c
extern "C" ARM void func_ov031_02230d2c() {
    Struct_ov031_02248f5c var0 = data_ov031_02248f5c;
    unsigned char var1 = data_ov031_02290ca0.unknown_0_;
    int var2 = 0;
    unsigned char* var3 = var0.unknown_0_;
    do {
        if (var1 == *var3) {
            data_ov031_02290ca0.unknown_8_->unknown_4_[var2] = 20;
            if (var2 & 1) {
                data_ov031_02290ca0.unknown_8_->unknown_4_[var2 - 1] = 0;
                return;
            } else {
                data_ov031_02290ca0.unknown_8_->unknown_4_[var2 + 1] = 0;
                return;
            }
        }
        var2++;
        var3++;
    } while (var2 < 4);
}
