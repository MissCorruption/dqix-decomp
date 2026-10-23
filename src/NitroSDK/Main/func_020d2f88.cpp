#include <globaldefs.h>

// USA: func_020d2f88
extern "C" ARM char* func_020d2f88(char* arg0, char* arg1) {
    int var0;
    char* var1;
    char var2;
    int var3;
    var3 = 0;
    if (arg0[var3] != 0) {
        do {
            var1 = arg0 + var3;
            var0 = 0;
            while ((var2 = arg1[var0]) != 0 && *var1 == var2) {
                var1++;
                var0++;
            }
            if (var2 == 0) {
                return arg0 + var3;
            }
            var3++;
        } while (arg0[var3] != 0);
    }
    return 0;
}
