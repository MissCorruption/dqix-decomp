#include <globaldefs.h>


// USA: func_ov031_0221e4fc
extern "C" THUMB int func_ov031_0221e4fc(unsigned char* arg0, unsigned char* arg1, int arg2) {
    int var0 = 0;
    goto check;
    for (;;) {
        arg0++;
        arg1++;
    check:
        if (arg2-- <= 0) break;
        var0 = *arg0 - *arg1;
        if (var0 != 0) break;
    }
    return var0;
}
