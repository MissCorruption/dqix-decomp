#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020553ac;
extern "C" void func_020553ac(struct Struct_020553ac* arg0);
extern "C" int func_020553ec(void* arg0, int arg1, void* arg2, int arg3, int arg4);

struct Struct_02057de0 {
    unsigned char unknown_0_[0x1ec];
    struct Struct_02057de0* unknown_1ec_;
};

struct Struct_02057de0_2 {
    struct Struct_02057de0* unknown_0_;
    int unknown_4_;
};

// USA: func_02057de0
extern "C" ARM int func_02057de0(Struct_02057de0_2* arg0, int arg1, SafeAllocator* arg2, int arg3, int arg4) {
    Struct_02057de0* var0 = (Struct_02057de0*)arg2->Allocate(0x1f0);
    if (var0 == NULL) return -1;
    func_020553ac((struct Struct_020553ac*)var0);
    if (func_020553ec(var0, arg1, arg2, arg3, arg4) == 0) return -1;
    Struct_02057de0** var1 = &arg0->unknown_0_;
    while (*var1 != NULL) var1 = &(*var1)->unknown_1ec_;
    *var1 = var0;
    return arg0->unknown_4_++;
}
