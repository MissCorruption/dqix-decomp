#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_ov003_0216d77c(void* arg0);
extern "C" void func_020a1e54(int arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
struct Struct_02074bd0;
extern "C" void func_02074bd0(struct Struct_02074bd0* arg0);
extern "C" int GetMainBGAssignedVRAMSize(void);
extern "C" void func_020ca458(int a, int b, int c);
extern "C" void func_020a0c0c(void);
extern AllocatorUnion data_02114e20;

// USA: func_ov003_0217f118
extern "C" ARM void func_ov003_0217f118(char* arg0) {
    if (*(void**)(arg0 + 0xc) != 0) {
        func_ov003_0216d77c(*(void**)(arg0 + 0xc));
        *(void**)(arg0 + 0xc) = 0;
        func_020a1e54(1);
    }
    SafeAllocator* var0 = (SafeAllocator*)(arg0 + 0x14);
    void* var1 = var0->GetSignedAllocator();
    if (var1 != 0) {
        var0->Destroy();
        func_02012da4(&data_02114e20, var1);
    }
    func_02074bd0((struct Struct_02074bd0*)(arg0 + 0x2a));
    int var2 = GetMainBGAssignedVRAMSize();
    func_020ca458(0, 0x6000000, var2);
    func_020a0c0c();
    arg0[1] = 1;
}
