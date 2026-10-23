#include <globaldefs.h>

struct Struct_02008f3c { int unknown_0_; unsigned int unknown_4_; int unknown_8_; int unknown_c_; };

// USA: func_02008f3c
extern "C" ARM int func_02008f3c(struct Struct_02008f3c arg0) {
    char* var0 = (char*)&arg0;
    unsigned int* var1 = (unsigned int*)(var0 + 4);
    *var1 &= 0x7fffffff;
    return arg0.unknown_0_;
}
