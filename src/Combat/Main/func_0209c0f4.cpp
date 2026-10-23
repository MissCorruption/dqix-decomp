#include <globaldefs.h>

extern char data_020e8ebc;

// USA: func_0209c0f4
extern "C" ARM int func_0209c0f4(int arg0, int arg1) {
    char* var0;
    if (arg1 != 0x17) return 1;
    if (arg0 < 0) return 1;
    var0 = &data_020e8ebc;
    while (*var0 > -1) {
        if (*var0 == arg0) return 0;
        var0++;
    }
    return 1;
}
