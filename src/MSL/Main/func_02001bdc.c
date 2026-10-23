#include <globaldefs.h>

enum Enum_02001bdc_C {
    Enum_02001bdc_C_0,
    Enum_02001bdc_C_1,
    Enum_02001bdc_C_2
};

enum Enum_02001bdc {
    Enum_02001bdc_0,
    Enum_02001bdc_1,
    Enum_02001bdc_2
};

enum Enum_02001bdc_B {
    Enum_02001bdc_B_0,
    Enum_02001bdc_B_1,
    Enum_02001bdc_B_2,
    Enum_02001bdc_B_3,
    Enum_02001bdc_B_4,
    Enum_02001bdc_B_5,
    Enum_02001bdc_B_6,
    Enum_02001bdc_B_7,
    Enum_02001bdc_B_8,
    Enum_02001bdc_B_9
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
#define bad_conversion 0xFF

typedef char* Type_02001bdc;
#define __fourbytealign(n) ((((unsigned int)(n)) + 3U) & ~3U)
#define va_arg(ap, type) (*(type*)((ap += __fourbytealign(sizeof(type))) - __fourbytealign(sizeof(type))))

extern const unsigned short data_020e69ac[128];

static inline int inline_02001bdc(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x008);
}

// USA: func_02001bdc
ARM const char* func_02001bdc(const char* arg0, Type_02001bdc* arg1, Struct_02001bdc* arg2) {
    Struct_02001bdc var0;
    const char*  var1 = arg0;
    int          var2;
    int          var3;

    var0.unknown_0_ = Enum_02001bdc_C_1;
    var0.unknown_1_          = Enum_02001bdc_0;
    var0.unknown_2_   = 0;
    var0.unknown_3_        = 0;
    var0.unknown_4_      = Enum_02001bdc_B_0;
    var0.unknown_8_           = 0;
    var0.unknown_c_             = 0;

    if ((var2 = *++var1) == '%') {
        var0.unknown_5_ = var2;
        *arg2           = var0;
        return ((const char*)var1 + 1);
    }

    while (1) {
        var3 = 1;

        switch (var2) {
            case '-':
                var0.unknown_0_ = Enum_02001bdc_C_0;
                break;

            case '+':
                var0.unknown_1_ = Enum_02001bdc_1;
                break;

            case ' ':
                if (var0.unknown_1_ != Enum_02001bdc_1) {
                    var0.unknown_1_ = Enum_02001bdc_2;
                }
                break;

            case '#':
                var0.unknown_3_ = 1;
                break;

            case '0':
                if (var0.unknown_0_ != Enum_02001bdc_C_0) {
                    var0.unknown_0_ = Enum_02001bdc_C_2;
                }
                break;

            default:
                var3 = 0;
                break;
        }

        if (var3) {
            var2 = *++var1;
        } else {
            break;
        }
    }

    if (var2 == '*') {
        if ((var0.unknown_8_ = va_arg(*arg1, int)) < 0) {
            var0.unknown_0_ = Enum_02001bdc_C_0;
            var0.unknown_8_           = -var0.unknown_8_;
        }

        var2 = *++var1;
    } else {
        while (inline_02001bdc(var2)) {
            var0.unknown_8_ = (var0.unknown_8_ * 10) + (var2 - '0');
            var2             = *++var1;
        }
    }

    if (var0.unknown_8_ > conversion_max) {
        var0.unknown_5_ = bad_conversion;
        *arg2           = var0;
        return ((const char*)var1 + 1);
    }

    if (var2 == '.') {
        var0.unknown_2_ = 1;

        if ((var2 = *++var1) == '*') {
            if ((var0.unknown_c_ = va_arg(*arg1, int)) < 0) {
                var0.unknown_2_ = 0;
            }

            var2 = *++var1;
        } else {
            while (inline_02001bdc(var2)) {
                var0.unknown_c_ = (var0.unknown_c_ * 10) + (var2 - '0');
                var2           = *++var1;
            }
        }
    }

    var3 = 1;

    switch (var2) {
        case 'h':
            var0.unknown_4_ = Enum_02001bdc_B_2;
            if (var1[1] == 'h') {
                var0.unknown_4_ = Enum_02001bdc_B_1;
                var2                  = *++var1;
            }
            break;
        case 'l':
            var0.unknown_4_ = Enum_02001bdc_B_3;
            if (var1[1] == 'l') {
                var0.unknown_4_ = Enum_02001bdc_B_4;
                var2                  = *++var1;
            }
            break;
        case 'L':
            var0.unknown_4_ = Enum_02001bdc_B_9;
            break;
        case 'j':
            var0.unknown_4_ = Enum_02001bdc_B_6;
            break;
        case 't':
            var0.unknown_4_ = Enum_02001bdc_B_8;
            break;
        case 'z':
            var0.unknown_4_ = Enum_02001bdc_B_7;
            break;
        default:
            var3 = 0;
            break;
    }

    if (var3) {
        var2 = *++var1;
    }

    var0.unknown_5_ = var2;

    switch (var2) {
        case 'd':
        case 'i':
        case 'u':
        case 'o':
        case 'x':
        case 'X':
            if (var0.unknown_4_ == Enum_02001bdc_B_9) {
                var0.unknown_5_ = bad_conversion;
                break;
            }

            if (!var0.unknown_2_) {
                var0.unknown_c_ = 1;
            } else if (var0.unknown_0_ == Enum_02001bdc_C_2) {
                var0.unknown_0_ = Enum_02001bdc_C_1;
            }
            break;

        case 'f':
        case 'F':
            if (var0.unknown_4_ == Enum_02001bdc_B_2 || var0.unknown_4_ == Enum_02001bdc_B_6 ||
                var0.unknown_4_ == Enum_02001bdc_B_7 || var0.unknown_4_ == Enum_02001bdc_B_8 ||
                var0.unknown_4_ == Enum_02001bdc_B_4)
            {
                var0.unknown_5_ = bad_conversion;
                break;
            }

            if (!var0.unknown_2_) {
                var0.unknown_c_ = 6;
            }
            break;

        case 'a':
        case 'A':
            if (!var0.unknown_2_) {
                var0.unknown_c_ = 0x0D;
            }
            if (var0.unknown_4_ == Enum_02001bdc_B_2 || var0.unknown_4_ == Enum_02001bdc_B_6 ||
                var0.unknown_4_ == Enum_02001bdc_B_7 || var0.unknown_4_ == Enum_02001bdc_B_8 ||
                var0.unknown_4_ == Enum_02001bdc_B_4 || var0.unknown_4_ == Enum_02001bdc_B_1)
            {
                var0.unknown_5_ = bad_conversion;
            }
            break;

        case 'g':
        case 'G':
            if (!var0.unknown_c_) {
                var0.unknown_c_ = 1;
            }

        case 'e':
        case 'E':
            if (var0.unknown_4_ == Enum_02001bdc_B_2 || var0.unknown_4_ == Enum_02001bdc_B_6 ||
                var0.unknown_4_ == Enum_02001bdc_B_7 || var0.unknown_4_ == Enum_02001bdc_B_8 ||
                var0.unknown_4_ == Enum_02001bdc_B_4 || var0.unknown_4_ == Enum_02001bdc_B_1)
            {
                var0.unknown_5_ = bad_conversion;
                break;
            }

            if (!var0.unknown_2_) {
                var0.unknown_c_ = 6;
            }
            break;

        case 'p':
            var0.unknown_5_  = 'x';
            var0.unknown_3_   = 1;
            var0.unknown_4_ = Enum_02001bdc_B_3;
            var0.unknown_c_        = 8;
            break;

        case 'c':
            if (var0.unknown_4_ == Enum_02001bdc_B_3) {
                var0.unknown_4_ = Enum_02001bdc_B_5;
            } else if (var0.unknown_2_ || var0.unknown_4_ != Enum_02001bdc_B_0) {
                var0.unknown_5_ = bad_conversion;
            }
            break;

        case 's':
            if (var0.unknown_4_ == Enum_02001bdc_B_3) {
                var0.unknown_4_ = Enum_02001bdc_B_5;
            } else if (var0.unknown_4_ != Enum_02001bdc_B_0) {
                var0.unknown_5_ = bad_conversion;
            }
            break;

        case 'n':
            if (var0.unknown_4_ == Enum_02001bdc_B_9) {
                var0.unknown_5_ = bad_conversion;
            }
            break;

        default:
            var0.unknown_5_ = bad_conversion;
            break;
    }

    *arg2 = var0;

    return ((const char*)var1 + 1);
}
