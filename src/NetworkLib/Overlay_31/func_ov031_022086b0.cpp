#include <globaldefs.h>

extern "C" int func_ov031_0220868c(const char*);

// USA: func_ov031_022086b0
extern "C" ARM int func_ov031_022086b0(const char* arg0, const char* arg1) {
    for (;;) {
        char var0;
        char var1;
        while ((var0 = *arg0++) == (var1 = *arg1++)) {
            if (var0 == 0) return 0;
        }
        if (var1 != '*') return 1;
        arg0--;
        int var2 = func_ov031_0220868c(arg0);
        int var3 = func_ov031_0220868c(arg1);
        if (var3 > var2) return 1;
        arg0 += var2 - var3;
    }
}
