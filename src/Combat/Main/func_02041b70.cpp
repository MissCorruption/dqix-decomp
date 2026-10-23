#include <globaldefs.h>

#if defined(jpn)
#define data_020efeb3 data_020efebb
#endif

extern "C" int func_020d2ff0(const char* s);
extern "C" int sprintf(char* dst, const char* fmt, ...);
extern const char data_020efeb3;

// USA: func_02041b70
extern "C" ARM int func_02041b70(char* dst, int n, const char* name) {
    char* end = dst + func_020d2ff0(dst);
    return (end + sprintf(end, &data_020efeb3, n, name)) - dst;
}
