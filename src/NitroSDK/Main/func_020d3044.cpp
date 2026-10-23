#include <globaldefs.h>

// USA: func_020d3044
extern "C" ARM int func_020d3044(const unsigned char* arg0, const unsigned char* arg1, int arg2) {
    int var0;
    if (arg2 != 0) {
        var0 = 0;
        if (var0 < arg2) {
            do {
                unsigned char var1 = arg0[var0];
                unsigned char var2 = arg1[var0];
                if (var1 != var2) return var1 - var2;
                var0++;
            } while (var0 < arg2);
        }
    }
    return 0;
}
