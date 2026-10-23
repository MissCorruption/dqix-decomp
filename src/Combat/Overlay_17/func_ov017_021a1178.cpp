#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_020542b4;
struct Struct_ov017_021a1178 {
    unsigned char unknown_0_[0x70];
};

extern "C" void func_020542b4(Struct_020542b4* arg0, SafeAllocator* arg1, char* arg2);

// USA: func_ov017_021a1178
extern "C" ARM void func_ov017_021a1178(GameResources* arg0, int arg1) {
    GameResources* var0 = arg0;
    GameResources::Substruct_12C8* var1 = &var0->substruct_array_12c8[arg1];
    int var2 = arg1 + 1;
    SafeAllocator* var3 = &var0->allocator_array_38[var2];
    Struct_ov017_021a1178* var4 = (Struct_ov017_021a1178*)var0->unknown_2cc_;
    func_020542b4((Struct_020542b4*)var1, var3, (char*)&var4[var2]);
}
