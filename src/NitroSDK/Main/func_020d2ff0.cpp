#include <globaldefs.h>

// USA: func_020d2ff0
extern "C" ARM int func_020d2ff0(const char* arg0) {
    int var0 = 0;
    if (arg0[var0] != 0) {
        do {
            var0++;
        } while (arg0[var0] != 0);
    }
    return var0;
}
