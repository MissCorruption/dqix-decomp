#include <globaldefs.h>

typedef char* va_list;

extern "C" int func_020c7198(char* dst, unsigned long len, const char* fmt, va_list ap);

// USA: func_020c7158
extern "C" ARM int func_020c7158(char* dst, const char* fmt, va_list ap) {
    return func_020c7198(dst, 0x7fffffff, fmt, ap);
}
