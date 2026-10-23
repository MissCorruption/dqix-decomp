#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov004_0217018c { unsigned int unknown_0_[0xd8 / 4]; };
extern struct Struct_ov004_0217018c data_ov004_0217018c;
extern "C" void func_ov011_02184a24(void*, void*, int);

// USA: func_ov004_0216e9cc
extern "C" ARM void func_ov004_0216e9cc(SafeAllocator* arg0, void* arg1) {
    struct Struct_ov004_0217018c var0 = data_ov004_0217018c;
    void* var1 = arg0->Allocate(0xd8);
    memcpy(var1, &var0, 0xd8);
    func_ov011_02184a24(arg1, var1, 0x36);
}
