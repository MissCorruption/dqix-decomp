#include <globaldefs.h>

// USA: func_ov031_0221b158
extern "C" ARM unsigned char func_ov031_0221b158(unsigned char* arg0) {
    int var0;
    int var1 = 0;
    var0 = 0;
    do {
        int var2 = 0;
        unsigned char var3 = arg0[var1];
        do {
            if ((var3 >> var2) & 1) var0++;
            var2++;
        } while (var2 < 8);
        var1++;
    } while (var1 < 4);
    return (unsigned char)var0;
}
