#include <globaldefs.h>

extern "C" void func_ov017_0218f5a4(void* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov017_0218f758
extern "C" ARM void func_ov017_0218f758(void* arg0) {
    for (int var0 = 0; var0 < 4; var0++) {
        func_ov017_0218f5a4(arg0, var0, 0, 0, 0);
    }
}
