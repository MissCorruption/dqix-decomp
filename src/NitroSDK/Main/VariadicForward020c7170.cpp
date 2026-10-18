#include <globaldefs.h>

typedef char* va_list;

extern "C" int func_020c7198(char* dst, unsigned long len, const char* fmt, va_list ap);

// USA: func_020c7170
ARM int VariadicForward020c7170(char* dst, unsigned long len, const char* fmt, ...) {
    va_list ap = (va_list)(((unsigned int)&fmt & ~3u) + 4);
    return func_020c7198(dst, len, fmt, ap);
}
