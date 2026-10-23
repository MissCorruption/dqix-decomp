#include <globaldefs.h>

struct Struct_020cfc00 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
};

// USA: func_020cfc00  (NitroSDK: RTC_GetDayOfWeek)
extern "C" ARM int func_020cfc00(struct Struct_020cfc00* arg0) {
    int var0;
    int var1 = (int)(2000 + arg0->unknown_0_);
    int var2 = (int)arg0->unknown_4_;
    int var3 = (int)arg0->unknown_8_;

    var2 -= 2;

    if (var2 < 1) {
        var2 += 12;
        --var1;
    }

    var0 = var1 / 100;
    var1 %= 100;
    return ((26 * var2 - 2) / 10 + var3 + var1 + var1 / 4 + var0 / 4 + 5 * var0) % 7;
}
