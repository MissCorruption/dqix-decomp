#include <globaldefs.h>

// USA: func_ov027_021dad84
extern "C" ARM int func_ov027_021dad84(unsigned short *arg0) {
    unsigned short var0 = *arg0++;
    int var1 = 0;
    if (var0 != 0) {
        do {
            var1++;
            var0 = *arg0++;
        } while (var0 != 0);
    }
    return var1;
}
