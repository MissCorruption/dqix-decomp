#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0220bb4c(unsigned short*, int);
extern "C" void func_ov031_0220c0dc(unsigned short*, unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" void func_ov031_0220be38(unsigned short*, unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220bcbc(unsigned short*, unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220bb7c(unsigned short*, unsigned short*, unsigned short*, int);

// USA: func_ov031_0220c450
extern "C" ARM void func_ov031_0220c450(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3, unsigned short* arg4) {
    unsigned short* var0 = arg4 + arg3;
    unsigned short* var1 = var0 + arg3;
    unsigned short* var2 = var1 + arg3;
    unsigned short* var3 = var2 + arg3;
    unsigned short* var4 = var3 + arg3;
    unsigned short* var5 = var4 + arg3;
    unsigned int var6 = arg3 * 2;
    VectorizedInvertedMemcpy(arg1, arg4, var6);
    VectorizedInvertedMemcpy(arg2, var1, var6);
    var2[0] = 1;
    if (func_ov031_0220bb4c(arg4, arg3) > 0) {
        do {
            func_ov031_0220c0dc(var0, var1, arg4, var4, arg3, var5);
            VectorizedInvertedMemcpy(arg4, var1, var6);
            VectorizedInvertedMemcpy(var4, arg4, var6);
            func_ov031_0220be38(var4, var0, var2, arg3);
            func_ov031_0220bcbc(var4, var3, var4, arg3);
            VectorizedInvertedMemcpy(var2, var3, var6);
            VectorizedInvertedMemcpy(var4, var2, var6);
        } while (func_ov031_0220bb4c(arg4, arg3) > 0);
    }
    func_ov031_0220bb7c(var3, var3, arg2, arg3);
    func_ov031_0220c0dc(NULL, var3, arg2, arg0, arg3, var5);
}
