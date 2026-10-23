#include <globaldefs.h>

extern "C" void func_020696bc(int arg0, int* arg1, int arg2);

// USA: func_0206b8cc
extern "C" ARM int func_0206b8cc(int arg0, int* arg1) {
    int var0;
    func_020696bc(arg0, &var0, 1);
    *arg1 = *arg1 + var0;
    return 0;
}
