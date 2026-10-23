#include <globaldefs.h>
extern "C" void func_02028cfc(void*);

extern "C" void func_020287b4(void* arg0);
extern "C" void func_0200ef44(void* arg0, int arg1, int arg2, void* arg3);

// USA: func_02028d2c
extern "C" ARM void* func_02028d2c(void* arg0) {
    func_020287b4(arg0);
#if defined(jpn)
    func_0200ef44(arg0, 4, 0x314, (void*)func_02028cfc);
#else
    func_0200ef44(arg0, 4, 0x318, (void*)func_02028cfc);
#endif
    return arg0;
}
