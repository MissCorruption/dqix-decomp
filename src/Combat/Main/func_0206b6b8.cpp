#include <globaldefs.h>
#if defined(jpn)
extern "C" void func_02043270(void*, int, int, int, int);

// JPN: func_0206cf44
extern "C" ARM void func_0206cf44(unsigned char* arg0) {
    unsigned short* var0 = *(unsigned short**)(arg0 + 0x20);
    unsigned short* var1 = *(unsigned short**)(arg0 + 0x24);
    int var2 = 0;
    while (var0 != var1) {
        unsigned short var3 = *var0;
        if (var3 == 0xff01 || var3 == 0xff0c || var3 == 0xff0d) break;
        if (var3 == 0xff18) var2++;
        var0++;
    }
    int var4 = *(int*)(arg0 + 0x1734);
    int var5 = (var2 - 1) * var4 + 12;
    int var6 = (0xc0 - var5) >> 1;
    int var7 = var6 - 0x10;
    int var8 = 0xc0 - var7;
    func_02043270(arg0, 2, var7, 0xfc, var8);
}
#else
#include "std_library_functions.h"

struct Struct_0206b6b8 {
    int unknown_0_;
    char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

extern "C" struct Struct_0206b6b8* func_0204254c(int arg0, int arg1);
extern "C" void func_02042b98(unsigned char* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_0206b6b8
extern "C" ARM void func_0206b6b8(unsigned char* arg0) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x50);
    int var1 = 0;

    for (;;) {
        if (*var0 == 0) break;

        unsigned short var2, var3;
        memcpy(&var3, var0, 2);
        if ((var3 & 0xff00) == 0xff00) {
            memcpy(&var2, var0, 2);
            if (var2 == 0xff01 || var2 == 0xff0c || var2 == 0xff0d) break;
            if (var2 == 0xff18) var1++;
            var0 += 2;
        } else {
            int var4 = (arg0 + 0x1000)[0x9dc];
            int var5 = 1;
            struct Struct_0206b6b8* var6 = func_0204254c((int)var0, var4);
            if (var6) var5 = var6->unknown_5_0_;
            var0 += var5;
        }
    }

    int var7 = *(int*)(arg0 + 0x1000 + 0x864);
    int var8 = (var1 - 1) * var7 + 8;
    var8 = (0xc0 - var8) >> 1;
    int var9 = var8 - 0x10;
    int var10 = 0xc0 - var9;
    func_02042b98(arg0, 2, var9, 0xfc, var10);
}

#endif
