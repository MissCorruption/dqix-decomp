#include <globaldefs.h>

#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"

extern "C" void func_020a0cc4(unsigned int);
struct Struct_02114e20;
extern "C" unsigned int func_02012dd0(Struct_02114e20* arg0);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern AllocatorUnion data_02114e20;

// USA: func_020a36cc
extern "C" ARM int func_020a36cc(void** arg0, unsigned int arg1) {
    GameResources* var0 = GetGameResources();
    unsigned int var1 = func_02012dd0((Struct_02114e20*)&data_02114e20);
    if (var1 < arg1) {
        func_020a0cc4(arg1);
        var0->unknown_4490_[0] = 1;
    }
    *arg0 = func_02012d88(&data_02114e20, arg1);
    return 1;
}
