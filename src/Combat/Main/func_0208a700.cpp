#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" GameObject* func_0200fea4(GameState* battleStruct, int combatantId);
extern "C" int func_0208a03c(void* p0, int oldVal, int id, int* outPtr, int p3);
extern "C" int func_ov000_02154a04(int field0, int id, int flag, int p3);

struct SelectionTable0208a700 { char pad[0x18]; unsigned short values[6]; };
struct Combatant0208a700 { char pad[0x148]; SelectionTable0208a700* table; };

enum ChargeSlot0208a700 { CHARGE_SLOT_NONE = 0, CHARGE_SLOT_FIRST = 1, CHARGE_SLOT_FALLBACK = 2, CHARGE_SLOT_LAST = 5 };

// USA: func_0208a700
extern "C" ARM int func_0208a700(int* p0, int id, int* outPtr, int p3) {
    unsigned char i;
    GameState* bs;
    GameObject* combatant;
    struct ModifiableCombatStats* stats;
    unsigned char* p38;
    ChargeSlot0208a700 none;
    ChargeSlot0208a700 first;
    ChargeSlot0208a700 last;
    ChargeSlot0208a700 fallback;
    int start;
    int end;
    unsigned char count;
    unsigned char offset;
    unsigned char j;
    unsigned char slot;
    SelectionTable0208a700* table;

    none = CHARGE_SLOT_NONE;
    first = CHARGE_SLOT_FIRST;
    last = CHARGE_SLOT_LAST;
    fallback = CHARGE_SLOT_FALLBACK;
    bs = GameState::GetInstance();
    combatant = func_0200fea4(bs, id);
    stats = combatant->currentStats_;
    table = ((Combatant0208a700*)combatant)->table;
    p38 = (unsigned char*)((char*)stats + 0x38);
    *p38 = *p38 % 2u;

    for (i = 0; i < 2; i++) {
        start = none;
        end = none;
        if (*p38 != 0) {
            start = first;
            end = last;
        }
        count = end - start + 1;
        offset = NextRandomMax((struct Random*)*p0, count);
        *p38 = *p38 + 1;
        *p38 = *p38 % 2u;
        for (j = 0; j < count; j++) {
            slot = start + offset;
            if (func_0208a03c(p0, slot, id, outPtr, p3) != 0) {
                return table->values[slot];
            }
            offset++;
            offset %= count;
        }
    }
    *outPtr = 0;
    *outPtr = func_ov000_02154a04(*p0, id, fallback, p3);
    return fallback;
}
