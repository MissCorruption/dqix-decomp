#include <globaldefs.h>

extern unsigned char data_020edf2c[];

// USA: func_020d2ac4
extern "C" ARM unsigned short func_020d2ac4(int arg0) {
    int var0;
    if (arg0 < -723) {
        arg0 = -723;
    } else if (arg0 > 0) {
        arg0 = 0;
    }
    unsigned char var1 = data_020edf2c[arg0 + 0x2d3];
    if (arg0 < -240) {
        var0 = 3;
    } else if (arg0 < -120) {
        var0 = 2;
    } else if (arg0 < -60) {
        var0 = 1;
    } else {
        var0 = 0;
    }
    return (unsigned short)(var1 | (var0 << 8));
}
