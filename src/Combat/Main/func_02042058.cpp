#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* s);
extern "C" int sprintf(char* dst, const char* src);

// USA: func_02042058
extern "C" ARM int func_02042058(char* dst, const char* src) {
    char* end = dst + func_020d2ff0(dst);
    return (end + sprintf(end, src)) - dst;
}
