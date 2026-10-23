#include <globaldefs.h>

extern "C" void* func_ov000_02160130(void);
extern "C" void func_ov000_02163710(void* arg0, int arg1);
extern "C" void func_ov000_021636ac(void* arg0);

// USA: func_ov025_021e82e4
extern "C" ARM int func_ov025_021e82e4(unsigned char* arg0) {
    void* var0 = func_ov000_02160130();
    if (arg0[8]) {
        func_ov000_02163710(var0, 1);
    } else {
        func_ov000_021636ac(var0);
    }
    return 1;
}
