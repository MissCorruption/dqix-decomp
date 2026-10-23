#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x218
#define REGION_OFFSET_1 0x7000
#define REGION_OFFSET_2 0x2c
#define REGION_OFFSET_3 0x30
#define REGION_OFFSET_4 0xb40
#define REGION_OFFSET_5 0x21c
#else
#define REGION_OFFSET_0 0x29c
#define REGION_OFFSET_1 0x6000
#define REGION_OFFSET_2 0xe3c
#define REGION_OFFSET_3 0xe40
#define REGION_OFFSET_4 0x950
#define REGION_OFFSET_5 0x2a0
#endif

#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Util/Random.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" void func_0202ae18(void);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov000_0215faa4(struct Random* arg0, unsigned int arg1, unsigned int arg2);
extern "C" void func_ov000_02169850(void* arg0);
extern "C" void ProcessCombatTurn(void* arg0, void* arg1);
extern "C" void func_ov000_0215e6e8(void* arg0);
extern "C" void func_ov000_02160fbc(void* arg0, int arg1);
extern "C" void func_ov000_02160e48(void* arg0);
extern "C" void* func_0205ec34(void);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);
extern "C" void* func_02010828(GameState* arg0);
extern "C" void func_ov017_021d0d58(void);

// USA: func_ov000_02169770
extern "C" ARM void func_ov000_02169770(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_0202ae18();
    void* var1 = *(void**)(arg0 + REGION_OFFSET_0);
    func_020100a8(var0);
    func_ov000_0215faa4((struct Random*)var1,
        *(unsigned int*)(arg0 + REGION_OFFSET_1 + REGION_OFFSET_2),
        *(unsigned int*)(arg0 + REGION_OFFSET_1 + REGION_OFFSET_3));
    func_ov000_02169850(arg0);
    ((class SafeAllocator*)(arg0 + 0x30))->Reset();

    if (*(unsigned char*)(arg0 + 0x5000 + REGION_OFFSET_4) != 2) {
        ProcessCombatTurn(var1, arg0 + 0x30);
        func_ov000_0215e6e8(var1);
    }

    ((class SafeAllocator*)(arg0 + 0x30))->Reset();
    *(unsigned char*)(arg0 + 0x5000 + REGION_OFFSET_4) = 1;
    func_ov000_02160fbc(arg0, 0x800000);
    func_ov000_02160e48(arg0);

    if (*(int*)((char*)*(int**)(arg0 + REGION_OFFSET_5) + 0xc) == 0x19 &&
        *(signed char*)((char*)*(void**)(arg0 + REGION_OFFSET_0) + 0x8e00 + 0x14) == 1) {
        void* var2 = func_0205ec34();
        func_0206df6c(var2, (unsigned char*)var2 + 0x8c, 3, 1);
        *(int*)((char*)func_02010828(var0) + 0x2000 + 0xc94) = 0x6d;
        func_ov017_021d0d58();
    }
}
