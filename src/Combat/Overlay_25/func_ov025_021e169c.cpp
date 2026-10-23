#include <globaldefs.h>

// USA: func_ov025_021e169c
extern "C" ARM void func_ov025_021e169c(unsigned char* arg0, int arg1) {
    for (int var0 = 0; var0 < 0x51; var0++) {
        if (*arg0 == arg1) {
            *arg0 = 0;
        }
        arg0++;
    }
}
