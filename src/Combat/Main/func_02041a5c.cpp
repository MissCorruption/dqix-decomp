#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* s);
extern "C" int sprintf(char* dst, const char* fmt, ...);
extern const char data_020efe7f;

#if defined(jpn)
#define func_02041a5c func_020420e8
extern "C" ARM int func_020420e8(char* dst, int y);
#endif

// USA: func_02041a5c
extern "C" ARM int func_02041a5c(char* dst, int y) {
    char* end = dst + func_020d2ff0(dst);
    return (end + sprintf(end, &data_020efe7f, y)) - dst;
}
