#include <globaldefs.h>

// USA: func_ov031_0223e38c
extern "C" ARM int func_ov031_0223e38c(char* arg0, const char* arg1, int arg2) {
    int var0;
    int var1 = 0;
    var0 = 0;
    if (arg2 > 0) do {
        int var2 = *arg1;
        if (var2 != 0) {
            var1++;
            arg1++;
            *arg0++ = var2;
        } else {
            *arg0++ = 0;
        }
        var0++;
    } while (var0 < arg2);
    return var1;
}
