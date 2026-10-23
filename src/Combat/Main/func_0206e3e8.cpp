#include <globaldefs.h>

extern short data_020e87c0[];

// USA: func_0206e3e8
extern "C" ARM short func_0206e3e8(int arg0, int arg1) {
    short var0 = 0;
    short* var1 = data_020e87c0;
    int var2;
    for (var2 = 0; var2 < 0x20; var2++, var1++) {
        if (*var1 == arg1) {
            var0 = (short)var2;
            break;
        }
    }
    return var0;
}
