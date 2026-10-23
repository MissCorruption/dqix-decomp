#include <globaldefs.h>
#include "GameState/GameState.h"

struct S886b0;
struct S886f8;
struct Obj02088740;
struct Obj02088788;
struct Obj020887d0;

struct CombatantResistances {
    char pad0[0x3e];
    unsigned char resist[21];
};

extern "C" int func_ov000_02156c94(GameObject* combatant);
extern "C" int func_ov000_02156cac(GameObject* combatant);
extern "C" int func_020886b0(struct S886b0* obj);
extern "C" int func_020886f8(struct S886f8* obj);
extern "C" int func_02088740(struct Obj02088740* obj);
extern "C" int func_02088788(struct Obj02088788* obj);
extern "C" int func_020887d0(struct Obj020887d0* obj);

static inline unsigned char* GetResists(ModifiableCombatStats* stats) {
    return ((struct CombatantResistances*)stats)->resist;
}

// USA: func_ov000_02156b38
extern "C" ARM float func_ov000_02156b38(void* self, int combatantIndex, int element) {
    float ward1, ward2, ward3, ward4, ward5;
    float bonus;
    GameObject* combatant = GameState::GetInstance()->GetCombatantByIndex(combatantIndex);
    if (combatant == NULL) {
        return 1.0f;
    }

    bonus = 0.0f;
    if (func_ov000_02156c94(combatant)) {
        bonus = -25.0f;
    } else if (func_ov000_02156cac(combatant)) {
        bonus = 25.0f;
    }

    ward1 = 0.0f;
    if (func_020886b0((struct S886b0*)combatant->currentStats_)) {
        ward1 = -50.0f;
    }
    ward2 = 0.0f;
    if (func_020886f8((struct S886f8*)combatant->currentStats_)) {
        ward2 = -50.0f;
    }
    ward3 = 0.0f;
    if (func_02088740((struct Obj02088740*)combatant->currentStats_)) {
        ward3 = -50.0f;
    }
    ward4 = 0.0f;
    if (func_02088788((struct Obj02088788*)combatant->currentStats_)) {
        ward4 = -50.0f;
    }
    ward5 = 0.0f;
    if (func_020887d0((struct Obj020887d0*)combatant->currentStats_)) {
        ward5 = -50.0f;
    }

    unsigned char idx = element - 1;
    if (element < 1 || element > 21) {
        return 1.0f;
    }
    if (element == 8) {
        bonus = 0.0f;
    } else if (element >= 1 && element <= 7) {
        float wards[7] = {ward1, ward2, ward3, ward3, ward4, ward4, ward5};
        bonus = wards[idx];
    }

    float value = GetResists(combatant->currentStats_)[idx];
    value += bonus;
    if (value < 0.0f) {
        value = 0.0f;
    }
    return value / 100.0f;
}
