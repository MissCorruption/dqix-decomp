#include <globaldefs.h>

// USA: func_02001aec
extern "C" ARM int func_02001aec(unsigned char* arg0, unsigned char* arg1, int arg2) {
    if (arg2 != 0) {
        do {
            if (*arg0++ != *arg1++) {
                return (arg0[-1] < arg1[-1]) ? -1 : 1;
            }
        } while (--arg2 != 0);
    }
    return 0;
}
