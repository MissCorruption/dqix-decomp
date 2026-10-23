#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

extern "C" void func_020a1ef0(int arg0);
extern SafeAllocator* data_ov001_021658b8[1];
extern "C" void func_ov028_021d8b90(void* arg0);
extern "C" void func_ov028_021d8b44(void* arg0, SafeAllocator* arg1);

// USA: func_ov001_021619bc
extern "C" ARM int func_ov001_021619bc(void) {
#if defined(jpn)
    enum { Enum_ov001_021619bc_1844 = 0x524, Enum_ov001_021619bc_352 = 0x15c, Enum_ov001_021619bc_356 = 0x160 };
#else
    enum { Enum_ov001_021619bc_1844 = 0x734, Enum_ov001_021619bc_352 = 0x160, Enum_ov001_021619bc_356 = 0x164 };
#endif
    func_020a1ef0(5);
    char* var0 = *(char**)((char*)GetGameResources() + 0x3000 + Enum_ov001_021619bc_1844);
    void* var1 = data_ov001_021658b8[0]->Allocate(0x84);
    if (var1 == 0) return 0;
    *(void**)(var0 + Enum_ov001_021619bc_352) = var1;
    *(unsigned char*)(var0 + Enum_ov001_021619bc_356) = 0;
    func_ov028_021d8b90(var1);
    func_ov028_021d8b44(var1, data_ov001_021658b8[0]);
    return 1;
}
