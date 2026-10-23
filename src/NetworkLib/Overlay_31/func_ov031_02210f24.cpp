#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);

// USA: func_ov031_02210f24
extern "C" ARM int func_ov031_02210f24(const char* arg0) {
    if (arg0 != NULL) {
        int var0 = func_020d2ff0(arg0);
        if (var0 > 2) {
            if (var0 <= 0x40) {
                int var1 = var0 - 1;
                int var2 = 1;
                if (var1 > 1) {
                    do {
                        if (arg0[var2] == '.') {
                            return 1;
                        }
                        var2++;
                    } while (var2 < var1);
                }
            }
        }
    }
    return 0;
}
