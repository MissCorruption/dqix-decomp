#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020695f4 {
    int unknown_0_;
    char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 1;
    signed char unknown_5_7_ : 1;
    char unknown_6_[2];
};

extern "C" char* func_020424ac(char* arg0);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
extern "C" struct Struct_020695f4* func_0204254c(int arg0, int arg1);
extern "C" void func_02067f5c(signed char* arg0, int arg1);

extern char data_020f0916[];

// USA: func_020695f4
extern "C" ARM void func_020695f4(void* arg0, char* arg1, char* arg2, int arg3) {
    for (;;) {
        char var0 = *arg1;
        if (var0 == 0) {
            break;
        }
        if (var0 == '<') {
            char* var1 = func_020424ac(arg1);
            if (var1 != 0 && func_02001aec(arg1 + 1, data_020f0916, 4) == 0) {
                arg1 = var1 + 1;
                struct Struct_020695f4* var2 = func_0204254c((int)arg1, arg3);
                if (var2 != 0 && var2->unknown_5_7_) {
                    int var3 = var2->unknown_5_0_;
                    memcpy(arg2, arg1, var3);
                    func_02067f5c((signed char*)arg2, var3);
                    arg1 += var3;
                    arg2 += var3;
                }
                continue;
            }
        }
        *arg2++ = *arg1++;
    }
    *arg2 = 0;
}
