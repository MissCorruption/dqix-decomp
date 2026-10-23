#include <globaldefs.h>

// USA: func_02096100
extern "C" ARM int func_02096100(int arg0, unsigned char *arg1, int arg2) {
    unsigned char var0;
    if (arg2 > 0xcc || arg2 < 0) {
        return 0;
    }
    var0 = 1 << (arg2 & 7);
    return var0 & arg1[arg2 >> 3];
}
