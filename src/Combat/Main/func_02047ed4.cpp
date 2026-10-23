#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Graphics/VRAMStaging.h"

extern "C" int func_020bb588(unsigned int arg0, int arg1, int arg2);

struct Struct_02047b40_4 {
    unsigned char unknown_0_[0x84];
    unsigned char unknown_84_0_ : 1;
    unsigned char unknown_84_1_ : 1;
    unsigned char unknown_84_2_ : 1;
    unsigned char unknown_84_3_ : 1;
    unsigned char unknown_84_4_ : 1;
    unsigned char unknown_84_5_ : 1;
    unsigned char unknown_84_6_ : 1;
    unsigned char unknown_84_7_ : 1;
};

// USA: func_02047ed4
extern "C" ARM void func_02047ed4(struct Struct_02047b40_4* arg0, int* arg1, void* arg2, unsigned int arg3, SafeAllocator* arg4) {
    int var0 = func_020bb588(arg3, 0, 0);
    unsigned int var1 = ((unsigned int)var0 << 16) >> 13;
    bool var2 = true;
    if (arg0->unknown_84_2_ && arg4 != NULL) {
        void* var3 = arg4->Allocate(arg3);
        if (var3 != NULL) {
            memcpy(var3, arg2, arg3);
            arg2 = var3;
            var2 = false;
        }
    }
    StageMemoryToVRAM(VRAMSubregion_TextureImage, arg2, var1, arg3, false, var2);
    *arg1 = (int)var1;
}
