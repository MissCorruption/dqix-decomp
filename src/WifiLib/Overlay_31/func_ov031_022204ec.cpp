#include <globaldefs.h>

extern "C" unsigned char* func_ov031_022201d8(unsigned char*, unsigned int*, unsigned int*);
extern "C" int func_ov031_022210c4(unsigned char*, const unsigned char*, unsigned int, const unsigned char*, unsigned int);
extern "C" void* memcpy(void*, const void*, unsigned int);

// USA: func_ov031_022204ec
extern "C" THUMB unsigned int func_ov031_022204ec(unsigned char* arg0, unsigned int arg1, unsigned char* arg2, const unsigned char* arg3) {
    unsigned int var0;
    unsigned int var1;
    unsigned char* var2 = func_ov031_022201d8(arg0, &var0, &var1);
    if (!var2) return 0;
    if (var0 != arg1) return 0;
    if (arg3) {
        func_ov031_022210c4(arg2, var2, var1, arg3, 16);
        var1 -= 8;
    } else {
        memcpy(arg2, var2, var1);
    }
    return var1;
}
