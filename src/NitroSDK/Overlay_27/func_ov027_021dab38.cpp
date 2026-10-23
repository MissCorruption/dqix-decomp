#include <globaldefs.h>

// USA: func_ov027_021dab38
extern "C" ARM unsigned short func_ov027_021dab38(unsigned short* arg0, int arg1) {
    unsigned int var0 = 0;
    int var1 = arg1 >> 1;
    if (var1 > 0) {
        do {
            var0 += *arg0++;
        } while (--var1 > 0);
    }
    var0 = (var0 >> 16) + (unsigned short)var0;
    var0 = var0 + (var0 >> 16);
    return (unsigned short)(var0 ^ 0xffff);
}
