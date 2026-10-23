#include <globaldefs.h>

extern unsigned char data_ov031_0224e56c;
extern unsigned char data_ov031_0224e570[16];

// USA: func_ov031_0220f394
extern "C" ARM void func_ov031_0220f394(int arg0) {
    unsigned char var0;
    if (arg0 & 2) {
        var0 = arg0 >> 2;
    } else {
        var0 = (arg0 >> 2) + 25;
    }
    data_ov031_0224e570[data_ov031_0224e56c % 16] = var0;
    if (data_ov031_0224e56c < 16) {
        data_ov031_0224e56c++;
    } else {
        data_ov031_0224e56c = (data_ov031_0224e56c + 1) % 16 + 16;
    }
}
