#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov001_02161d8c
extern "C" ARM int func_ov001_02161d8c(void* obj) {
    int v = func_0202b7d8((int*)func_0202ae18());
    func_ov017_021d6134(obj, v);
    return 1;
}
