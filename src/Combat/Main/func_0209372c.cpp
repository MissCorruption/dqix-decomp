#include <globaldefs.h>

// USA: func_0209372c
extern "C" ARM int func_0209372c(int arg0) {
    if (arg0 >= 0 && arg0 < 10000) return 0;
    if (arg0 >= 10000 && arg0 < 20000) return 1;
    if (arg0 >= 20000 && arg0 < 30000) return 2;
    return 3;
}
