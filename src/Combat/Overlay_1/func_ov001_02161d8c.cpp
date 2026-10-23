#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov001_02161d8c
extern "C" ARM int func_ov001_02161d8c(void* arg0) {
    int var0 = func_0202b7d8((int*)func_0202ae18());
    func_ov017_021d6134(arg0, var0);
    return 1;
}
