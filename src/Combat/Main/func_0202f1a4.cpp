#include <globaldefs.h>

extern "C" void func_0204719c(void* arg0);

// USA: func_0202f1a4
extern "C" ARM void func_0202f1a4(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 8; var0++) {
        func_0204719c(arg0 + var0 * 0x88);
    }
    *(int*)(arg0 + 0x440) = 0;
    *(int*)(arg0 + 0x444) = 0;
}
