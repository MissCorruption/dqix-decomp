#include <globaldefs.h>
extern "C" int func_020ce56c(int, int, int);

// USA: func_020ce810
extern "C" ARM int func_020ce810(int *out8, int *out4) {
    unsigned short local;
    int ret = func_020ce56c((int)(0xf), (int)(1), (int)(&local));
    if (ret != 0) {
        return ret;
    }
    if (out8 != NULL) {
        *out8 = (local & 8) ? 1 : 0;
    }
    if (out4 != NULL) {
        *out4 = (local & 4) ? 1 : 0;
    }
    return ret;
}
