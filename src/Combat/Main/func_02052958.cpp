#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02042764(char* arg0, void* arg1, int arg2);
extern "C" int func_020426bc(void* arg0, void* arg1, int arg2);
extern char data_020ef078;

// USA: func_02052958
extern "C" ARM void func_02052958(char* arg0, char* arg1, int arg2) {
    char var0[0x30];
    char var1[0x30];
    int var2;

    __clear(var0, 0x30);
    __clear(var1, 0x30);
    func_02042764(arg1, var0, 1);
    var2 = func_020426bc(var0, var1, 1);
    memset(arg0 + 0x141, 0, 0xc);
    memcpy(arg0 + 0x141, arg1, var2);
    if (arg2) {
        char var3[0x30];
        __clear(var3, 0x30);
        func_02042764(arg1, var3, 1);
        sprintf(*(char**)(arg0 + 0x134), &data_020ef078, var3);
    }
}
