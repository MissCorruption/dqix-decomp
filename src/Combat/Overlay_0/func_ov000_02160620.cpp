#include <globaldefs.h>
#include <GameState/GameState.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#define func_ov026_021d8ba0 func_ov026_021d9434
#else
#define RG(usa, jpn) (usa)
#endif

struct SearchStruct;
struct Obj02039fec;
struct FlagWord020466f4;
struct BattleFrame {
    unsigned char field_0x0[RG(0x29c, 0x218)];
    void* random;
    unsigned int field_0x2a0;
    unsigned int field_0x2a4;
    unsigned char action[0xc00];
    int state;
    int nextState;
    unsigned char field_0xeb0[0x18];
    unsigned char elements[RG(0x2898, 0x28d8)];
    unsigned char turnTimer[RG(0x1e14, 0x204c)];
    int mode;
    unsigned char field_0x5578[RG(0x54, 0x50)];
    void* optional;
    unsigned char field_0x55d0[0x24];
    unsigned int flags;
    unsigned char field_0x55f8[0x4b8];
    unsigned char effect[0x1394];
    short slowSpeed;
    unsigned short slowDuration;
    unsigned short slowDelay;
    unsigned char field_0x6e4a[0x1b2];
    unsigned char damping[0x714];
    signed char countdown;
    unsigned char countdownFlag;
    unsigned char field_0x7712[0xbe];
    unsigned char resetDone;
};
struct BattleManager {
    unsigned char field_0x0[RG(0x998, 0x868)];
    int blocked;
};

extern "C" SearchStruct* func_0202ae18();
extern "C" void func_02015438(void*);
extern "C" void func_ov023_021eb43c(void*);
extern "C" int func_020421a0();
extern "C" void func_ov000_021735d0(void*, unsigned int);
extern "C" Obj02039fec* func_02039e70();
extern "C" void func_02039fec(Obj02039fec*);
extern "C" void func_ov000_021824d8(void*);
extern "C" int func_020a1fa8();
extern "C" void func_ov025_021df794(void*);
extern "C" int func_0202c540(SearchStruct*);
extern "C" int func_0202c578(SearchStruct*, int);
extern "C" FlagWord020466f4* func_020d6c00();
extern "C" void func_020466f4(FlagWord020466f4*, unsigned int);
extern "C" void* func_020936f8();
extern "C" void func_020939dc(void*);
extern "C" void func_02093a14(char*);
extern "C" void func_02094030(void*, int, int, int);
extern "C" void func_ov000_0215fb04(void*, int);
extern "C" int func_ov017_02195550(unsigned char*);
extern "C" void func_ov000_021682ec(BattleFrame*);
extern "C" void func_ov000_02163db4(BattleFrame*);
extern "C" void func_ov000_021640dc(BattleFrame*);
extern "C" void func_ov000_0216873c(BattleFrame*);
extern "C" void func_ov000_021688dc(BattleFrame*);
extern "C" void func_ov026_021d8ba0(BattleFrame*);
extern "C" void func_ov000_02169770(unsigned char*);
extern "C" void func_ov025_021db038(BattleFrame*);
extern "C" void func_ov023_021ed9f8(BattleFrame*);
extern "C" void func_ov023_021f4c04(BattleFrame*);
extern "C" void func_ov026_021db090(BattleFrame*);
extern "C" void func_ov000_02160de4(void*);
extern "C" void func_ov000_02160e94(void*);
extern "C" void func_ov000_02160fe4(void*);
extern "C" void func_ov025_021e9558(void*);
extern "C" void func_020a1edc();
extern "C" void func_020a1ef0(int);
extern "C" void func_0205eb80(void*);
extern int data_ov000_02184220;
extern unsigned char data_02108760[0xd0];

// USA: func_ov000_02160620
extern "C" ARM void func_ov000_02160620(BattleFrame* frame) {
    GameState* game = GameState::GetInstance();
    SearchStruct* search = func_0202ae18();
    unsigned char* context = (unsigned char*)GetGameResources();
    if (frame->flags & 0x200) {
        func_02015438(frame->elements);
        if (frame->optional)
            func_ov023_021eb43c(frame->optional);
        if (frame->mode == 0 && (frame->flags & 0x40000) == 0 && (frame->flags & 0x80000) != 0 &&
                ((BattleManager*)func_020421a0())->blocked == 0)
            func_ov000_021735d0(frame->turnTimer, game->GetTickCount());
        func_02039fec(func_02039e70());
        func_ov000_021824d8(frame->damping);
        if (frame->state == 8 && func_020a1fa8() == 4)
            func_ov025_021df794(frame->effect);
        GameObject* object = game->GetGameObjectByIndex(0xc8);
        if (object)
            object->obj3D_.AdvanceEffects();
        if (func_0202c540(search) && func_0202c578(search, 0) && frame->resetDone == 0) {
            func_020466f4(func_020d6c00(), 0x8020);
            void* state = func_020936f8();
            func_020939dc(state);
            func_02093a14((char*)state);
            func_02094030(state, 4, -1, 0);
            frame->resetDone = 1;
        }
    }
    for (int i = 1; i < 4; ++i) {
        if (func_0202c578(search, i))
            func_ov000_0215fb04(frame->random, i);
    }
    if (func_ov017_02195550(context) == 0)
        func_ov000_021682ec(frame);
    switch (frame->state) {
    case 0: func_ov000_02163db4(frame); break;
    case 1: func_ov000_021640dc(frame); break;
    case 4: func_ov000_0216873c(frame); break;
    case 6: func_ov000_021688dc(frame); break;
    case 7:
        if (func_020a1fa8() == 3)
            func_ov026_021d8ba0(frame);
        break;
    case 17: func_ov000_02169770((unsigned char*)frame); break;
    case 8: func_ov025_021db038(frame); break;
    case 9:
        if (func_020a1fa8() == 1) {
            func_ov023_021ed9f8(frame);
            break;
        }
    case 10:
        if (func_020a1fa8() == 1) {
            func_ov023_021f4c04(frame);
            break;
        }
    case 11:
        if (func_020a1fa8() == 3)
            func_ov026_021db090(frame);
        break;
    case 18: func_ov000_02160de4(frame); break;
    case 19: func_ov000_02160e94(frame); break;
    }
    if (frame->flags & 0x200)
        func_ov000_02160fe4(frame);
    if ((frame->flags & 0x2000000) &&
            (frame->state == 8 || frame->state == 7 || frame->state == 1 || frame->state == 0 || frame->state == 9)) {
        if (frame->state == 8)
            func_ov025_021e9558(frame->action);
        frame->flags &= ~0x2000000;
        frame->state = 4;
        frame->nextState = 0;
        data_ov000_02184220 = 1;
    }
    if (data_ov000_02184220) {
        if (frame->state == 7 || frame->state == 11) {
            func_020a1edc();
            func_020a1ef0(3);
        } else if (frame->state == 9 || frame->state == 10) {
            func_020a1edc();
            func_020a1ef0(1);
        }
        data_ov000_02184220 = 0;
    }
    if (frame->slowDuration) {
        unsigned int delta = game->GetEffectiveDeltaTime();
        int speed = game->GetGameSpeed();
        unsigned int elapsed = (unsigned int)((float)delta / ((float)speed / 4096.0f));
        if (elapsed < frame->slowDelay) {
            frame->slowDelay -= elapsed;
        } else if (elapsed < frame->slowDuration) {
            frame->slowDuration -= elapsed;
            game->SetGameSpeed(frame->slowSpeed);
        } else {
            frame->slowDelay = 0;
            frame->slowDuration = 0;
            game->SetGameSpeed(0x1000);
        }
    }
    if (frame->countdown == 0)
        return;
    frame->countdown -= (signed char)game->GetTickCount();
    if (frame->countdown < 0) {
        frame->countdown = 0;
        func_0205eb80(data_02108760);
        frame->countdownFlag = 0;
    }
}
