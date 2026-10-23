#include <globaldefs.h>

extern "C" void* func_ov004_0215e47c(void* arg0, int arg1);
extern "C" void func_ov023_021fccec(void* arg0, void* arg1);
extern "C" void func_ov023_021f66bc(void* arg0, int arg1, void* arg2);

// USA: func_ov004_02162b04
extern "C" ARM int func_ov004_02162b04(void* arg0) {
    void* var0 = func_ov004_0215e47c(arg0, 0x82);
    if (var0 != NULL) {
        func_ov023_021fccec(var0, arg0);
        func_ov023_021f66bc(arg0, 0x87, (void*)1);
    }
    return 0;
}
