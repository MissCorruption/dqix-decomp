#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov004_02170264 { unsigned int unknown_0_[0x28 / 4]; };
extern struct Struct_ov004_02170264 data_ov004_02170264;
extern "C" void func_ov011_02184a24(void*, void*, int);

// USA: func_ov004_0216f854
extern "C" ARM void func_ov004_0216f854(SafeAllocator* arg0, void* arg1) {
    struct Struct_ov004_02170264 var0 = data_ov004_02170264;
    void* var1 = arg0->Allocate(0x28);
    memcpy(var1, &var0, 0x28);
    func_ov011_02184a24(arg1, var1, 0xa);
}
