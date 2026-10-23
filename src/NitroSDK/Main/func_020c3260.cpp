#include <globaldefs.h>

extern "C" long long func_020c30ac(unsigned int, unsigned int);
extern "C" long long func_020c3194(unsigned int, unsigned int);

// USA: func_020c3260
extern "C" ARM long long func_020c3260(int arg0) {
    long long var0;
    if (arg0 < 0) {
        return -func_020c3260(-arg0);
    }
    var0 = (long long)arg0 * 0x145F306DDLL;
    int var1 = (int)(var0 >> 44);
    unsigned long long var2 = (unsigned long long)((var0 >> 12) & 0xFFFFFFFFULL);
    if (var1 & 1) {
        var2 = 0x100000000ULL - var2;
    }
    long long var3;
    if ((var1 + 1) & 2) {
        var3 = func_020c3194((unsigned int)var2, (unsigned int)(var2 >> 32));
    } else {
        var3 = func_020c30ac((unsigned int)var2, (unsigned int)(var2 >> 32));
    }
    if ((var1 & 7) <= 3) {
        return var3;
    }
    return -var3;
}
