#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/CombatantRecovery.h"

struct Entry {
#if defined(jpn)
    char unknown_0_[0xc];
#else
    char unknown_0_[0x30];
#endif
    int unknown_30_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    unsigned short unknown_38_;
    unsigned short unknown_3a_;
};
#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
extern "C" int sprintf(char *arg0, const char *arg1, ...);

// USA: func_ov002_0215b814
extern "C" ARM void func_ov002_0215b814(char *arg0) {
    GameState *var0 = GameState::GetInstance();
    struct Entry *var1;
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        var1 = (struct Entry *) (arg0 + RG(0x1ab0, 0x1a08)) + var2;
        memset(var1, 0, 4);
        GameObject *var3 = func_0200ff1c(var0, var2);
        if (var3 != 0 && var3->baseStats_->unk[0] != 0) {
            sprintf(var1->unknown_0_, var3->baseStats_->unk);
            var1->unknown_34_ = var3->unknown_ac_.unknown_84_->unknown_4_;
            var1->unknown_36_ = var3->baseStats_->primaryStats.maxHP;
            var1->unknown_38_ = var3->unknown_ac_.unknown_84_->unknown_6_;
            var1->unknown_3a_ = var3->baseStats_->primaryStats.maxMP;
            var1->unknown_30_ = var3->unknown_ac_.unknown_84_->unknown_0_;
        }
    }
}
