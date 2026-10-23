#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);
extern "C" int sprintf(void* arg0, void* arg1, int arg2);
extern "C" int func_020420e8(void* arg0, void* arg1);
extern char data_020f0046;

// USA: func_02042658
extern "C" ARM void func_02042658(void* arg0, int arg1) {
    char var0[0x20];
    __clear(var0, 0x20);
    if (arg1 < 0) arg1 = -arg1;
    sprintf(var0, &data_020f0046, arg1);
    func_020420e8(var0, arg0);
}
