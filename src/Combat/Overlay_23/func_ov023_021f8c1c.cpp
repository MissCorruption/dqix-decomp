#include <globaldefs.h>

extern "C" void __clear(void*, int);

struct Struct_ov023_021f8c1c { unsigned int unknown_0_[3]; };

// USA: func_ov023_021f8c1c
extern "C" ARM void func_ov023_021f8c1c(void* arg0) {
    Struct_ov023_021f8c1c var0;
    __clear(&var0, 0xc);
    *(Struct_ov023_021f8c1c*)arg0 = var0;
}
