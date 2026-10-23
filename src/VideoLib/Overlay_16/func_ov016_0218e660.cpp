#include <globaldefs.h>

extern "C" int func_ov016_0218ef14(int* arg0);

// USA: func_ov016_0218e660
extern "C" ARM int func_ov016_0218e660(int* arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return func_ov016_0218ef14(arg0);
}
