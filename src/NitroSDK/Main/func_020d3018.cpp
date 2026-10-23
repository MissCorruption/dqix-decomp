#include <globaldefs.h>

// USA: func_020d3018
extern "C" ARM int func_020d3018(const char* arg0, const char* arg1) {
    while (*arg0 == *arg1 && *arg0 != 0) {
        arg0++;
        arg1++;
    }
    return *arg0 - *arg1;
}
