#include <globaldefs.h>
#include "std_library_functions.h"
extern "C" void __clear(void*, int);
extern "C" int func_020420e8(char*, int);
struct Struct_0208d42c;
extern "C" void func_0204f41c(Struct_0208d42c*, short, short, char*, int, unsigned char, short*, short*, int);
extern char data_020f120d, data_020f1212, data_020f1217;
#if defined(jpn)
extern char data_020f12e0[], data_020f12e5[], data_020f129b[];
extern "C" int func_020d2ff0(const char*);
extern "C" void func_02050678(Struct_0208d42c*, short, short, const char*, int, unsigned char, short*, short*);
#endif

// USA: func_0208d42c
extern "C" ARM void func_0208d42c(void*, Struct_0208d42c* arg1, short arg2, short arg3, int arg4, unsigned char arg5, unsigned char arg6, unsigned char arg7, unsigned char arg8) {
    if (arg1) {
        char var0[8];
        short var1, var2;
        short var3 = 0;
        __clear(var0, 8);
#if defined(jpn)
        if (arg8) {
            if (arg6 == 2) sprintf(var0, data_020f12e0, arg4);
            else sprintf(var0, data_020f12e5, arg4);
        } else sprintf(var0, data_020f129b, arg4);
        int var4 = func_020d2ff0(var0);
        if (arg7) var3 = (arg6 - var4) * 8;
        func_02050678(arg1, arg2 + var3, arg3, var0, 8, arg5, &var1, &var2);
#else
        if (arg8) {
            if (arg6 == 2) sprintf(var0, &data_020f120d, arg4);
            else sprintf(var0, &data_020f1212, arg4);
        } else sprintf(var0, &data_020f1217, arg4);
        if (arg7) var3 = -func_020420e8(var0, 0);
        func_0204f41c(arg1, arg2 + var3, arg3, var0, 8, arg5, &var1, &var2, 0);
#endif
    }
}
