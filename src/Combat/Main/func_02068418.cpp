#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02068418 {
    int unknown_0_;
    char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

extern "C" struct Struct_02068418* func_0204254c(int arg0, int arg1);
extern "C" char* func_020424ac(char* arg0);
extern "C" void func_02067f5c(signed char* arg0, int arg1);
extern char data_020f08f4[];

// USA: func_02068418
extern "C" ARM void func_02068418(void* arg0, char* arg1, char* arg2, int arg3) {
    if (arg1 == 0 || arg2 == 0) return;
    signed char var0;
    for (;;) {
        var0 = *arg1;
        if (var0 == 0) {
            break;
        }
        if (var0 == 0x5c && arg1[1] == 0x6e) {
            arg2[0] = var0;
            arg2[1] = arg1[1];
            arg1 += 2;
            arg2 += 2;
            continue;
        }
        struct Struct_02068418* var1 = func_0204254c((int)arg1, arg3);
        if (var1 != 0) {
            int var2 = var1->unknown_5_0_;
            memcpy(arg2, arg1, var2);
            arg1 += var2;
            arg2 += var2;
            continue;
        }
        if (var0 == 0x3c) {
            char* var3 = func_020424ac(arg1);
            if (var3 != 0) {
                int var4 = var3 - arg1;
                memcpy(arg2, arg1, var4 + 1);
                func_02067f5c((signed char*)arg2, var4 + 1);
                arg1 += var4 + 1;
                arg2 += var4 + 1;
                continue;
            }
        }
        if (var0 == 0x20 || var0 == 0x2f || var0 == 0xa) {
            *arg2++ = *arg1++;
            continue;
        }
        memcpy(arg2, data_020f08f4, 3);
        arg1++;
        arg2 += 3;
    }
    *arg2 = var0;
}
