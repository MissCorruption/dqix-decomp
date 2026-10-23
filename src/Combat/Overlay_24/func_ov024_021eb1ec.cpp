#include <globaldefs.h>
#include "GameState/GameState.h"

struct S_10088;
extern "C" int func_02010088(struct S_10088* obj);

struct FlagObj_021da9b0;
extern "C" int func_ov024_021da9b0(struct FlagObj_021da9b0* obj);

struct FlagObj_021da9c8;
extern "C" int func_ov024_021da9c8(struct FlagObj_021da9c8* obj);

struct FlagObj_021de25c;
extern "C" int func_ov024_021de25c(struct FlagObj_021de25c* obj);

extern "C" int func_020882f8(unsigned char* obj);
extern "C" unsigned short func_0202053c(void* obj);

struct StatsInner_021eb1ec {
    char unk[0x3a];
    unsigned char byte0x3a;
    unsigned char low3:3;
    unsigned char bit3:1;
    unsigned char high4:4;
};

// USA: func_ov024_021eb1ec
extern "C" ARM int func_ov024_021eb1ec(void* unused, int combatantId) {
    GameState* battle = GameState::GetInstance();
    GameObject* combatant = func_0200ff1c(battle, combatantId);
    if (combatant == NULL) {
        return 0;
    }
    if (((struct StatsInner_021eb1ec*)combatant->currentStats_)->byte0x3a != 0) {
        ((struct StatsInner_021eb1ec*)combatant->currentStats_)->byte0x3a = 0;
        return 0;
    }
    if (func_0202053c(combatant) < 10) {
        return 0;
    }
    if (func_ov024_021da9c8((struct FlagObj_021da9c8*)combatant)) {
        return 0;
    }
    if (func_ov024_021da9b0((struct FlagObj_021da9b0*)combatant)) {
        return 0;
    }
    if (func_ov024_021de25c((struct FlagObj_021de25c*)combatant)) {
        return 0;
    }
    if (func_020882f8((unsigned char*)combatant->currentStats_)) {
        return 0;
    }
    if (func_02010088((struct S_10088*)combatant)) {
        return 0;
    }
    return ((struct StatsInner_021eb1ec*)combatant->currentStats_)->bit3 == 0;
}
