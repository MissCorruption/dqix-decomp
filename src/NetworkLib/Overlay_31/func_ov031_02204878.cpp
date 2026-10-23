#include <globaldefs.h>

// USA: func_ov031_02204878
extern "C" ARM char* func_ov031_02204878(char* arg0) {
    unsigned char var0 = *arg0++;
    if (var0 != 0) {
        do {
            if ((var0 & 0xc0) == 0xc0) {
                return arg0 + 1;
            }
            arg0 += var0;
            var0 = *arg0++;
        } while (var0 != 0);
    }
    return arg0;
}
