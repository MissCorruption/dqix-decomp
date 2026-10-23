#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov011_021842a0(void* arg0);

// USA: func_ov011_021845c8
extern "C" ARM void func_ov011_021845c8(char* arg0, void* arg1, unsigned int arg2) {
    func_ov011_021842a0(arg0);
    ((SafeAllocator*)(arg0 + 4))->CreateTypeB(arg1, arg2, 4);
}
