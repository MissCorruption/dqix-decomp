#include <globaldefs.h>

struct Struct_02071ffc_5 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
    int unknown_14_[2];
    struct Struct_02071ffc_5* unknown_1c_;
};

// USA: func_020722a4
extern "C" ARM void func_020722a4(struct Struct_02071ffc_5** arg0, int arg1) {
    int var0;
    int var1;
    int var2;
    struct Struct_02071ffc_5* var3;
    struct Struct_02071ffc_5* var4;
    struct Struct_02071ffc_5* var5;
    struct Struct_02071ffc_5* var6;
    struct Struct_02071ffc_5* var7;

    if (arg1 <= 0) return;

    var3 = *arg0;
    var0 = 0;
    var1 = 0;
    var2 = 0;
    var4 = 0;
    var5 = 0;
    var6 = var3;

    while (var6 != 0) {
        if ((var6->unknown_10_ << 9) >> 31) var1++;
        var0++;
        var7 = var6;
        var6 = var6->unknown_1c_;
        if (var0 == arg1 || var6 == 0) {
            if (var1 > 0) {
                var2++;
                if (var4 != 0) var4->unknown_1c_ = var3;
                else *arg0 = var3;
                var4 = var7;
            }
            var0 = 0;
            var1 = 0;
            var3 = var6;
            if (var5 == 0) var5 = var7;
        }
    }

    if (var2 == 0) {
        if (var5 != 0) var5->unknown_1c_ = 0;
    } else {
        if (var4 != 0) var4->unknown_1c_ = 0;
    }
}
