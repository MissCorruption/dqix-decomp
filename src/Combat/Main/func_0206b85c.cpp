#include <globaldefs.h>

extern "C" void func_020696bc(int arg0, int* arg1, int arg2);
extern "C" int func_02042648(int arg0);

// USA: func_0206b85c
extern "C" ARM int func_0206b85c(int arg0, int* arg1, int arg2) {
    int var0;
    func_020696bc(arg0, &var0, 1);
    *arg1 = var0 - (func_02042648(arg2) + 1);
    return 0;
}
