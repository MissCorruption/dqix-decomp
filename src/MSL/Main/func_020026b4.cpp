#include <globaldefs.h>
#include <string.h>

#define TARGET_FLOAT_BITS 64
#define TARGET_FLOAT_BYTES (TARGET_FLOAT_BITS / 8)
#define TARGET_FLOAT_MAX_EXP 128
#define TARGET_FLOAT_MANT_DIG 53
#define TARGET_FLOAT_IMPLICIT_J_BIT 1
#define TARGET_FLOAT_MANT_BITS (TARGET_FLOAT_MANT_DIG - TARGET_FLOAT_IMPLICIT_J_BIT)
#define TARGET_FLOAT_EXP_BITS (TARGET_FLOAT_BITS - TARGET_FLOAT_MANT_BITS - 1)

enum Enum_02001bdc_C {
    Enum_02001bdc_C_0_4,
    Enum_02001bdc_C_1_4,
    Enum_02001bdc_C_2_4
};

enum Enum_02001bdc {
    Enum_02001bdc_0_4,
    Enum_02001bdc_1_4,
    Enum_02001bdc_2_4
};

enum Enum_02001bdc_B {
    Enum_02001bdc_B_0_2,
    Enum_02001bdc_B_1_2,
    Enum_02001bdc_B_2_2,
    Enum_02001bdc_B_3_2,
    Enum_02001bdc_B_4_2,
    Enum_02001bdc_B_5_2,
    Enum_02001bdc_B_6_2,
    Enum_02001bdc_B_7_2,
    Enum_02001bdc_B_8_2,
    Enum_02001bdc_B_9_2
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

typedef struct Struct_020026b4 {
    char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    struct {
        unsigned char unknown_0_;
        unsigned char unknown_1_[32];
        unsigned char unknown_21_;
    } unknown_4_;
} Struct_020026b4;

typedef struct Struct_020026b4_2 {
    char unknown_0_;
    char unknown_1_;
    short unknown_2_;
} Struct_020026b4_2;

extern "C" void func_0200a300(const Struct_020026b4_2* arg0, double arg1, Struct_020026b4* arg2);
extern "C" double func_02008f3c(double arg0);
extern "C" char* func_0200216c(long arg0, char* arg1, Struct_02001bdc arg2);

static inline long double inline_020026b4(long double arg0) {
    return (long double)func_02008f3c((double)arg0);
}

extern const unsigned short data_020e69ac[128];

static inline int inline_02002cb4(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x200);
}

static inline int inline_02001bdc(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x008);
}

// USA: func_020026b4
extern "C" ARM char* func_020026b4(long double arg0, char* arg1, Struct_02001bdc arg2) {
    char*          var0;
    unsigned char* var1;
    unsigned char  var2;
    long double    var3;
    int            var4, var5;
    unsigned       var6;
    long           var7;
    Struct_02001bdc   var8;
    int            var9;
    int            var10;
    Struct_020026b4_2        var11;
    Struct_020026b4        var12;
    int            var13;

    var13 = '.';
    var0            = arg1;
    var3           = arg0;

    if (arg2.unknown_c_ > conversion_max) {
        return 0;
    }

    var11.unknown_0_  = (char)0;
    var11.unknown_2_ = 0x20;
    func_0200a300(&var11, arg0, &var12);

    if (inline_020026b4(arg0) == 0.0) {
        var0 = arg1 - 6;
        strcpy(var0, "0x0p0");
        return var0;
    }

    if (*var12.unknown_4_.unknown_1_ == 'I') {
        if (var12.unknown_0_) {
            var0 = arg1 - 5;
            if (arg2.unknown_5_ == 'A') {
                strcpy(var0, "-INF");
            } else {
                strcpy(var0, "-inf");
            }
        } else {
            var0 = arg1 - 4;
            if (arg2.unknown_5_ == 'A') {
                strcpy(var0, "INF");
            } else {
                strcpy(var0, "inf");
            }
        }
        return var0;
    } else if (*var12.unknown_4_.unknown_1_ == 'N') {
        if (var12.unknown_0_) {
            var0 = arg1 - 5;
            if (arg2.unknown_5_ == 'A') {
                strcpy(var0, "-NAN");
            } else {
                strcpy(var0, "-nan");
            }
        } else {
            var0 = arg1 - 4;
            if (arg2.unknown_5_ == 'A') {
                strcpy(var0, "NAN");
            } else {
                strcpy(var0, "nan");
            }
        }
        return var0;
    }

    var8.unknown_0_ = Enum_02001bdc_C_1_4;
    var8.unknown_1_          = Enum_02001bdc_1_4;
    var8.unknown_2_   = 0;
    var8.unknown_3_        = 0;
    var8.unknown_4_      = Enum_02001bdc_B_0_2;
    var8.unknown_8_           = 0;
    var8.unknown_c_             = 1;
    var8.unknown_5_       = 'd';

    int   var14;
    char* var15 = (char*)&arg0;
    for (var14 = 0; var14 < TARGET_FLOAT_BYTES / 2; var14++) {
        char var16                           = var15[var14];
        var15[var14]                          = var15[TARGET_FLOAT_BYTES - var14 - 1];
        var15[TARGET_FLOAT_BYTES - var14 - 1] = var16;
    }

    var4 = TARGET_FLOAT_EXP_BITS;
    var5 = 0x7FF;

    var6 = ((unsigned char*)&arg0)[0] << 25;
    if (TARGET_FLOAT_EXP_BITS > 7) {
        var6 |= ((unsigned char*)&arg0)[1] << 17;
    }
    if (TARGET_FLOAT_EXP_BITS > 15) {
        var6 |= ((unsigned char*)&arg0)[2] << 9;
    }
    if (TARGET_FLOAT_EXP_BITS > 23) {
        var6 |= ((unsigned char*)&arg0)[3] << 1;
    }

    var6 = (var6 >> (32 - var4)) & var5;
    var7  = var6 - 0x3FF;

    var0 = func_0200216c(var7, arg1, var8);
    if (arg2.unknown_5_ == 'a') {
        *--var0 = 'p';
    } else {
        *--var0 = 'P';
    }
    var1 = (unsigned char*)&arg0;

    if (TARGET_FLOAT_IMPLICIT_J_BIT) {
        var10 = (1 + var4 + arg2.unknown_c_ * 4) - 1;
    } else {
        var10 = (1 + var4 + arg2.unknown_c_ * 4) - 4;
    }

    for (var9 = arg2.unknown_c_; var9 >= 1; var9--) {
        if (var10 < 64) {
            int var17;

            var17 = var10 >> 3;
            var2  = (*(var1 + var17)) >> (7 - (var10 & 7));

            if ((var10 & ~7) != ((var10 - 4) & ~7)) {
                var2 |= ((*(var1 + (var17 - 1))) << 8) >> (7 - ((var10) & 7));
            }

            if (!TARGET_FLOAT_IMPLICIT_J_BIT) {
                if (var10 == 1 + var4) {
                    *--var0 = var13;
                    var2 &= 0x1;
                }
            }

            if ((var2 &= 0xF) < 10) {
                var2 += '0';
            } else if (arg2.unknown_5_ == 'a') {
                var2 += 'a' - 10;
            } else {
                var2 += 'A' - 10;
            }
        } else {
            var2 = '0';
        }

        *--var0 = var2;
        var10 -= 4;
    }

    if (TARGET_FLOAT_IMPLICIT_J_BIT) {
        if (arg2.unknown_c_ || arg2.unknown_3_) {
            *--var0 = var13;
        }
        *--var0 = '1';
    }

    if (arg2.unknown_5_ == 'a') {
        *--var0 = 'x';
    } else {
        *--var0 = 'X';
    }

    *--var0 = '0';

    if (var12.unknown_0_) {
        *--var0 = '-';
    } else if (arg2.unknown_1_ == Enum_02001bdc_1_4) {
        *--var0 = '+';
    } else if (arg2.unknown_1_ == Enum_02001bdc_2_4) {
        *--var0 = ' ';
    }

    return var0;
}

// USA: func_02002b90
extern "C" ARM void func_02002b90(Struct_020026b4* arg0, int arg1) {
    char  var0;
    char* var1;
    int   var2;

    if (arg1 < 0) {
    return_zero:
        arg0->unknown_2_        = 0;
        arg0->unknown_4_.unknown_0_ = 1;
        *arg0->unknown_4_.unknown_1_  = '0';
        return;
    }

    if (arg1 >= arg0->unknown_4_.unknown_0_) {
        return;
    }

    var1 = (char*)arg0->unknown_4_.unknown_1_ + arg1 + 1;
    var0 = *--var1 - '0';

    if (var0 == 5) {
        char* var3 = &((char*)arg0->unknown_4_.unknown_1_)[arg0->unknown_4_.unknown_0_];

        while (--var3 > var1 && *var3 == '0')
            ;
        var2 = (var3 == var1) ? var1[-1] & 1 : 1;
    } else {
        var2 = (var0 > 5);
    }

    while (arg1 != 0) {
        var0 = *--var1 - '0' + var2;

        if ((var2 = (var0 > 9)) != 0 || var0 == 0) {
            --arg1;
        } else {
            *var1 = var0 + '0';
            break;
        }
    }

    if (var2 != 0) {
        arg0->unknown_2_ += 1;
        arg0->unknown_4_.unknown_0_ = 1;
        *arg0->unknown_4_.unknown_1_  = '1';
        return;
    } else if (arg1 == 0) {
        goto return_zero;
    }

    arg0->unknown_4_.unknown_0_ = arg1;
}

// USA: func_02002cb4
extern "C" ARM char* func_02002cb4(long double arg0, char* arg1, Struct_02001bdc arg2) {
    Struct_020026b4 var0;
    Struct_020026b4_2 var1;
    char*   var2;
    char* var3;
    int   var4, var5, var6;
    int   var7, var8;
    int   var9;

    var9 = '.';

    if (arg2.unknown_c_ > conversion_max) {
        return 0;
    }

    var1.unknown_0_  = 0;
    var1.unknown_2_ = 0x20;
    func_0200a300(&var1, arg0, &var0);
    var2 = (char*)var0.unknown_4_.unknown_1_ + var0.unknown_4_.unknown_0_;

    while (var0.unknown_4_.unknown_0_ > 1 && *--var2 == '0') {
        --var0.unknown_4_.unknown_0_;
        ++var0.unknown_2_;
    }

    switch (*var0.unknown_4_.unknown_1_) {
        case '0':
            var0.unknown_2_ = 0;
            break;
        case 'I':
            if (arg0 < 0) {
                var2 = arg1 - 5;

                if (inline_02002cb4(arg2.unknown_5_)) {
                    strcpy(var2, "-INF");
                } else {
                    strcpy(var2, "-inf");
                }
            } else {
                var2 = arg1 - 4;
                if (inline_02002cb4(arg2.unknown_5_)) {
                    strcpy(var2, "INF");
                } else {
                    strcpy(var2, "inf");
                }
            }

            return var2;

        case 'N':
            if (var0.unknown_0_) {
                var2 = arg1 - 5;
                if (inline_02002cb4(arg2.unknown_5_)) {
                    strcpy(var2, "-NAN");
                } else {
                    strcpy(var2, "-nan");
                }
            } else {
                var2 = arg1 - 4;
                if (inline_02002cb4(arg2.unknown_5_)) {
                    strcpy(var2, "NAN");
                } else {
                    strcpy(var2, "nan");
                }
            }

            return var2;
    }

    var0.unknown_2_ += var0.unknown_4_.unknown_0_ - 1;
    var2    = arg1;
    *--var2 = 0;

    switch (arg2.unknown_5_) {
        case 'g':
        case 'G':

            if (var0.unknown_4_.unknown_0_ > arg2.unknown_c_) {
                func_02002b90(&var0, arg2.unknown_c_);
            }

            if (var0.unknown_2_ < -4 || var0.unknown_2_ >= arg2.unknown_c_) {
                if (arg2.unknown_3_) {
                    --arg2.unknown_c_;
                } else {
                    arg2.unknown_c_ = var0.unknown_4_.unknown_0_ - 1;
                }

                if (arg2.unknown_5_ == 'g') {
                    arg2.unknown_5_ = 'e';
                } else {
                    arg2.unknown_5_ = 'E';
                }

                goto e_format;
            }

            if (arg2.unknown_3_) {
                arg2.unknown_c_ -= var0.unknown_2_ + 1;
            } else {
                if ((arg2.unknown_c_ = var0.unknown_4_.unknown_0_ - (var0.unknown_2_ + 1)) < 0) {
                    arg2.unknown_c_ = 0;
                }
            }

            goto f_format;

        case 'e':
        case 'E':
        e_format:

            if (var0.unknown_4_.unknown_0_ > arg2.unknown_c_ + 1) {
                func_02002b90(&var0, arg2.unknown_c_ + 1);
            }

            var4    = var0.unknown_2_;
            var6 = '+';

            if (var4 < 0) {
                var4    = -var4;
                var6 = '-';
            }

            for (var5 = 0; var4 || var5 < 2; ++var5) {
                *--var2 = var4 % 10 + '0';
                var4 /= 10;
            }

            *--var2 = var6;
            *--var2 = arg2.unknown_5_;

            if (arg1 - var2 + arg2.unknown_c_ > conversion_max) {
                return 0;
            }

            if (var0.unknown_4_.unknown_0_ < arg2.unknown_c_ + 1) {
                for (var4 = arg2.unknown_c_ + 1 - var0.unknown_4_.unknown_0_ + 1; --var4;) {
                    *--var2 = '0';
                }
            }

            for (var4 = var0.unknown_4_.unknown_0_, var3 = (char*)var0.unknown_4_.unknown_1_ + var0.unknown_4_.unknown_0_; --var4;) {
                *--var2 = *--var3;
            }

            if (arg2.unknown_c_ || arg2.unknown_3_) {
                *--var2 = var9;
            }

            *--var2 = *var0.unknown_4_.unknown_1_;

            if (var0.unknown_0_) {
                *--var2 = '-';
            } else if (arg2.unknown_1_ == Enum_02001bdc_1_4) {
                *--var2 = '+';
            } else if (arg2.unknown_1_ == Enum_02001bdc_2_4) {
                *--var2 = ' ';
            }

            break;

        case 'f':
        case 'F':
        f_format:

            if ((var8 = -var0.unknown_2_ + var0.unknown_4_.unknown_0_ - 1) < 0) {
                var8 = 0;
            }

            if (var8 > arg2.unknown_c_) {
                func_02002b90(&var0, var0.unknown_4_.unknown_0_ - (var8 - arg2.unknown_c_));

                if ((var8 = -var0.unknown_2_ + var0.unknown_4_.unknown_0_ - 1) < 0) {
                    var8 = 0;
                }
            }

            if ((var7 = var0.unknown_2_ + 1) < 0) {
                var7 = 0;
            }

            if (var7 + var8 > conversion_max) {
                return 0;
            }

            var3 = (char*)var0.unknown_4_.unknown_1_ + var0.unknown_4_.unknown_0_;

            for (var5 = 0; var5 < (arg2.unknown_c_ - var8); ++var5) {
                *--var2 = '0';
            }

            for (var5 = 0; var5 < var8 && var5 < var0.unknown_4_.unknown_0_; ++var5) {
                *--var2 = *--var3;
            }

            for (; var5 < var8; ++var5) {
                *--var2 = '0';
            }

            if (arg2.unknown_c_ || arg2.unknown_3_) {
                *--var2 = var9;
            }

            if (var7) {
                for (var5 = 0; var5 < var7 - var0.unknown_4_.unknown_0_; ++var5) {
                    *--var2 = '0';
                }

                for (; var5 < var7; ++var5) {
                    *--var2 = *--var3;
                }
            } else {
                *--var2 = '0';
            }

            if (var0.unknown_0_) {
                *--var2 = '-';
            } else if (arg2.unknown_1_ == Enum_02001bdc_1_4) {
                *--var2 = '+';
            } else if (arg2.unknown_1_ == Enum_02001bdc_2_4) {
                *--var2 = ' ';
            }

            break;
    }

    return var2;
}
