#include <globaldefs.h>

extern "C" int func_020d3160(char* dst, unsigned long len, const char* fmt, char* ap);

// USA: func_020c7198
extern "C" ARM int func_020c7198(char* dst, unsigned long len, const char* fmt, char* ap) {
    return func_020d3160(dst, len, fmt, ap);
}
