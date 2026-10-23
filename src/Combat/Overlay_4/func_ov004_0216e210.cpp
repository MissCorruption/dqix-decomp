#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
struct Struct_020a9ea4;
extern "C" void func_020a9ea4(struct Struct_020a9ea4* arg0);

extern unsigned char data_ov004_02171034[];

// USA: func_ov004_0216e210
extern "C" ARM int func_ov004_0216e210(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_0216e210_16=0xc, Enum_ov004_0216e210_5=3 };
#else
    enum { Enum_ov004_0216e210_16=0x10, Enum_ov004_0216e210_5=5 };
#endif
    void* var0 = func_ov011_021845f8(arg0, 6);
    if (var0 != NULL) {
        SafeAllocator* var1 = (SafeAllocator*)((char*)var0 + 4);
        *(void**)&data_ov004_02171034[Enum_ov004_0216e210_16] = var1->Allocate(8);
    }
    func_020a9ea4(*(struct Struct_020a9ea4**)&data_ov004_02171034[Enum_ov004_0216e210_16]);
    data_ov004_02171034[Enum_ov004_0216e210_5] = 0;
    return 0;
}
