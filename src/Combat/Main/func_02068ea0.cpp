#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);

extern char data_020f08f8[];
extern char data_020e80cc[];
extern char data_020f08fa[];

// USA: func_02068ea0
extern "C" ARM void func_02068ea0(signed char* arg0, char* arg1) {
    if (arg0[0] < 0) {
        return;
    }
    char var0[0x30];
    __clear(var0, 0x30);
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        if (arg0[0] < 0) {
            break;
        }
        if (var1 != 0) {
            strcat(var0, data_020f08f8);
        }
        signed char var2 = *arg0++;
        strcat(var0, &data_020e80cc[var2 * 0xc]);
    }
    sprintf(arg1, data_020f08fa, var0);
}
