#include <globaldefs.h>
#if defined(jpn)
enum { kRegion998 = 0x868 };
enum { kRegion99c = 0x86c };
enum { kRegion9a0 = 0x870 };
enum { kRegion9a4 = 0x874 };
enum { kRegion19ae = 0x17de };
#else
enum { kRegion998 = 0x998 };
enum { kRegion99c = 0x99c };
enum { kRegion9a0 = 0x9a0 };
enum { kRegion9a4 = 0x9a4 };
enum { kRegion19ae = 0x19ae };
#endif
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"

struct BattleMessageScene {
    char unk_0[0x64];
    char messages[0x580 - 0x64];
    unsigned char step;
};

struct BattleGlobals {
    char unk_0[kRegion998];
    int messageActive;
    char unk_99c[kRegion9a0 - kRegion99c];
    int linkState;
    char unk_9a4[kRegion19ae - kRegion9a4];
    unsigned char linkPending;
};

extern "C" BattleGlobals* func_020421a0(void);
extern "C" GameResources* func_0200fb8c(int*);
struct Actor0209c678;
extern "C" void func_0209c678(Actor0209c678*, int);
void SetBrightness(GameResources*, int, int);
int IsBrightnessTransitionActive(GameResources*);
int IsMainBrightnessTransitionActive(GameResources*);
void SetMainBrightness(GameResources*, int, int);
extern "C" void func_02043124(BattleGlobals*);
extern "C" void func_02043204(char*);
extern "C" void func_ov003_0215c270(BattleMessageScene*, unsigned int, unsigned int);
struct Container020e0310;
extern "C" void* func_020e0434(Container020e0310*, int);
extern "C" void func_ov003_02159250(BattleMessageScene*, void*);
extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int*);
extern "C" void func_ov017_021c37a4(void);

extern unsigned char data_02109bf4;

// USA: func_ov003_0215b1dc
extern "C" ARM void func_ov003_0215b1dc(BattleMessageScene* self) {
    BattleGlobals* g = func_020421a0();
    GameResources* res = func_0200fb8c((int*)GameState::GetInstance());

    if (g->linkState == 3) {
        g->linkPending = 0;
    }

    unsigned char step = self->step;

    if (step == 0) {
        if (g->linkState != 3) return;
        func_0209c678((Actor0209c678*)&data_02109bf4, 0xb4);
        SetBrightness(res, -16, 0xb4);
        self->step++;
    }

    if (step == 1) {
        if (IsBrightnessTransitionActive(res)) return;
        func_02043124(g);
        func_02043204((char*)g);
        SetMainBrightness(res, 0, 0x3c);
        self->step++;
    }

    if (step == 2) {
        func_ov003_0215c270(self, 0, 0x1f);
        if (IsMainBrightnessTransitionActive(res)) return;
        if (BackgroundLoader::GetInstance()->GetNumQueuedTasks() > 0) return;
        g->messageActive = 1;
        func_ov003_02159250(self, func_020e0434((Container020e0310*)self->messages, 0x6e));
        if (func_0202b7d8(func_0202ae18())) {
            func_ov017_021c37a4();
        }
        self->step++;
    }

    if (step == 3) {
        func_ov003_0215c270(self, 0, 0x1f);
    }
}
