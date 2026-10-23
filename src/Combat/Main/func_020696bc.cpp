#include <globaldefs.h>

extern "C" int func_02005a94(char* arg0);

// USA: func_020696bc
extern "C" ARM int func_020696bc(char* arg0, int* arg1, int arg2) {
    int var0;
    for (var0 = 0; var0 < arg2; var0++) {
        char var1 = *arg0;
        if (var1 != 0 && ((var1 >= '0' && var1 <= '9') || var1 == '-')) {
            arg1[var0] = func_02005a94(arg0);
            for (;;) {
                char var2 = *arg0;
                if (var2 == 0) break;
                if (var2 == ',' || var2 == '>') { arg0++; break; }
                arg0++;
            }
        }
    }
    return 0;
}
