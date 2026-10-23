#include <globaldefs.h>

// USA: func_ov000_0215a8d4
extern "C" ARM void func_ov000_0215a8d4(unsigned char* arg0, int arg1) {
    unsigned char* var0 = arg0 + 0x8d5c;
    var0[arg1]++;
    if (var0[arg1] > 0x63) {
        var0[arg1] = 0x63;
    }
    if (arg1 == 9) {
        var0[arg1] = 1;
    }
}
