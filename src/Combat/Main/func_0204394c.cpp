#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/VRAMStaging.h"

struct Struct_0204394c {
    unsigned char unknown_0_[0x50];
    unsigned int unknown_50_0_ : 16;
    unsigned int unknown_52_0_ : 16;
};

#if defined(jpn)
#define func_0204394c func_02044104
extern "C" ARM void func_02044104(struct Struct_0204394c* arg0);
enum { Enum_0204394c_0 = 0x700 };
#else
enum { Enum_0204394c_0 = 0 };
#endif

// USA: func_0204394c
extern "C" ARM void func_0204394c(struct Struct_0204394c* arg0) {
    void* var0 = AllocateVRAMStagingMemory(0x3000);
    if (var0 == NULL) {
        return;
    }

    int var1 = arg0->unknown_50_0_ * 8;
    memset(var0, 0, 0x3000);
    StageMemoryToVRAM(VRAMSubregion_TextureImage, var0, var1 + Enum_0204394c_0, 0x3000, true, false);
    FreeVRAMStagingMemory(var0);
}
