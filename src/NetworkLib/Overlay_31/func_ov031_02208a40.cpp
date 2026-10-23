#include <globaldefs.h>

extern "C" int func_ov031_022089f4(int arg0, int arg1, int arg2, unsigned short arg3);

extern unsigned short data_ov031_022496fc[2];

// USA: func_ov031_02208a40
extern "C" ARM int func_ov031_02208a40(int arg0, int arg1, int arg2) {
    unsigned int var0 = 0;
    do {
        if (func_ov031_022089f4(arg0, arg1, arg2, data_ov031_022496fc[var0]) != 0) {
            return data_ov031_022496fc[var0];
        }
        var0++;
    } while (var0 < 2);
    return 0;
}
