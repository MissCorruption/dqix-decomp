#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0220bb24(unsigned short*, int);
extern "C" void func_ov031_0220bf5c(unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220c0dc(unsigned short*, unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" void func_ov031_0220be38(unsigned short*, unsigned short*, unsigned short*, int);
extern void* (*data_ov031_0224c994)(unsigned int);
extern void (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_0220c2bc
extern "C" ARM void func_ov031_0220c2bc(unsigned short* arg0, unsigned short* arg1, unsigned short* arg2, int arg3, unsigned short* arg4) {
    unsigned short* var0 = (unsigned short*)data_ov031_0224c994(arg3 * 8);
    if (!var0) return;
    unsigned short* var1 = var0 + arg3;
    VectorizedMemset(arg0 + 1, 0, (arg3 - 1) * 2);
    arg0[0] = 1;
    int var2 = (arg3 - func_ov031_0220bb24(arg2, arg3)) * 16;
    if ((unsigned int)var2 < (unsigned int)(arg3 << 4)) { do {
        if ((arg2 + (arg3 - (var2 >> 4)))[-1] & (0x8000u >> (var2 & 15))) {
            VectorizedInvertedMemcpy(arg1, arg0, arg3 * 2);
            ++var2;
            break;
        }
        ++var2;
    } while ((unsigned int)var2 < (unsigned int)(arg3 << 4)); }
    if ((unsigned int)var2 < (unsigned int)(arg3 << 4)) { do {
        func_ov031_0220bf5c(var0, arg0, arg3);
        VectorizedInvertedMemcpy(var0, arg0, arg3 * 2);
        if (arg4) func_ov031_0220c0dc(0, arg0, arg4, arg0, arg3, var1);
        if ((arg2 + (arg3 - (var2 >> 4)))[-1] & (0x8000u >> (var2 & 15))) {
            func_ov031_0220be38(var0, arg0, arg1, arg3);
            VectorizedInvertedMemcpy(var0, arg0, arg3 * 2);
            if (arg4) func_ov031_0220c0dc(0, arg0, arg4, arg0, arg3, var1);
        }
        ++var2;
    } while ((unsigned int)var2 < (unsigned int)(arg3 << 4)); }
    data_ov031_0224c9c0(var0);
}
