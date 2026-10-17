#include <globaldefs.h>
#include "std_library_functions.h"

struct Format02003418 {
    unsigned char alignment;
    unsigned char sign;
    unsigned char precisionPresent;
    unsigned char alternate;
    unsigned char length;
    unsigned char conversion;
    unsigned char field6[2];
    int width;
    int precision;
};
typedef char* FormatArguments02003418;
typedef __typeof__((char*)0 - (char*)0) FormatPointerDifference02003418;
#define FORMAT_FOURBYTE_ALIGN02003418(n) (((unsigned long)(n) + 3U) & ~3U)
#define FORMAT_ARGUMENT02003418(ap, type) (*(type*)((ap += FORMAT_FOURBYTE_ALIGN02003418(sizeof(type))) - FORMAT_FOURBYTE_ALIGN02003418(sizeof(type))))
typedef int (*Write02003418)(void*, const char*, unsigned int);
extern "C" const char* func_02001bdc(const char*, FormatArguments02003418*, Format02003418*);
extern "C" char* func_0200216c(int, char*, Format02003418);
extern "C" char* func_020023b8(long long, char*, Format02003418);
extern "C" char* func_02002cb4(double, char*, Format02003418);
extern "C" char* func_020026b4(double, char*, Format02003418);
extern "C" int func_020019c8(char*, const unsigned short*, unsigned int);
extern "C" char* func_02001ac0(const char*, int, unsigned int);
extern const unsigned short data_020eef28[];
extern const char data_020eef2c[];

// USA: func_02003418
extern "C" ARM int func_02003418(Write02003418 write, void* state, const char* format, FormatArguments02003418 args) {
    char padding[1];
    char space;
    Format02003418 spec;
    char buffer[512];
    long long wideValue;
    const char* percent;
    const char* text;
    int width;
    int value;
    int length;
    int total = 0;
    padding[0] = ' ';
    if (*format) do {
        percent = strchr(format, '%');
        if (percent == 0) {
            unsigned int tail = strlen(format);
            total += tail;
            if (tail && !write(state, format, tail)) return -1;
            break;
        }
        unsigned int literal = percent - format;
        total += literal;
        if (literal && !write(state, format, literal)) return -1;
        format = func_02001bdc(percent, &args, &spec);
        switch (spec.conversion) {
        case 'd': case 'i':
            if (spec.length == 3) value = FORMAT_ARGUMENT02003418(args, long);
            else if (spec.length == 4) wideValue = FORMAT_ARGUMENT02003418(args, long long);
            else if (spec.length == 6) wideValue = FORMAT_ARGUMENT02003418(args, long long);
            else if (spec.length == 7) value = FORMAT_ARGUMENT02003418(args, size_t);
            else if (spec.length == 8) value = FORMAT_ARGUMENT02003418(args, FormatPointerDifference02003418);
            else {
                value = FORMAT_ARGUMENT02003418(args, int);
            }
            if (spec.length == 2) value = (short)value;
            if (spec.length == 1) value = (signed char)value;
            if (spec.length == 4 || spec.length == 6) {
                text = func_020023b8(wideValue, buffer + sizeof(buffer), spec);
                if (text == 0) goto invalid;
            } else {
                text = func_0200216c(value, buffer + sizeof(buffer), spec);
                if (text == 0) goto invalid;
            }
            length = buffer + sizeof(buffer) - 1 - text;
            break;
        case 'o': case 'u': case 'x': case 'X':
            if (spec.length == 3) value = FORMAT_ARGUMENT02003418(args, unsigned long);
            else if (spec.length == 4) wideValue = FORMAT_ARGUMENT02003418(args, unsigned long long);
            else if (spec.length == 6) wideValue = FORMAT_ARGUMENT02003418(args, unsigned long long);
            else if (spec.length == 7) value = FORMAT_ARGUMENT02003418(args, size_t);
            else if (spec.length == 8) value = FORMAT_ARGUMENT02003418(args, FormatPointerDifference02003418);
            else {
                value = FORMAT_ARGUMENT02003418(args, unsigned int);
            }
            if (spec.length == 2) value = (unsigned short)value;
            if (spec.length == 1) value = (unsigned char)value;
            if (spec.length == 4 || spec.length == 6) {
                text = func_020023b8(wideValue, buffer + sizeof(buffer), spec);
                if (text == 0) goto invalid;
            } else {
                text = func_0200216c(value, buffer + sizeof(buffer), spec);
                if (text == 0) goto invalid;
            }
            length = buffer + sizeof(buffer) - 1 - text;
            break;
        case 'e': case 'E': case 'f': case 'F': case 'g': case 'G': {
            long double real;
            if (spec.length == 9) {
                real = FORMAT_ARGUMENT02003418(args, long double);
            } else {
                real = FORMAT_ARGUMENT02003418(args, double);
            }
            text = func_02002cb4(real, buffer + sizeof(buffer), spec);
            if (text == 0) goto invalid;
            length = buffer + sizeof(buffer) - 1 - text;
            break;
        }
        case 'a': case 'A': {
            long double real;
            if (spec.length == 9) {
                real = FORMAT_ARGUMENT02003418(args, long double);
            } else {
                real = FORMAT_ARGUMENT02003418(args, double);
            }
            text = func_020026b4(real, buffer + sizeof(buffer), spec);
            if (text == 0) goto invalid;
            length = buffer + sizeof(buffer) - 1 - text;
            break;
        }
        case 's':
            if (spec.length == 5) {
                const unsigned short* wide = FORMAT_ARGUMENT02003418(args, const unsigned short*);
                if (wide == 0) wide = data_020eef28;
                if (func_020019c8(buffer, wide, sizeof(buffer)) < 0) goto invalid;
                text = buffer;
            } else text = FORMAT_ARGUMENT02003418(args, char*);
            if (text == 0) text = data_020eef2c;
            if (spec.alternate) {
                length = (unsigned char)*text++;
                if (spec.precisionPresent && length > spec.precision) length = spec.precision;
            } else if (spec.precisionPresent) {
                length = spec.precision;
                const char* end = func_02001ac0(text, 0, length);
                if (end) length = end - text;
            } else length = strlen(text);
            break;
        case 'n': {
            void* destination = FORMAT_ARGUMENT02003418(args, void*);
            switch (spec.length) {
            case 0: *(int*)destination = total; break;
            case 2: *(short*)destination = total; break;
            case 3: *(long*)destination = total; break;
            case 6: *(long long*)destination = total; break;
            case 7: *(size_t*)destination = total; break;
            case 8: *(FormatPointerDifference02003418*)destination = total; break;
            case 4: *(long long*)destination = total; break;
            default: goto next;
            }
            goto next;
        }
        case 'c':
            buffer[0] = FORMAT_ARGUMENT02003418(args, int);
            text = buffer;
            length = 1;
            break;
        case '%':
            buffer[0] = '%';
            text = buffer;
            length = 1;
            break;
        case 255:
        default:
        invalid:
            {
                int remainder = strlen(percent);
                if (remainder && !write(state, percent, remainder)) return -1;
                return total + remainder;
            }
        }
        width = length;
        if (spec.alignment) {
            padding[0] = spec.alignment == 2 ? '0' : ' ';
            if ((*text == '+' || *text == '-' || *text == ' ') && padding[0] == '0') {
                if (!write(state, text, 1)) return -1;
                text++;
                length--;
            }
            if (width < spec.width) do {
                if (!write(state, padding, 1)) return -1;
                width++;
            } while (width < spec.width);
        }
        if (length && !write(state, text, length)) return -1;
        if (spec.alignment == 0 && width < spec.width) {
            do {
                space = ' ';
                if (!write(state, &space, 1)) return -1;
                width++;
            } while (width < spec.width);
        }
        total += width;
    next:;
    } while (*format);
    return total;
}
