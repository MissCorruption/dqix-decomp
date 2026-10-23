#include <globaldefs.h>

extern "C" int func_ov016_0218f330(void* arg0);

// USA: func_ov016_0218e750
extern "C" ARM int func_ov016_0218e750(void* arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return func_ov016_0218f330(arg0);
}
