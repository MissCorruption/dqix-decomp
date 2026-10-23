#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_020425b4(int arg0, int arg1);
extern unsigned char data_020e7a50;

// USA: func_02042764
extern "C" ARM void func_02042764(unsigned char* arg0, char* arg1, int arg2) {
    if (!arg1) return;
    if (!arg0) {
        if (arg1) *arg1 = 0;
        return;
    }
    unsigned char var0;
    unsigned char var1 = *((unsigned char*)&data_020e7a50 + 8);
    var0 = *((unsigned char*)&data_020e7a50 + 9);
    unsigned char var2[2];
    for (;;) {
        unsigned char var3 = *arg0;
        if (var3 == 0) {
            *arg1 = 0;
            return;
        }
        var2[0] = var1;
        var2[1] = var0;
        void* var4 = var2;
        int var5 = 1;
        void* var6 = func_020425b4(var3, arg2);
        if (var6 != NULL) {
            var4 = *(void**)var6;
            signed char var7 = *((signed char*)var6 + 5);
            var5 = (var7 << 26) >> 26;
        }
        memcpy(arg1, var4, var5);
        arg0++;
        arg1 += var5;
    }
}
