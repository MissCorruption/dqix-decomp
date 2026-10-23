#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020546c8_12 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_02054e70
extern "C" ARM int func_02054e70(struct Struct_020546c8_12** arg0, SafeAllocator* arg1) {
    struct Struct_020546c8_12* var0;
    if (arg1 == NULL) return 0;
    var0 = (struct Struct_020546c8_12*)arg1->Allocate(0xc);
    *arg0 = var0;
    if (var0 == NULL) return 0;
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_8_ = 0;
    return 1;
}
