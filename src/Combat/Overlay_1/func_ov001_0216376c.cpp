#include <globaldefs.h>

extern "C" int func_0209ca2c(void* arg0);
extern "C" void func_ov017_021d6134(void*, unsigned int);
extern void* data_02109bf4;

// USA: func_ov001_0216376c
extern "C" ARM int func_ov001_0216376c(void* arg0) {
    if (func_0209ca2c(&data_02109bf4)) {
        func_ov017_021d6134(arg0, 1);
    } else {
        func_ov017_021d6134(arg0, 0);
    }
    return 1;
}
