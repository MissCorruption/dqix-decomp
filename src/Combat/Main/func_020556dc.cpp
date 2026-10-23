#include <globaldefs.h>
extern "C" void func_02056d10(struct Struct_020556dc*);
#include "Memory/SafeAllocator.h"


// USA: func_020556dc
extern "C" ARM bool func_020556dc(void** arg0, SafeAllocator* arg1) {
    void* var0;
    if (arg1 == NULL) return false;
    var0 = arg1->Allocate(0x170);
    *arg0 = var0;
    if (var0 == NULL) return false;
    func_02056d10((struct Struct_020556dc*)(var0));
    return true;
}
