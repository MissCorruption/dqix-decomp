#include <globaldefs.h>

struct Struct_ov004_0215e300 { unsigned int unknown_0_[3]; };
extern "C" void __clear(void* arg0, int arg1);

// USA: func_ov004_0215e300
extern "C" ARM void func_ov004_0215e300(Struct_ov004_0215e300* arg0) {
    Struct_ov004_0215e300 var0;
    __clear(&var0, sizeof(var0));
    *arg0 = var0;
}
