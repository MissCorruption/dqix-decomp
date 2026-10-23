#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include <std_library_functions.h>

extern "C" void func_ov031_0220bf5c(unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220be38(unsigned short*, unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220bb7c(unsigned short*, unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220bcbc(unsigned short*, unsigned short*, unsigned short*, int);
extern "C" int func_ov031_0220bdcc(unsigned short*, unsigned short*, int);

// USA: func_ov031_0220c59c
extern "C" ARM void func_ov031_0220c59c(unsigned short* arg0, unsigned short* arg1,
    unsigned short* arg2, int arg3, int arg4, unsigned short* arg5,
    unsigned short* arg6, unsigned short* arg7, unsigned short* arg8) {
    int var0 = arg3 * 2;
    VectorizedInvertedMemcpy(arg0, arg1, var0);
    if (arg2 == (unsigned short*)1) func_ov031_0220bf5c(arg0, arg1, arg3);
    else if (arg2) func_ov031_0220be38(arg0, arg1, arg2, arg3);
    func_ov031_0220be38(arg7, arg0, arg6, arg4);
    int var1 = (arg3 - arg4) * 2;
    VectorizedMemset(arg7 + arg4, 0, var1);
    func_ov031_0220be38(arg8, arg7, arg5, arg3);
    func_ov031_0220bb7c(arg0, arg0, arg8, arg3);
    memmove(arg0, arg0 + arg4, var1);
    VectorizedMemset(arg0 + arg3 - arg4, 0, arg4 * 2);
    int var2 = func_ov031_0220bdcc(arg0, arg5, arg3);
    switch (var2) {
    case 0:
        VectorizedMemset(arg0, 0, var0);
        break;
    case 1:
        func_ov031_0220bcbc(arg0, arg0, arg5, arg3);
        break;
    }
}
