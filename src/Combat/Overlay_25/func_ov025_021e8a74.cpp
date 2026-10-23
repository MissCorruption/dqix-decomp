#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02015ef4_5;
extern "C" void func_0207dfc8(Struct_02015ef4_5* arg0, Struct_02015ef4_5* arg1);

// USA: func_ov025_021e8a74
extern "C" ARM void func_ov025_021e8a74(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (var0[0x30] == 3) return;

    unsigned int var1 = (*(SafeAllocator**)(var0 + 0x10 + var0[0x30] * 4))->GetMaxPossibleAllocation();
    void* var2 = (*(SafeAllocator**)(var0 + 0x10 + var0[0x30] * 4))->Allocate(var1);
    (*(SafeAllocator**)(var0 + 0x10 + (var0[0x30] + 1) * 4))->CreateTypeB(var2, var1, 4);

    unsigned char var3 = var0[0x30];
    Struct_02015ef4_5* var4 = *(Struct_02015ef4_5**)(var0 + 0x20 + var3 * 4);
    Struct_02015ef4_5* var5 = *(Struct_02015ef4_5**)(var0 + 0x20 + (var3 + 1) * 4);
    func_0207dfc8(var4, var5);

    var0[0x30] = var0[0x30] + 1;
}
