#include <globaldefs.h>

// USA: func_0206dfb0
extern "C" ARM int func_0206dfb0(int arg0, unsigned char* arg1, int arg2) {
    unsigned char var0;
    if (arg2 < 0) {
        return 0;
    }
    var0 = 1 << (arg2 % 8);
    return var0 & arg1[arg2 / 8];
}
