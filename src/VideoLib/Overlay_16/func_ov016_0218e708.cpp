#include <globaldefs.h>

extern "C" int func_ov016_0218f16c(void* arg0, void* arg1, int arg2, int arg3);

// USA: func_ov016_0218e708
extern "C" ARM int func_ov016_0218e708(void* arg0, void* arg1, int arg2, int arg3) {
    if (arg0 == NULL) return 0;
    return func_ov016_0218f16c(arg0, arg1, arg2, arg3) == 1;
}
