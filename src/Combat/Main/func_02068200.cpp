#include <globaldefs.h>

extern "C" int func_02005a94(signed char*);

// USA: func_02068200
extern "C" ARM int func_02068200(signed char* arg0) {
    while (*arg0 != 0) {
        if (*arg0 >= 0x30 && *arg0 <= 0x39)
            return func_02005a94(arg0);
        arg0++;
    }
    return 0;
}
