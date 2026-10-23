#include <globaldefs.h>

extern "C" void func_ov017_02190264(void* arg0, int arg1);

// USA: func_ov017_02190238
extern "C" ARM void func_ov017_02190238(void* arg0) {
    for (int var0 = 0; var0 < 4; var0++) {
        func_ov017_02190264(arg0, var0);
    }
}
