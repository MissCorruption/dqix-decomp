#include <globaldefs.h>

// USA: func_020424ac
extern "C" ARM char* func_020424ac(char* arg0) {
    if (arg0 != 0) {
        while (*arg0 != 0) {
            if (*arg0 == '>' && arg0[1] != '>') {
                return arg0;
            }
            arg0++;
        }
    }
    return 0;
}
