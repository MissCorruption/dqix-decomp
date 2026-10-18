#include <globaldefs.h>

// MSL printf.c: parse_format
typedef char* va_list;
#define __va_align(size) ((((unsigned long)(size)) + 3U) & ~3U)
#define va_arg(ap, type) (*(type*)(((ap) += __va_align(sizeof(type))) - __va_align(sizeof(type))))

extern const unsigned short data_020e69ac[];  // __ctype_mapC

static inline int isdigit(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int)(data_020e69ac[c] & 8);
}

// A union so `*format = f` is a bitwise block copy (ldm/stm), as the C original's struct
// assignment was; a C++ struct's implicit operator= copies member by member.
union PrintFormat02001bdc {
    struct {
        unsigned char justification_options;
        unsigned char sign_options;
        unsigned char precision_specified;
        unsigned char alternate_form;
        unsigned char argument_options;
        unsigned char conversion_char;
        int field_width;
        int precision;
    };
};

// USA: func_02001bdc  (semantic: parse_format)
extern "C" ARM const char* func_02001bdc(const char* format_string, va_list* arg, PrintFormat02001bdc* format) {
    PrintFormat02001bdc f;
    const char* s = format_string;
    int c;
    int flag_found;

    f.justification_options = 1;
    f.sign_options = 0;
    f.precision_specified = 0;
    f.alternate_form = 0;
    f.argument_options = 0;
    f.field_width = 0;
    f.precision = 0;

    if ((c = *++s) == '%') {
        f.conversion_char = c;
        *format = f;
        return s + 1;
    }

    while (1) {
        flag_found = 1;

        switch (c) {
            case '-':
                f.justification_options = 0;
                break;

            case '+':
                f.sign_options = 1;
                break;

            case ' ':
                if (f.sign_options != 1) {
                    f.sign_options = 2;
                }
                break;

            case '#':
                f.alternate_form = 1;
                break;

            case '0':
                if (f.justification_options != 0) {
                    f.justification_options = 2;
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
            f.justification_options = 0;
            f.field_width = -f.field_width;
        }

        c = *++s;
    } else {
        while (isdigit(c)) {
            f.field_width = (f.field_width * 10) + (c - '0');
            c = *++s;
        }
    }

    if (f.field_width > 509) {
        f.conversion_char = 0xff;
        *format = f;
        return s + 1;
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
                c = *++s;
            }
        }
    }

    flag_found = 1;

    switch (c) {
        case 'h':
            f.argument_options = 2;
            if (s[1] == 'h') {
                f.argument_options = 1;
                c = *++s;
            }
            break;
        case 'l':
            f.argument_options = 3;
            if (s[1] == 'l') {
                f.argument_options = 4;
                c = *++s;
            }
            break;
        case 'L':
            f.argument_options = 9;
            break;
        case 'j':
            f.argument_options = 6;
            break;
        case 't':
            f.argument_options = 8;
            break;
        case 'z':
            f.argument_options = 7;
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
            if (f.argument_options == 9) {
                f.conversion_char = 0xff;
                break;
            }

            if (!f.precision_specified) {
                f.precision = 1;
            } else if (f.justification_options == 2) {
                f.justification_options = 1;
            }
            break;

        case 'f':
        case 'F':
            if (f.argument_options == 2 || f.argument_options == 6 ||
                f.argument_options == 7 || f.argument_options == 8 ||
                f.argument_options == 4) {
                f.conversion_char = 0xff;
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
            if (f.argument_options == 2 || f.argument_options == 6 ||
                f.argument_options == 7 || f.argument_options == 8 ||
                f.argument_options == 4 || f.argument_options == 1) {
                f.conversion_char = 0xff;
            }
            break;

        case 'g':
        case 'G':
            if (!f.precision) {
                f.precision = 1;
            }

        case 'e':
        case 'E':
            if (f.argument_options == 2 || f.argument_options == 6 ||
                f.argument_options == 7 || f.argument_options == 8 ||
                f.argument_options == 4 || f.argument_options == 1) {
                f.conversion_char = 0xff;
                break;
            }

            if (!f.precision_specified) {
                f.precision = 6;
            }
            break;

        case 'p':
            f.conversion_char = 'x';
            f.alternate_form = 1;
            f.argument_options = 3;
            f.precision = 8;
            break;

        case 'c':
            if (f.argument_options == 3) {
                f.argument_options = 5;
            } else if (f.precision_specified || f.argument_options != 0) {
                f.conversion_char = 0xff;
            }
            break;

        case 's':
            if (f.argument_options == 3) {
                f.argument_options = 5;
            } else if (f.argument_options != 0) {
                f.conversion_char = 0xff;
            }
            break;

        case 'n':
            if (f.argument_options == 9) {
                f.conversion_char = 0xff;
            }
            break;

        default:
            f.conversion_char = 0xff;
            break;
    }

    *format = f;

    return s + 1;
}
