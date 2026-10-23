#include <globaldefs.h>

extern "C" int func_ov016_0218f2f0(void*);

// USA: func_ov016_0218e72c
extern "C" ARM int func_ov016_0218e72c(void* arg0) {
    if (arg0 == NULL) return 0;
    return func_ov016_0218f2f0(arg0) == 1;
}
