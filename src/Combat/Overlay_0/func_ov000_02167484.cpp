#include <globaldefs.h>

extern short data_ov000_02183018[4];

// USA: func_ov000_02167484
extern "C" ARM int func_ov000_02167484(short* arg0, int arg1) {
    int var0, var1;
    for (var0 = 0; var0 < 4; var0++) {
        for (var1 = 0; var1 < arg1; var1++) {
            if (data_ov000_02183018[var0] == arg0[var1]) break;
        }
        if (var1 == arg1) {
            arg0[arg1++] = data_ov000_02183018[var0];
        }
    }
    return arg1;
}
