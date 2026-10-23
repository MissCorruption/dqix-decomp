#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void func_ov011_02184a24(void* arg0, void* arg1, int arg2);
struct Struct_ov004_021700c0 { unsigned int unknown_0_[5]; };
extern struct Struct_ov004_021700c0 data_ov004_021700c0;

// USA: func_ov004_021689d8
extern "C" ARM void func_ov004_021689d8(SafeAllocator* arg0, void* arg1) {
    struct Struct_ov004_021700c0 var0 = data_ov004_021700c0;
    void* var1 = arg0->Allocate(0x14);
    memcpy(var1, &var0, 0x14);
    func_ov011_02184a24(arg1, var1, 5);
}
