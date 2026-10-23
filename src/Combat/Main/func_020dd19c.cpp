#include <globaldefs.h>

extern "C" ARM int func_020dd11c(unsigned int arg0, unsigned int arg1);
extern unsigned char data_020ee700[];

// USA: func_020dd19c
extern "C" ARM int func_020dd19c(unsigned int arg0, int arg1) {
    int var0 = 0;
    for (unsigned char var1 = 0; var1 < 4; var1++) {
        unsigned int var2 = func_020dd11c(arg0, var1);
        if (var2 != 0 && var2 <= 0xe) {
            if (data_020ee700[var2] == arg1) {
                var0 = 1;
                break;
            }
        }
    }
    return var0;
}
