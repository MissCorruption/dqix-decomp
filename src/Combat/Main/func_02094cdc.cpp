#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0201afd0_5 {
    void* unknown_0_;
};

// USA: func_02094cdc
extern "C" ARM void func_02094cdc(struct Struct_0201afd0_5* arg0, int arg1, SafeAllocator* arg2) {
    arg0->unknown_0_ = arg2->Allocate(arg1 * 20);
}
