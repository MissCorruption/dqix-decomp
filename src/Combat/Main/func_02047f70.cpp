#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Graphics/VRAMStaging.h"

extern "C" int func_020bb7cc(unsigned int arg0, int arg1, int arg2);

struct Struct_02047f70 {
    char unknown_0_[0x10];
    int unknown_10_;
    char unknown_14_[0x84 - 0x14];
    unsigned char unknown_84_0_ : 1;
    unsigned char unknown_84_1_ : 1;
    unsigned char unknown_84_2_ : 1;
    unsigned char unknown_84_3_ : 1;
    unsigned char unknown_84_4_ : 1;
    unsigned char unknown_84_5_ : 1;
    unsigned char unknown_84_6_ : 1;
    unsigned char unknown_84_7_ : 1;
};

// USA: func_02047f70
extern "C" ARM void func_02047f70(struct Struct_02047f70* arg0, void* arg1, unsigned int arg2, SafeAllocator* arg3) {
    unsigned int var0 = ((unsigned int)func_020bb7cc(arg2, 0, 0) << 16) >> 13;
    bool var1 = true;
    if (arg0->unknown_84_2_ && arg3 != NULL) {
        void* var2 = arg3->Allocate(arg2);
        if (var2 != NULL) {
            memcpy(var2, arg1, arg2);
            arg1 = var2;
            var1 = false;
        }
    }
    StageMemoryToVRAM(VRAMSubregion_TexturePalette, arg1, var0, arg2, false, var1);
    arg0->unknown_10_ = (int)var0;
}
