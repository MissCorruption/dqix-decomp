#include <globaldefs.h>

// USA: func_02001998
extern "C" ARM int func_02001998(void* arg0, unsigned char arg1) {
    if (!arg0) return 0;
    *(unsigned char*)arg0 = arg1;
    return 1;
}
