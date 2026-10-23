#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern int data_020f1474;

struct Struct_02095e90 {
    char unknown_0_[0xa8];
    void* unknown_a8_;
    char unknown_ac_[0x4c4 - 0xa8 - 4];
    int unknown_4c4_;
};

// USA: func_02095e90
extern "C" ARM int func_02095e90(struct Struct_02095e90* arg0, SafeAllocator* arg1) {
    void* var0 = arg1->Allocate(0x198);
    arg0->unknown_a8_ = var0;
    if (var0 == NULL) {
        return 0;
    }
    memset(var0, 0, 0x198);
    arg0->unknown_4c4_ = ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->QueueLoadFile((const char*)((int)&data_020f1474), (SafeAllocator*)(0));
    return 1;
}
