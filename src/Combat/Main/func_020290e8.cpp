#include <globaldefs.h>
#if defined(jpn)
#define func_02029140 func_02028a20
#endif

typedef char* Type_02001bdc;

extern "C" int func_02003c80(char* arg0, int arg1, const char* arg2, Type_02001bdc arg3);
extern "C" void func_02029140(int arg0, int arg1, char* arg2);

// USA: func_020290e8
extern "C" ARM void func_020290e8(int arg0, int arg1, const char* arg2, ...) {
    char var0[0x100];
    Type_02001bdc var1 = (Type_02001bdc)(((unsigned int)&arg2 & ~3u) + 4);
    func_02003c80(var0, 0x100, arg2, var1);
    var0[0xff] = 0;
    func_02029140(arg0, arg1, var0);
}
