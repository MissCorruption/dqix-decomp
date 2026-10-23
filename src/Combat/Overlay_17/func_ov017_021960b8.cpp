#include <globaldefs.h>

#if defined(jpn)
enum { kGlobalStateOffset = 0x868, kGlobalFlagOffset = 0x17fc, kSceneFlagOffset = 0x3448, kNodeListOffset = 0x34ec, kPendingActionOffset = 0x4108, kAtmosphericOffset = 0x114 };
#else
enum { kGlobalStateOffset = 0x998, kGlobalFlagOffset = 0x19cb, kSceneFlagOffset = 0x3658, kNodeListOffset = 0x36fc, kPendingActionOffset = 0x4328, kAtmosphericOffset = 0xf4 };
#endif

#include "GameState/GameState.h"
#include "Graphics/AtmosphericEffect.h"
#include "Graphics/LightingManager.h"
#include "NitroSDK/Matrix.h"
#include "Resource/Brightness.h"
#include "Input/Input.h"

struct HeadNode02046b24;
struct Obj020444e0;

struct Timer020707c8 {
    unsigned char field0;
};

struct Global020421a0 {
    char pad0[kGlobalStateOffset];
    int field998;
    char pad1[kGlobalFlagOffset - (kGlobalStateOffset + 4)];
    unsigned char field19cb;
};

struct Battle021960b8 {
    unsigned int flags[2];
    char pad8[kSceneFlagOffset - 0x8];
    unsigned char field3658;
    char pad3659[kNodeListOffset - (kSceneFlagOffset + 1)];
    HeadNode02046b24** nodeList;
    char pad3700[kPendingActionOffset - (kNodeListOffset + 4)];
    unsigned char* pendingAction;
};

extern "C" void* func_020704fc(void);
extern "C" void __clear(void* ptr, int size);
extern "C" void func_020c52e8();
extern "C" void func_020c5414();
extern "C" void func_020c57d4(int, int, int, int, void*);
extern "C" void func_020c5770(int, int, int, int, int, int, int, int, void*);
extern "C" void func_ov017_021a3b30(int);
extern "C" void func_020707c8(Timer020707c8*);
extern "C" int func_02046b24(HeadNode02046b24**);
extern "C" void func_020444e0(Obj020444e0*);
extern "C" void func_ov017_0219ad84(Battle021960b8*);
extern "C" GameObject* func_0200ff1c(GameState*, int);
extern "C" void func_0205337c(GameObject*);
extern "C" unsigned char func_02039820(void*);
extern "C" int func_02039d7c(char*);
extern "C" void func_02096824(unsigned char*);
extern "C" int* func_020936f8();
extern "C" void func_02093f68(char*);
extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_021959ec(void*);
extern "C" Global020421a0* func_020421a0();

extern Vector3fix data_ov017_021d6408;
extern Vector3fix data_ov017_021d6414;
extern int data_ov017_021d8340;
extern int data_ov017_021d8344;
extern int data_ov017_021d834c;
extern int data_ov017_021d8348;
extern int data_ov017_021d8350;

// USA: func_ov017_021960b8
extern "C" ARM void func_ov017_021960b8(Battle021960b8* self) {
    GameState* game = GameState::GetInstance();
    Global020421a0* global = func_020421a0();
    Timer020707c8* timer = (Timer020707c8*)func_020704fc();
    GameObject* leader = game->GetUnknownGameObject();
    game->GetTickCount();

    Vector3fix target = data_ov017_021d6408;
    Vector3fix eye;
    __clear(&eye, sizeof(eye));
    Vector3fix up = data_ov017_021d6414;

    func_020c52e8();
    func_020c5414();
    *(volatile unsigned int*)0x04000440 = 0;
    func_020c57d4((int)&eye, (int)&up, (int)&target, 1, NULL);
    func_020c5770(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, 1, NULL);
    *(volatile unsigned int*)0x04000440 = 2;
    func_ov017_021a3b30((int)self->nodeList);

    if (timer->field0 != 0) {
        func_020707c8(timer);
    }

    if (func_02046b24(self->nodeList) != 2 &&
        func_02046b24(self->nodeList) != 3 &&
        func_02046b24(self->nodeList) != 10) {
        if ((global->field998 != 0 || global->field19cb != 0) &&
            TestFlags04((GameResources*)(self->flags), 0x8000) == 0) {
            func_020444e0((Obj020444e0*)global);
        }
        func_ov017_0219ad84(self);
        if (TestFlags04((GameResources*)(self->flags), 4) == 0) {
            for (int i = 0; i < 4; i++) {
                GameObject* combatant = func_0200ff1c(game, i);
                if (combatant != NULL && combatant->obj3D_.GetFlag(1) == 0) {
                    func_0205337c(combatant);
                }
            }
        }
    }

    if (TestFlags04((GameResources*)(self->flags), 0x800) == 0) {
        LightingManager::GetInstance()->DrawBackgroundGradient();
    }

    if (TestFlags04((GameResources*)(self->flags), 0x80) == 0 && self->field3658 == 0 && leader != NULL &&
        (func_02039820(leader) != 0 || func_02039d7c((char*)leader) != 0)) {
        if (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) {
            if (data_ov017_021d8340 == 0) {
                data_ov017_021d8340 = 1;
                g_touchInput.GetTouchPoint(&data_ov017_021d8344, &data_ov017_021d834c);
            }
            g_touchInput.GetTouchPoint(&data_ov017_021d8348, &data_ov017_021d8350);
        } else {
            data_ov017_021d8340 = 0;
        }
        func_02096824(self->pendingAction);
    }

    func_02093f68((char*)func_020936f8());
    if (((AtmosphericEffectSet*)((char*)func_02012fe4() + kAtmosphericOffset))->Draw()) {
        func_ov017_021959ec(self);
    }
}
