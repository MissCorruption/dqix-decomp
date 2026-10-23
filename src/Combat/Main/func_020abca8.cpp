#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020abca8_23752 = 0x5a68 };
#else
enum { Enum_020abca8_23752 = 0x5cc8 };
#endif

#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern AllocatorUnion data_02114e20;

extern "C" int func_02075910(int arg0, void* arg1, unsigned int arg2, int arg3);
extern "C" int func_02075acc(int arg0, void* arg1, unsigned int arg2, int arg3);

// USA: func_020abca8
extern "C" ARM int func_020abca8() {
    GameState* var0 = GameState::GetInstance();
    int var1 = 0;
    *(unsigned char*)((char*)var0 + Enum_020abca8_23752) = var1;

    void* var2 = func_02012d88(&data_02114e20, 0x6fe4);
    if (var2 != NULL) {
        var1 = func_02075910(0x10, var2, 0x6fe4, var1);
        if (var1 != 0) {
            func_02075acc(0x8010, var2, 0x6fe4, 0);
        }
        func_02012da4(&data_02114e20, var2);
    }
    return var1;
}
