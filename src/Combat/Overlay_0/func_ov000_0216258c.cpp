#include <globaldefs.h>
#include "GameState/GameState.h"

struct HpMpGauge0216258c {
    char pad0[8];
    unsigned short maxHP;
    unsigned short maxMP;
    short currHP;
    short currMP;
};

struct CombatantFlags0216258c {
    char pad[0x14];
    unsigned int flags;
};

struct BattleUi0216258c {
#if defined(jpn)
    char pad0[0x21c];
#else
    char pad0[0x2a0];
#endif
    unsigned char* activeBits;
#if defined(jpn)
    char pad2a4[0x371c - 0x220];
#else
    char pad2a4[0x3760 - 0x2a4];
#endif
    char gauges[1];
};

extern "C" int func_020a35e0(unsigned char* obj, unsigned char index);
extern "C" HpMpGauge0216258c* func_ov000_02161318(void* obj, int index);
extern "C" void func_ov000_0217f518(HpMpGauge0216258c* gauge);
extern "C" void func_ov000_02176134(HpMpGauge0216258c* gauge, unsigned short val);
extern "C" void func_ov000_02176150(HpMpGauge0216258c* gauge, unsigned short val);

// USA: func_ov000_0216258c
extern "C" ARM void func_ov000_0216258c(BattleUi0216258c* self) {
    GameState* bs = GameState::GetInstance();
    for (int i = 0; i < 4; i++) {
        if (!func_020a35e0(self->activeBits, i & 0xff)) continue;
        GameObject* c = func_0200ff1c(bs, i);
        if (!c) continue;
        HpMpGauge0216258c* gauge = func_ov000_02161318(self->gauges, i);
        if (!gauge) continue;
        if (gauge->currHP == 0 && !(((CombatantFlags0216258c*)c->currentStats_)->flags & 1)) {
            func_ov000_0217f518(gauge);
        }
        unsigned short hp = c->currentStats_->primaryStats.currHP;
        func_ov000_02176134(gauge, hp);
        gauge->currHP = hp;
        unsigned short mp = c->currentStats_->primaryStats.currMP;
        func_ov000_02176150(gauge, mp);
        gauge->currMP = mp;
        gauge->maxHP = c->baseStats_->primaryStats.maxHP;
        gauge->maxMP = c->baseStats_->primaryStats.maxMP;
    }
}
