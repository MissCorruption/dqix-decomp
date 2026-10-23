#include <globaldefs.h>

// USA: func_ov031_0220bc18
extern "C" ARM void func_ov031_0220bc18(unsigned short* arg0, unsigned short* arg1, unsigned int arg2, int arg3) {
    int var0 = 0;
    if (arg3 > 0) {
        do {
            arg2 = arg2 + arg1[var0];
            arg0[var0] = (unsigned short)arg2;
            arg2 = arg2 >> 0x10;
            if (arg2 == 0) break;
            var0++;
        } while (var0 < arg3);
    }
    if (arg0 != arg1) {
        var0++;
        if (var0 < arg3) {
            do {
                arg0[var0] = arg1[var0];
                var0++;
            } while (var0 < arg3);
        }
    }
}
