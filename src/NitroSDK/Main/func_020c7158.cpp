#include <globaldefs.h>

typedef char* Type_02001bdc;

extern "C" int func_020c7198(char* arg0, unsigned long arg1, const char* arg2, Type_02001bdc arg3);

// USA: func_020c7158
extern "C" ARM int func_020c7158(char* arg0, const char* arg1, Type_02001bdc arg2) {
    return func_020c7198(arg0, 0x7fffffff, arg1, arg2);
}
