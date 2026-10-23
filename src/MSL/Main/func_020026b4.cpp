#include <globaldefs.h>
#include <string.h>

#define TARGET_FLOAT_BITS 64
#define TARGET_FLOAT_BYTES (TARGET_FLOAT_BITS / 8)
#define TARGET_FLOAT_MAX_EXP 128
#define TARGET_FLOAT_MANT_DIG 53
#define TARGET_FLOAT_IMPLICIT_J_BIT 1
#define TARGET_FLOAT_MANT_BITS (TARGET_FLOAT_MANT_DIG - TARGET_FLOAT_IMPLICIT_J_BIT)
#define TARGET_FLOAT_EXP_BITS (TARGET_FLOAT_BITS - TARGET_FLOAT_MANT_BITS - 1)

enum justification_options {
    left_justification,
    right_justification,
    zero_fill
};

enum sign_options {
    only_minus,
    sign_always,
    space_holder
};

enum argument_options {
    normal_argument,
    char_argument,
    short_argument,
    long_argument,
    long_long_argument,
    wchar_argument,
    intmax_argument,
    size_t_argument,
    ptrdiff_argument,
    long_double_argument
};

typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    int field_width;
    int precision;
} print_format;

#define conversion_max 509

typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;

typedef struct decform {
    char style;
    char unused;
    short digits;
} decform;

extern "C" void func_0200a300(const decform* f, double x, decimal* d);
extern "C" double func_02008f3c(double x);
extern "C" char* func_0200216c(long num, char* buff, print_format format);

static inline long double fabsl(long double x) {
    return (long double)func_02008f3c((double)x);
}

extern const unsigned short data_020e69ac[128];

static inline int isupper(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int)(data_020e69ac[c] & 0x200);
}

static inline int isdigit(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int)(data_020e69ac[c] & 0x008);
}

// USA: func_020026b4
extern "C" ARM char* func_020026b4(long double num, char* buff, print_format format) {
    char*          p;
    unsigned char* q;
    unsigned char  working_byte;
    long double    ld;
    int            expbits, expmask;
    unsigned       snum;
    long           exp;
    print_format   exp_format;
    int            hex_precision;
    int            mantissa_bit;
    decform        form;
    decimal        dec;
    int            radix_marker;

    radix_marker = '.';
    p            = buff;
    ld           = num;

    if (format.precision > conversion_max) {
        return 0;
    }

    form.style  = (char)0;
    form.digits = 0x20;
    func_0200a300(&form, num, &dec);

    if (fabsl(num) == 0.0) {
        p = buff - 6;
        strcpy(p, "0x0p0");
        return p;
    }

    if (*dec.sig.text == 'I') {
        if (dec.sgn) {
            p = buff - 5;
            if (format.conversion_char == 'A') {
                strcpy(p, "-INF");
            } else {
                strcpy(p, "-inf");
            }
        } else {
            p = buff - 4;
            if (format.conversion_char == 'A') {
                strcpy(p, "INF");
            } else {
                strcpy(p, "inf");
            }
        }
        return p;
    } else if (*dec.sig.text == 'N') {
        if (dec.sgn) {
            p = buff - 5;
            if (format.conversion_char == 'A') {
                strcpy(p, "-NAN");
            } else {
                strcpy(p, "-nan");
            }
        } else {
            p = buff - 4;
            if (format.conversion_char == 'A') {
                strcpy(p, "NAN");
            } else {
                strcpy(p, "nan");
            }
        }
        return p;
    }

    exp_format.justification_options = right_justification;
    exp_format.sign_options          = sign_always;
    exp_format.precision_specified   = 0;
    exp_format.alternate_form        = 0;
    exp_format.argument_options      = normal_argument;
    exp_format.field_width           = 0;
    exp_format.precision             = 1;
    exp_format.conversion_char       = 'd';

    int   i;
    char* nump = (char*)&num;
    for (i = 0; i < TARGET_FLOAT_BYTES / 2; i++) {
        char x                           = nump[i];
        nump[i]                          = nump[TARGET_FLOAT_BYTES - i - 1];
        nump[TARGET_FLOAT_BYTES - i - 1] = x;
    }

    expbits = TARGET_FLOAT_EXP_BITS;
    expmask = 0x7FF;

    snum = ((unsigned char*)&num)[0] << 25;
    if (TARGET_FLOAT_EXP_BITS > 7) {
        snum |= ((unsigned char*)&num)[1] << 17;
    }
    if (TARGET_FLOAT_EXP_BITS > 15) {
        snum |= ((unsigned char*)&num)[2] << 9;
    }
    if (TARGET_FLOAT_EXP_BITS > 23) {
        snum |= ((unsigned char*)&num)[3] << 1;
    }

    snum = (snum >> (32 - expbits)) & expmask;
    exp  = snum - 0x3FF;

    p = func_0200216c(exp, buff, exp_format);
    if (format.conversion_char == 'a') {
        *--p = 'p';
    } else {
        *--p = 'P';
    }
    q = (unsigned char*)&num;

    if (TARGET_FLOAT_IMPLICIT_J_BIT) {
        mantissa_bit = (1 + expbits + format.precision * 4) - 1;
    } else {
        mantissa_bit = (1 + expbits + format.precision * 4) - 4;
    }

    for (hex_precision = format.precision; hex_precision >= 1; hex_precision--) {
        if (mantissa_bit < 64) {
            int mantissa_byte;

            mantissa_byte = mantissa_bit >> 3;
            working_byte  = (*(q + mantissa_byte)) >> (7 - (mantissa_bit & 7));

            if ((mantissa_bit & ~7) != ((mantissa_bit - 4) & ~7)) {
                working_byte |= ((*(q + (mantissa_byte - 1))) << 8) >> (7 - ((mantissa_bit) & 7));
            }

            if (!TARGET_FLOAT_IMPLICIT_J_BIT) {
                if (mantissa_bit == 1 + expbits) {
                    *--p = radix_marker;
                    working_byte &= 0x1;
                }
            }

            if ((working_byte &= 0xF) < 10) {
                working_byte += '0';
            } else if (format.conversion_char == 'a') {
                working_byte += 'a' - 10;
            } else {
                working_byte += 'A' - 10;
            }
        } else {
            working_byte = '0';
        }

        *--p = working_byte;
        mantissa_bit -= 4;
    }

    if (TARGET_FLOAT_IMPLICIT_J_BIT) {
        if (format.precision || format.alternate_form) {
            *--p = radix_marker;
        }
        *--p = '1';
    }

    if (format.conversion_char == 'a') {
        *--p = 'x';
    } else {
        *--p = 'X';
    }

    *--p = '0';

    if (dec.sgn) {
        *--p = '-';
    } else if (format.sign_options == sign_always) {
        *--p = '+';
    } else if (format.sign_options == space_holder) {
        *--p = ' ';
    }

    return p;
}

// USA: func_02002b90
extern "C" ARM void func_02002b90(decimal* dec, int new_length) {
    char  c;
    char* p;
    int   carry;

    if (new_length < 0) {
    return_zero:
        dec->exp        = 0;
        dec->sig.length = 1;
        *dec->sig.text  = '0';
        return;
    }

    if (new_length >= dec->sig.length) {
        return;
    }

    p = (char*)dec->sig.text + new_length + 1;
    c = *--p - '0';

    if (c == 5) {
        char* q = &((char*)dec->sig.text)[dec->sig.length];

        while (--q > p && *q == '0')
            ;
        carry = (q == p) ? p[-1] & 1 : 1;
    } else {
        carry = (c > 5);
    }

    while (new_length != 0) {
        c = *--p - '0' + carry;

        if ((carry = (c > 9)) != 0 || c == 0) {
            --new_length;
        } else {
            *p = c + '0';
            break;
        }
    }

    if (carry != 0) {
        dec->exp += 1;
        dec->sig.length = 1;
        *dec->sig.text  = '1';
        return;
    } else if (new_length == 0) {
        goto return_zero;
    }

    dec->sig.length = new_length;
}

// USA: func_02002cb4
extern "C" ARM char* func_02002cb4(long double num, char* buff, print_format format) {
    decimal dec;
    decform form;
    char*   p;
    char* q;
    int   n, digits, sign;
    int   int_digits, frac_digits;
    int   radix_marker;

    radix_marker = '.';

    if (format.precision > conversion_max) {
        return 0;
    }

    form.style  = 0;
    form.digits = 0x20;
    func_0200a300(&form, num, &dec);
    p = (char*)dec.sig.text + dec.sig.length;

    while (dec.sig.length > 1 && *--p == '0') {
        --dec.sig.length;
        ++dec.exp;
    }

    switch (*dec.sig.text) {
        case '0':
            dec.exp = 0;
            break;
        case 'I':
            if (num < 0) {
                p = buff - 5;

                if (isupper(format.conversion_char)) {
                    strcpy(p, "-INF");
                } else {
                    strcpy(p, "-inf");
                }
            } else {
                p = buff - 4;
                if (isupper(format.conversion_char)) {
                    strcpy(p, "INF");
                } else {
                    strcpy(p, "inf");
                }
            }

            return p;

        case 'N':
            if (dec.sgn) {
                p = buff - 5;
                if (isupper(format.conversion_char)) {
                    strcpy(p, "-NAN");
                } else {
                    strcpy(p, "-nan");
                }
            } else {
                p = buff - 4;
                if (isupper(format.conversion_char)) {
                    strcpy(p, "NAN");
                } else {
                    strcpy(p, "nan");
                }
            }

            return p;
    }

    dec.exp += dec.sig.length - 1;
    p    = buff;
    *--p = 0;

    switch (format.conversion_char) {
        case 'g':
        case 'G':

            if (dec.sig.length > format.precision) {
                func_02002b90(&dec, format.precision);
            }

            if (dec.exp < -4 || dec.exp >= format.precision) {
                if (format.alternate_form) {
                    --format.precision;
                } else {
                    format.precision = dec.sig.length - 1;
                }

                if (format.conversion_char == 'g') {
                    format.conversion_char = 'e';
                } else {
                    format.conversion_char = 'E';
                }

                goto e_format;
            }

            if (format.alternate_form) {
                format.precision -= dec.exp + 1;
            } else {
                if ((format.precision = dec.sig.length - (dec.exp + 1)) < 0) {
                    format.precision = 0;
                }
            }

            goto f_format;

        case 'e':
        case 'E':
        e_format:

            if (dec.sig.length > format.precision + 1) {
                func_02002b90(&dec, format.precision + 1);
            }

            n    = dec.exp;
            sign = '+';

            if (n < 0) {
                n    = -n;
                sign = '-';
            }

            for (digits = 0; n || digits < 2; ++digits) {
                *--p = n % 10 + '0';
                n /= 10;
            }

            *--p = sign;
            *--p = format.conversion_char;

            if (buff - p + format.precision > conversion_max) {
                return 0;
            }

            if (dec.sig.length < format.precision + 1) {
                for (n = format.precision + 1 - dec.sig.length + 1; --n;) {
                    *--p = '0';
                }
            }

            for (n = dec.sig.length, q = (char*)dec.sig.text + dec.sig.length; --n;) {
                *--p = *--q;
            }

            if (format.precision || format.alternate_form) {
                *--p = radix_marker;
            }

            *--p = *dec.sig.text;

            if (dec.sgn) {
                *--p = '-';
            } else if (format.sign_options == sign_always) {
                *--p = '+';
            } else if (format.sign_options == space_holder) {
                *--p = ' ';
            }

            break;

        case 'f':
        case 'F':
        f_format:

            if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0) {
                frac_digits = 0;
            }

            if (frac_digits > format.precision) {
                func_02002b90(&dec, dec.sig.length - (frac_digits - format.precision));

                if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0) {
                    frac_digits = 0;
                }
            }

            if ((int_digits = dec.exp + 1) < 0) {
                int_digits = 0;
            }

            if (int_digits + frac_digits > conversion_max) {
                return 0;
            }

            q = (char*)dec.sig.text + dec.sig.length;

            for (digits = 0; digits < (format.precision - frac_digits); ++digits) {
                *--p = '0';
            }

            for (digits = 0; digits < frac_digits && digits < dec.sig.length; ++digits) {
                *--p = *--q;
            }

            for (; digits < frac_digits; ++digits) {
                *--p = '0';
            }

            if (format.precision || format.alternate_form) {
                *--p = radix_marker;
            }

            if (int_digits) {
                for (digits = 0; digits < int_digits - dec.sig.length; ++digits) {
                    *--p = '0';
                }

                for (; digits < int_digits; ++digits) {
                    *--p = *--q;
                }
            } else {
                *--p = '0';
            }

            if (dec.sgn) {
                *--p = '-';
            } else if (format.sign_options == sign_always) {
                *--p = '+';
            } else if (format.sign_options == space_holder) {
                *--p = ' ';
            }

            break;
    }

    return p;
}
