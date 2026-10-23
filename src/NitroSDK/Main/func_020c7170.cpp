#include <globaldefs.h>

typedef char* Type_02001bdc;

extern "C" int func_020c7198(char* arg0, unsigned long arg1, const char* arg2, Type_02001bdc arg3);

// USA: func_020c7170
extern "C" ARM int func_020c7170(char* arg0, unsigned long arg1, const char* arg2, ...) {
    Type_02001bdc var0 = (Type_02001bdc)(((unsigned int)&arg2 & ~3u) + 4);
    return func_020c7198(arg0, arg1, arg2, var0);
}
