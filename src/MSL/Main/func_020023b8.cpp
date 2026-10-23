#include <globaldefs.h>

enum Enum_02001bdc_C {
    Enum_02001bdc_C_0_3,
    Enum_02001bdc_C_1_3,
    Enum_02001bdc_C_2_3
};

enum Enum_02001bdc {
    Enum_02001bdc_0_3,
    Enum_02001bdc_1_3,
    Enum_02001bdc_2_3
};

typedef struct {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    int unknown_8_;
    int unknown_c_;
} Struct_02001bdc;

#define conversion_max 509

// USA: func_020023b8
extern "C" ARM char*func_020023b8(long long arg0, char* arg1, Struct_02001bdc arg2) {
    unsigned long long var0, var1;
    char*              var2;
    int                var3, var4;
    int                var5 = 0;
    var0             = arg0;
    var5                    = 0;
    var2                        = arg1;
    *--var2                     = 0;
    var4                   = 0;

    if (!arg0 && !arg2.unknown_c_ && !(arg2.unknown_3_ && arg2.unknown_5_ == 'o')) {
        return var2;
    }

    switch (arg2.unknown_5_) {
        case 'd':
        case 'i':
            var1 = 10;

            if (arg0 < 0) {
                if (arg0 != 0x8000000000000000) {
                    var0 = -arg0;
                }

                var5 = 1;
            }
            break;
        case 'o':
            var1             = 8;
            arg2.unknown_1_ = Enum_02001bdc_0_3;
            break;
        case 'u':
            var1             = 10;
            arg2.unknown_1_ = Enum_02001bdc_0_3;
            break;
        case 'x':
        case 'X':
            var1             = 16;
            arg2.unknown_1_ = Enum_02001bdc_0_3;
            break;
    }

    do {
        var3 = var0 % var1;
        var0 /= var1;

        if (var3 < 10) {
            var3 += '0';
        } else {
            var3 -= 10;
            if (arg2.unknown_5_ == 'x') {
                var3 += 'a';
            } else {
                var3 += 'A';
            }
        }

        *--var2 = var3;
        ++var4;
    } while (var0 != 0);

    if (var1 == 8 && arg2.unknown_3_ && *var2 != '0') {
        *--var2 = '0';
        ++var4;
    }

    if (arg2.unknown_0_ == Enum_02001bdc_C_2_3) {
        arg2.unknown_c_ = arg2.unknown_8_;

        if (var5 || arg2.unknown_1_ != Enum_02001bdc_0_3) {
            --arg2.unknown_c_;
        }

        if (var1 == 16 && arg2.unknown_3_) {
            arg2.unknown_c_ -= 2;
        }
    }

    if (arg1 - var2 + arg2.unknown_c_ > conversion_max) {
        return 0;
    }

    while (var4 < arg2.unknown_c_) {
        *--var2 = '0';
        ++var4;
    }

    if (var1 == 16 && arg2.unknown_3_) {
        *--var2 = arg2.unknown_5_;
        *--var2 = '0';
    }

    if (var5) {
        *--var2 = '-';
    } else if (arg2.unknown_1_ == Enum_02001bdc_1_3) {
        *--var2 = '+';
    } else if (arg2.unknown_1_ == Enum_02001bdc_2_3) {
        *--var2 = ' ';
    }

    return var2;
}
