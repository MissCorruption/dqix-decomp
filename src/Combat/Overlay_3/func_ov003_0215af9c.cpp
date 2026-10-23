#include <globaldefs.h>
#if defined(jpn)
enum { kRegion998 = 0x868 };
#else
enum { kRegion998 = 0x998 };
#endif
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct BattleMessageScene {
    char unk_0[0x64];
    char messages[0x580 - 0x64];
    unsigned char step;
    char unk_581[0x587 - 0x581];
    unsigned char actorSlot;
    unsigned char nextMode;
    char unk_589[0x59d - 0x589];
    unsigned char busy;
};

struct BattleGlobals {
    char unk_0[kRegion998];
    int messageActive;
};

extern "C" BattleGlobals* func_020421a0(void);
int IsBrightnessTransitionActive(GameResources*);
void SetMainBrightness(GameResources*, int, int);
extern "C" int func_020100b0(GameState*);
extern "C" GameObject* func_0200ff1c(GameState*, int);
extern "C" void func_02046380(BattleGlobals*);
struct Obj02046574;
extern "C" void func_02046574(Obj02046574*, int, char*);
struct Container020e0310;
extern "C" void* func_020e0434(Container020e0310*, int);
extern "C" void func_ov003_02159250(BattleMessageScene*, void*);

// USA: func_ov003_0215af9c
extern "C" ARM void func_ov003_0215af9c(BattleMessageScene* self) {
    GameResources* res = GetGameResources();
    BattleGlobals* g = func_020421a0();
    unsigned char step = self->step;

    if (step == 0) {
        if (!IsBrightnessTransitionActive(res) &&
            GetBrightness((GameResources*)res, false) &&
            GetBrightness((GameResources*)res, true)) {
            SetMainBrightness(res, 0, 0xf);
        }
        self->step++;
    }

    if (step == 1) {
        if (self->busy != 0) return;
        if (IsBrightnessTransitionActive(res)) return;
        if (GetBrightness((GameResources*)res, false)) return;

        if (self->actorSlot == 1) {
            GameState* gs = GameState::GetInstance();
            GameObject* obj = func_0200ff1c(gs, func_020100b0(gs));
            func_02046380(g);
            func_02046574((Obj02046574*)g, 0, (char*)obj->baseStats_);
        }
        g->messageActive = 1;
        func_ov003_02159250(self, func_020e0434((Container020e0310*)self->messages, (short)(self->actorSlot + 0x438)));
        self->step++;
    }

    if (step == 2 && g->messageActive == 0) {
        self->nextMode = 0xb;
        self->step = 0;
    }
}
