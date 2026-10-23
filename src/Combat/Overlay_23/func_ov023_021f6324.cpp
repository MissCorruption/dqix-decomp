#include <globaldefs.h>

extern "C" unsigned long long _ull_mod(unsigned long long arg0, unsigned long long arg1);

// USA: func_ov023_021f6324
extern "C" ARM void func_ov023_021f6324(int arg0, unsigned char* arg1) {
    unsigned long long var0 = 0;
    while (arg0-- > 0) {
        unsigned char var1 = *arg1++;
        var0 = (var0 << 8) + var1;
        var0 = _ull_mod(var0, 0xc2a030d4ULL);
    }
}
