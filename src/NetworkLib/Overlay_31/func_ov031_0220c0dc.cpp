#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include <std_library_functions.h>

extern "C" int func_ov031_0220bb24(unsigned short* arg0, int arg1);
extern "C" unsigned long long func_ov031_0220c090(unsigned short* arg0);
extern "C" unsigned long long func_ov031_0220c09c(volatile unsigned short* arg0);
extern "C" unsigned long long func_ov031_0220c0ac(unsigned short* p);
extern "C" unsigned long long func_ov031_0220c0c0(unsigned short* p);
extern "C" void func_ov031_0220bee4(unsigned short* arg0, unsigned short* arg1, int arg2, int arg3);
extern "C" int func_ov031_0220bdcc(unsigned short* arg0, unsigned short* arg1, int arg2);
extern "C" void func_ov031_0220bcbc(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3);

// USA: func_ov031_0220c0dc
extern "C" ARM void func_ov031_0220c0dc(unsigned short* arg0, unsigned short* arg1,
    unsigned short* arg2, unsigned short* arg3, int arg4, unsigned short* arg5) {
    int var0;
    unsigned int var1;
    int var2;
    unsigned short* var3;
    unsigned short* var4;
    int var5;
    unsigned long long var6;
    int var7;

    var3 = arg5 + arg4;
    var4 = var3 + arg4;
    VectorizedMemset(var3, 0, arg4 * 4);
    var5 = func_ov031_0220bb24(arg1, arg4);
    var2 = func_ov031_0220bb24(arg2, arg4);
    if (var5 > 0 && var2 > 0) {
        var0 = arg4 - var5 + var2 - 1;
        if (var0 >= arg4) {
            VectorizedInvertedMemcpy(arg1, var4, arg4 * 2);
        } else {
            VectorizedInvertedMemcpy(arg1, var3 + var0, var5 * 2);
            if (var2 > 2) var6 = func_ov031_0220c0ac(arg2 + var2 - 1);
            else if (var2 > 1) var6 = func_ov031_0220c09c(arg2 + var2 - 1);
            else var6 = func_ov031_0220c090(arg2 + var2 - 1);
            if (var0 < arg4) {
                var7 = (arg4 * 2 - 1) * 2;
                do {
                    memmove(var3 + 1, var3, var7);
                    var1 = func_ov031_0220c0c0(var4 + var2) / var6;
                    if (var1 > 0xffff) var1 = 0xffff;
                    while (1) {
                        func_ov031_0220bee4(arg5, arg2, (unsigned short)var1, arg4);
                        if (func_ov031_0220bdcc(var4, arg5, arg4) >= 0) break;
                        var1--;
                    }
                    func_ov031_0220bcbc(var4, var4, arg5, arg4);
                    *var3 = var1;
                    var0++;
                } while (var0 < arg4);
            }
        }
    }
    if (arg0) VectorizedInvertedMemcpy(var3, arg0, arg4 * 2);
    if (arg3) VectorizedInvertedMemcpy(var4, arg3, arg4 * 2);
}
