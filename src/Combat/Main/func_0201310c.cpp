#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02013158(void* arg0, void* arg1, void* arg2, void* arg3);

struct Struct_020e6dfc { unsigned int unknown_0_[3]; };
extern Struct_020e6dfc data_020e6dfc;

// USA: func_0201310c
extern "C" ARM void func_0201310c(void* arg0) {
    char var0[12];
    int var1;
    Struct_020e6dfc var2;
    __clear(var0, 0xc);
    var2 = data_020e6dfc;
    var1 = 0;
    func_02013158(arg0, var0, &var1, &var2);
}
