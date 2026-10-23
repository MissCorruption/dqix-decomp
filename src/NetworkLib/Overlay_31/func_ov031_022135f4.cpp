#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_022135f4_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
};

struct Struct_ov031_022135f4 {
    char unknown_0_[6];
    unsigned short unknown_6_;
    char unknown_8_[0xb8];
};

struct Struct_ov031_022135f4_2 {
    char unknown_0_[0x444];
    Struct_ov031_022135f4_3 unknown_444_[12];
    Struct_ov031_022135f4 unknown_474_[11];
    char unknown_cb4_[0x59];
    unsigned char unknown_d0d_;
    char unknown_d0e_[4];
    unsigned char unknown_d12_;
    unsigned char unknown_d13_;
};

struct Struct_ov031_0224e5c4_10 {
    char unknown_0_[0x10];
    Struct_ov031_022135f4_2* unknown_10_;
};

extern Struct_ov031_0224e5c4_10 data_ov031_0224e5c4;

// USA: func_ov031_022135f4
extern "C" ARM int func_ov031_022135f4() {
    unsigned char var0;
    unsigned char var1;
    Struct_ov031_022135f4_2* var2 = data_ov031_0224e5c4.unknown_10_;
    var1 = var2->unknown_d13_;
    Struct_ov031_022135f4* var3 = var2->unknown_474_;
    Struct_ov031_022135f4* var4 = &var3[(short)var1];
    if (var2->unknown_d0d_ >= 6) return 1;
    unsigned char var5 = var2->unknown_d12_;
    var0 = 0;
    if ((unsigned int)var0 < (unsigned int)var5) do {
        if (var0 != var1 && var2->unknown_444_[var0].unknown_1_ < 6) {
            if (strncmp(var4->unknown_0_, var2->unknown_474_[var0].unknown_0_,
                    var2->unknown_474_[var0].unknown_6_) == 0) return 2;
        }
        var0++;
    } while (var0 < var5);
    return 1;
}
