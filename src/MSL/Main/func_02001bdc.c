#include <globaldefs.h>

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
#define bad_conversion 0xFF

typedef char* va_list;
#define __fourbytealign(n) ((((unsigned int)(n)) + 3U) & ~3U)
#define va_arg(ap, type) (*(type*)((ap += __fourbytealign(sizeof(type))) - __fourbytealign(sizeof(type))))

extern const unsigned short data_020e69ac[128];

static inline int isdigit(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int)(data_020e69ac[c] & 0x008);
}

// USA: func_02001bdc
ARM const char* func_02001bdc(const char* format_string, va_list* arg, print_format* format) {
    print_format f;
    const char*  s = format_string;
    int          c;
    int          flag_found;

    f.justification_options = right_justification;
    f.sign_options          = only_minus;
    f.precision_specified   = 0;
    f.alternate_form        = 0;
    f.argument_options      = normal_argument;
    f.field_width           = 0;
    f.precision             = 0;

    if ((c = *++s) == '%') {
        f.conversion_char = c;
        *format           = f;
        return ((const char*)s + 1);
    }

    while (1) {
        flag_found = 1;

        switch (c) {
            case '-':
                f.justification_options = left_justification;
                break;

            case '+':
                f.sign_options = sign_always;
                break;

            case ' ':
                if (f.sign_options != sign_always) {
                    f.sign_options = space_holder;
                }
                break;

            case '#':
                f.alternate_form = 1;
                break;

            case '0':
                if (f.justification_options != left_justification) {
                    f.justification_options = zero_fill;
                }
                break;

            default:
                flag_found = 0;
                break;
        }

        if (flag_found) {
            c = *++s;
        } else {
            break;
        }
    }

    if (c == '*') {
        if ((f.field_width = va_arg(*arg, int)) < 0) {
            f.justification_options = left_justification;
            f.field_width           = -f.field_width;
        }

        c = *++s;
    } else {
        while (isdigit(c)) {
            f.field_width = (f.field_width * 10) + (c - '0');
            c             = *++s;
        }
    }

    if (f.field_width > conversion_max) {
        f.conversion_char = bad_conversion;
        *format           = f;
        return ((const char*)s + 1);
    }

    if (c == '.') {
        f.precision_specified = 1;

        if ((c = *++s) == '*') {
            if ((f.precision = va_arg(*arg, int)) < 0) {
                f.precision_specified = 0;
            }

            c = *++s;
        } else {
            while (isdigit(c)) {
                f.precision = (f.precision * 10) + (c - '0');
                c           = *++s;
            }
        }
    }

    flag_found = 1;

    switch (c) {
        case 'h':
            f.argument_options = short_argument;
            if (s[1] == 'h') {
                f.argument_options = char_argument;
                c                  = *++s;
            }
            break;
        case 'l':
            f.argument_options = long_argument;
            if (s[1] == 'l') {
                f.argument_options = long_long_argument;
                c                  = *++s;
            }
            break;
        case 'L':
            f.argument_options = long_double_argument;
            break;
        case 'j':
            f.argument_options = intmax_argument;
            break;
        case 't':
            f.argument_options = ptrdiff_argument;
            break;
        case 'z':
            f.argument_options = size_t_argument;
            break;
        default:
            flag_found = 0;
            break;
    }

    if (flag_found) {
        c = *++s;
    }

    f.conversion_char = c;

    switch (c) {
        case 'd':
        case 'i':
        case 'u':
        case 'o':
        case 'x':
        case 'X':
            if (f.argument_options == long_double_argument) {
                f.conversion_char = bad_conversion;
                break;
            }

            if (!f.precision_specified) {
                f.precision = 1;
            } else if (f.justification_options == zero_fill) {
                f.justification_options = right_justification;
            }
            break;

        case 'f':
        case 'F':
            if (f.argument_options == short_argument || f.argument_options == intmax_argument ||
                f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument ||
                f.argument_options == long_long_argument)
            {
                f.conversion_char = bad_conversion;
                break;
            }

            if (!f.precision_specified) {
                f.precision = 6;
            }
            break;

        case 'a':
        case 'A':
            if (!f.precision_specified) {
                f.precision = 0x0D;
            }
            if (f.argument_options == short_argument || f.argument_options == intmax_argument ||
                f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument ||
                f.argument_options == long_long_argument || f.argument_options == char_argument)
            {
                f.conversion_char = bad_conversion;
            }
            break;

        case 'g':
        case 'G':
            if (!f.precision) {
                f.precision = 1;
            }

        case 'e':
        case 'E':
            if (f.argument_options == short_argument || f.argument_options == intmax_argument ||
                f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument ||
                f.argument_options == long_long_argument || f.argument_options == char_argument)
            {
                f.conversion_char = bad_conversion;
                break;
            }

            if (!f.precision_specified) {
                f.precision = 6;
            }
            break;

        case 'p':
            f.conversion_char  = 'x';
            f.alternate_form   = 1;
            f.argument_options = long_argument;
            f.precision        = 8;
            break;

        case 'c':
            if (f.argument_options == long_argument) {
                f.argument_options = wchar_argument;
            } else if (f.precision_specified || f.argument_options != normal_argument) {
                f.conversion_char = bad_conversion;
            }
            break;

        case 's':
            if (f.argument_options == long_argument) {
                f.argument_options = wchar_argument;
            } else if (f.argument_options != normal_argument) {
                f.conversion_char = bad_conversion;
            }
            break;

        case 'n':
            if (f.argument_options == long_double_argument) {
                f.conversion_char = bad_conversion;
            }
            break;

        default:
            f.conversion_char = bad_conversion;
            break;
    }

    *format = f;

    return ((const char*)s + 1);
}
