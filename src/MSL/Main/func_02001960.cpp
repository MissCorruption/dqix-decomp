#include <globaldefs.h>

// USA: func_02001960
extern "C" ARM int func_02001960(unsigned short* arg0, const signed char* arg1, int arg2) {
    if (arg1 == 0) return 0;
    if (arg2 == 0) return -1;
    if (arg0 != 0) {
        *arg0 = (unsigned char)*arg1;
    }
    if (*arg1 == 0) return 0;
    return 1;
}
