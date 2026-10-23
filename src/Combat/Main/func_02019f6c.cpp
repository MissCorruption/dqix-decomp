#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_0201a108(void* arg0, unsigned char* arg1, int arg2);

// USA: func_02019f6c
extern "C" ARM void func_02019f6c(void* arg0, unsigned char* arg1, int arg2) {
    unsigned char var0[9];
    int var1;
    memcpy(var0, arg1, 9);

    switch (arg2) {
    case 1:
        arg1[0] = var0[2];
        arg1[1] = var0[5];
        arg1[2] = var0[8];
        arg1[3] = var0[1];
        arg1[4] = var0[4];
        arg1[5] = var0[7];
        arg1[6] = var0[0];
        arg1[7] = var0[3];
        arg1[8] = var0[6];
        for (var1 = 0; var1 < 9; var1++) {
            func_0201a108(arg0, arg1 + var1, 1);
        }
        break;
    case 2:
        arg1[0] = var0[8];
        arg1[1] = var0[7];
        arg1[2] = var0[6];
        arg1[3] = var0[5];
        arg1[4] = var0[4];
        arg1[5] = var0[3];
        arg1[6] = var0[2];
        arg1[7] = var0[1];
        arg1[8] = var0[0];
        for (var1 = 0; var1 < 9; var1++) {
            func_0201a108(arg0, arg1 + var1, 2);
        }
        break;
    case 3:
        arg1[0] = var0[6];
        arg1[1] = var0[3];
        arg1[2] = var0[0];
        arg1[3] = var0[7];
        arg1[4] = var0[4];
        arg1[5] = var0[1];
        arg1[6] = var0[8];
        arg1[7] = var0[5];
        arg1[8] = var0[2];
        for (var1 = 0; var1 < 9; var1++) {
            func_0201a108(arg0, arg1 + var1, 3);
        }
        break;
    }
}
