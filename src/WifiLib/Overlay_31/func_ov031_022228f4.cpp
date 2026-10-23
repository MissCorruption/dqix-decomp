#include <globaldefs.h>

extern "C" int func_ov031_022228c0(char*, int);

// USA: func_ov031_022228f4
extern "C" THUMB int func_ov031_022228f4(char* arg0, const signed char* arg1) {
    char* var0 = arg0;
    int var1 = 0;
    do {
        var0 += func_ov031_022228c0(var0, *arg1++);
        if (var1 < 5) *var0++ = ':';
        ++var1;
    } while (var1 < 6);
    *var0 = 0;
    return var0 - arg0;
}
