#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020546c8_11 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_02054eb4
extern "C" ARM bool func_02054eb4(struct Struct_020546c8_11** arg0, SafeAllocator* arg1) {
    struct Struct_020546c8_11* var0;
    if (arg1 == NULL) return false;
    var0 = (struct Struct_020546c8_11*)arg1->Allocate(0xc);
    *arg0 = var0;
    if (var0 == NULL) return false;
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_8_ = 0;
    return true;
}
