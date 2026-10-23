#include <globaldefs.h>

extern "C" void func_02047b40(void* arg0, int arg1, int arg2);

// USA: func_02047b30
extern "C" ARM void func_02047b30(void* arg0, int arg1, int arg2, int arg3) {
    func_02047b40(arg0, arg1, arg3);
}
