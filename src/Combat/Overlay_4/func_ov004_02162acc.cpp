#if defined(jpn)
#define R(j,u) (j)
#define func_ov023_021f66f4 func_ov023_021f66bc
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov004_0215e47c(void* arg0, int arg1);
extern "C" void func_ov023_021fcc68(void* arg0, void* arg1);
#if defined(jpn)
#define func_ov023_021f66f4 func_ov023_021f66bc
extern "C" void func_ov023_021f66f4(void* arg0, int arg1, void* arg2);
#else
extern "C" void func_ov023_021f66f4(void* arg0, int arg1, void* arg2);
#endif

// USA: func_ov004_02162acc
extern "C" ARM int func_ov004_02162acc(void* arg0) {
    void* var0 = func_ov004_0215e47c(arg0, 0x82);
    if (var0 != NULL) {
        func_ov023_021fcc68(var0, arg0);
        func_ov023_021f66f4(arg0, 0x86, (void*)1);
    }
    return 0;
}
