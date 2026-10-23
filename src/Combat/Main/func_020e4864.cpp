#include <globaldefs.h>
#include <std_library_functions.h>
extern "C" int func_020d2ff0(const char*);
extern "C" int func_02001aec(const void*, const void*, unsigned int);
extern char data_020f2d2c[][11];
extern signed char data_020eeab0[][8];
extern char data_020ee9d8[][3];
// USA: func_020e4864
extern "C" ARM void func_020e4864(const char* arg0, char* arg1, int arg2, int, int, int arg5) {
    int var0;
    for (;;) {
        if (!*arg0) break;
        if (*arg0 == '[') {
            int var1 = 0;
            int var2 = 0;
            for (;;) {
                if (!data_020f2d2c[var2][0]) break;
                int var3 = func_020d2ff0(data_020f2d2c[var2]);
                if (func_02001aec(arg0 + 1, data_020f2d2c[var2], var3) == 0) {
                    if (arg2 >= 0 && arg5 >= 0) {
                        int var4 = data_020eeab0[var2][arg2 + arg5 * 2] * 3;
                        const char* var5 = (const char*)data_020ee9d8;
                        var0 = func_020d2ff0(var5 + var4);
                        memcpy(arg1, var5 + var4, var0);
                        arg1 += var0;
                    }
                    arg0 += var3 + 1;
                    var1 = true;
                    break;
                }
                var2++;
            }
            if (var1) continue;
        }
        *arg1++ = *arg0++;
    }
    *arg1 = *arg0;
}
