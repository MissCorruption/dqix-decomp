#include <globaldefs.h>

typedef char* Type_02001bdc;

extern "C" int func_020c7158(char* arg0, const char* arg1, Type_02001bdc arg2);

// USA: func_020c7130
extern "C" ARM int func_020c7130(char* arg0, const char* arg1, ...) {
    Type_02001bdc var0 = (Type_02001bdc)(((unsigned int)&arg1 & ~3u) + 4);
    return func_020c7158(arg0, arg1, var0);
}
