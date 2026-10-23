#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_0218d510(int arg0, void* arg1);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern AllocatorUnion data_02114e20;
extern "C" int func_020100a8(GameState* arg0);
struct Struct_020159c0_2;
extern "C" void func_020159c0(struct Struct_020159c0_2* arg0, int arg1);
extern char data_ov017_021d7bf8[];

// USA: func_ov017_021b5cf8
extern "C" ARM int func_ov017_021b5cf8(char* arg0) {
    if (*(unsigned short*)(arg0 + 0x12) == 0x5617) {
        arg0[0x54] = 1;
        ((SafeAllocator*)(arg0 + 0x58))->ResetAllocatorPointer();
        ((SafeAllocator*)(arg0 + 0x58))->CreateTypeA(func_02012d88(&data_02114e20, 0x4000), 0x4000);
        ((SafeAllocator*)(arg0 + 0x58))->Reset();
        func_ov017_0218d510(((int)GetGameResources()), arg0 + 0x58);
    } else {
        GameState* var0 = GameState::GetInstance();
        void* var1 = func_02012fe4();
        func_020159c0((struct Struct_020159c0_2*)var1, (signed char)func_020100a8(var0));
        char var2[0x80];
        sprintf(var2, data_ov017_021d7bf8, *(signed char*)(arg0 + 0x17), *(signed short*)(arg0 + 0x14));
        *(int*)(arg0 + 0x28) = ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->QueueLoadFile((const char*)((int)var2), (SafeAllocator*)(0));
    }
    return 3;
}
