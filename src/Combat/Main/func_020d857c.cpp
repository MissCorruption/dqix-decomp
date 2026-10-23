#include <globaldefs.h>

// USA: func_020d857c
extern "C" ARM int func_020d857c(signed char* arg0, signed char* arg1) {
    if (arg0 == NULL) return 0;
    if (arg1 == NULL) return 0;
    if (arg0 == arg1) return 1;
    while (*arg0 != 0 && *arg1 != 0 && *arg0 == *arg1) {
        arg0++;
        arg1++;
    }
    return (*arg1 == 0) ? 1 : 0;
}
