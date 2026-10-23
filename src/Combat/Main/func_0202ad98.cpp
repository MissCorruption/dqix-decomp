#include <globaldefs.h>

typedef char* Type_02001bdc;

extern "C" int func_02003c80(char* arg0, int arg1, const char* arg2, Type_02001bdc arg3);
extern "C" void func_0202ad4c(int arg0, int arg1, int arg2, char* arg3);

// USA: func_0202ad98
extern "C" ARM void func_0202ad98(int arg0, int arg1, int arg2, const char* arg3, ...) {
    char var0[0x21];
    Type_02001bdc var1 = (Type_02001bdc)(((unsigned int)&arg3 & ~3u) + 4);
    func_02003c80(var0, 0x21, arg3, var1);
    func_0202ad4c(arg0, arg1, arg2, var0);
}
