#include <globaldefs.h>

typedef char* va_list;

int VaListForwardUnlimited020c7158(char* dst, const char* fmt, va_list ap);

// USA: func_020c7130
ARM int VariadicForward020c7130(char* dst, const char* fmt, ...) {
    va_list ap = (va_list)(((unsigned int)&fmt & ~3u) + 4);
    return VaListForwardUnlimited020c7158(dst, fmt, ap);
}
