#include <globaldefs.h>

extern "C" void func_ov004_0216856c(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

// USA: func_ov004_021683cc
extern "C" ARM int func_ov004_021683cc(void* arg0) {
    func_ov004_0216856c(arg0);
    func_ov011_021848a0(arg0, 2);
    return 0;
}
