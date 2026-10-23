#include <globaldefs.h>
#if defined(jpn)
#define data_020efee4 data_020efeec
#endif

extern "C" int func_020d2ff0(const char* s);
extern "C" int sprintf(char* dst, const char* fmt, ...);
extern "C" const char data_020efee4[];

// USA: func_02041c08
extern "C" ARM int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5) {
    char* end = dst + func_020d2ff0(dst);
    return (end + sprintf(end, data_020efee4, a1, a2, a3, a4, a5)) - dst;
}
