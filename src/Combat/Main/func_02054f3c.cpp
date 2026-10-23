#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020546c8_9 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_02054f3c
extern "C" ARM bool func_02054f3c(struct Struct_020546c8_9** arg0, SafeAllocator* arg1) {
    struct Struct_020546c8_9* var0;
    if (arg1 == NULL) return false;
    var0 = (struct Struct_020546c8_9*)arg1->Allocate(0xc);
    *arg0 = var0;
    if (var0 == NULL) return false;
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_8_ = 0;
    return true;
}
