#include <globaldefs.h>

extern short data_020e6dc2;
extern signed char data_020e6dc0;

// USA: func_02012f24
extern "C" ARM int func_02012f24(int arg0) {
    short* var0 = &data_020e6dc2;
    signed char* var1 = &data_020e6dc0;
    unsigned int var2;
    for (var2 = 0; var2 < 1; var2++, var0++, var1++) {
        if (*var0 == arg0) return *var1;
    }
    return -1;
}
