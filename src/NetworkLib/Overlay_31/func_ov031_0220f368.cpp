#include <globaldefs.h>

// USA: func_ov031_0220f368
extern "C" ARM int func_ov031_0220f368(unsigned char *arg0, unsigned char *arg1) {
    int var0 = 0;
    do {
        if (arg0[var0] != arg1[var0]) {
            return 0;
        }
        var0++;
    } while (var0 < 6);
    return 1;
}
