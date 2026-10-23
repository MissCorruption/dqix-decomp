#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* s);
extern "C" int func_020420e8(char* label, int extra);
extern "C" int sprintf(char* dst, const char* fmt, ...);
extern char data_020efe91;

// USA: func_02042084
extern "C" ARM int func_02042084(char* buffer, char* label, int width, int extra) {
#if defined(jpn)
    int measured = func_020d2ff0(label);
    measured *= extra;
    int count = ((width - (measured >> 1)) >> 1) + 1;
#else
    int measured = func_020420e8(label, extra);
    int count = ((width - measured) >> 1) + 1;
#endif
    sprintf(buffer + func_020d2ff0(buffer), &data_020efe91, count);
    sprintf(buffer + func_020d2ff0(buffer), label);
    return func_020d2ff0(buffer);
}
