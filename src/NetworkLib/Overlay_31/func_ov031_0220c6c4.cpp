#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern void* (*data_ov031_0224c994)(unsigned int);
extern void (*data_ov031_0224c9c0)(void*);

extern "C" int func_ov031_0220bb24(unsigned short*, int);
extern "C" void func_ov031_0220bd64(unsigned short*, unsigned short*, int, int);
extern "C" void func_ov031_0220c450(unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" void func_ov031_0220be38(unsigned short*, unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220c0dc(unsigned short*, unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" void func_ov031_0220c59c(unsigned short*, unsigned short*, unsigned short*, int, int, unsigned short*, unsigned short*, unsigned short*, unsigned short*);

// USA: func_ov031_0220c6c4
extern "C" ARM void func_ov031_0220c6c4(unsigned short* arg0, unsigned short* arg1,
    unsigned short* arg2, int arg3, unsigned short* arg4)
{
    int var0 = arg3 * 22;
    unsigned short* var1 = static_cast<unsigned short*>(data_ov031_0224c994(var0));
    if (!var1) {
        return;
    }
    VectorizedMemset(var1, 0, var0);
    int var2;
    int var3;
    unsigned short* var4;
    unsigned short* var5;
    unsigned short* var6;
    unsigned short* var7;
    unsigned short* var8;
    unsigned short* var9;
    var5 = var1 + arg3;
    var6 = var5 + arg3;
    var7 = var6 + arg3;
    var8 = var7 + arg3;
    var9 = var8 + arg3;
    var4 = var9 + arg3;
    var2 = func_ov031_0220bb24(arg4, arg3);
    var1[var2] = 1;
    func_ov031_0220c450(var5, var1, arg4, arg3, var6);
    func_ov031_0220be38(var7, var1, var5, arg3);
    func_ov031_0220bd64(var5, var7, 1, arg3);
    func_ov031_0220c0dc(var5, var5, arg4, 0, arg3, var4);
    func_ov031_0220be38(var6, arg1, var1, arg3);
    func_ov031_0220c0dc(0, var6, arg4, var6, arg3, var4);
    func_ov031_0220c0dc(0, var1, arg4, arg0, arg3, var4);
    for (var3 = 0; var3 < (unsigned int)var2 * 16; var3++) {
        func_ov031_0220c59c(arg0, var9, (unsigned short*)1,
            arg3, var2, arg4, var5, var7, var8);
        if (arg2[var2 - (var3 >> 4) - 1] & (0x8000u >> (var3 & 15))) {
            func_ov031_0220c59c(arg0, var9, var6, arg3,
                var2, arg4, var5, var7, var8);
        }
    }
    func_ov031_0220c59c(arg0, var9, 0, arg3, var2,
        arg4, var5, var7, var8);
    data_ov031_0224c9c0(var1);
}
