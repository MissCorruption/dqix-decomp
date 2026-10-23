#include <globaldefs.h>

// USA: func_02005aa8
extern "C" ARM int func_02005aa8(unsigned short* arg0) {
    int var0 = -1;
    unsigned short var1;
    do {
        var1 = *arg0++;
        var0++;
    } while (var1 != 0);
    return var0;
}
