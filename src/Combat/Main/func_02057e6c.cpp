#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020553ac;
extern "C" void func_020553ac(struct Struct_020553ac* arg0);
struct Struct_02055558;
extern "C" int func_02055558(struct Struct_02055558* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

struct Struct_02057e6c {
    unsigned char unknown_0_[0x1ec];
    struct Struct_02057e6c* unknown_1ec_;
};

struct Struct_02057e6c_2 {
    struct Struct_02057e6c* unknown_0_;
    int unknown_4_;
};

// USA: func_02057e6c
extern "C" ARM int func_02057e6c(Struct_02057e6c_2* arg0, int arg1, SafeAllocator* arg2, int arg3, int arg4, int arg5) {
    Struct_02057e6c* var0 = (Struct_02057e6c*)arg2->Allocate(0x1f0);
    if (var0 == NULL) return -1;
    func_020553ac((struct Struct_020553ac*)var0);
    if (func_02055558((struct Struct_02055558*)var0, arg1, (int)arg2, arg3, arg4, arg5) == 0) return -1;
    Struct_02057e6c** var1 = &arg0->unknown_0_;
    while (*var1 != NULL) var1 = &(*var1)->unknown_1ec_;
    *var1 = var0;
    return arg0->unknown_4_++;
}
