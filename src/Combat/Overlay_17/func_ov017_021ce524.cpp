#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* a, void* b, int c);

struct CombatantStats021ce524 {
    char padding[9];
    unsigned char field809;
    unsigned char field80A;
    char padding80B;
    unsigned char field80C;
    unsigned char field80D;
    unsigned char field80E;
    char padding80F;
    unsigned char field810;
};

struct CombatantEventFields021ce524 {
    char padding[0x800];
    CombatantStats021ce524 stats;
};

struct CombatantEventRegion021ce524 {
#if defined(jpn)
    char padding[0x1c];
#else
    char padding[0x34];
#endif
    CombatantEventFields021ce524 fields;
};

struct CombatantData021ce524 {
#if defined(jpn)
    char padding[0x80];
#else
    char padding[0x100];
#endif
    CombatantEventRegion021ce524 eventRegion;
};

extern "C" CombatantData021ce524* func_02053c6c(unsigned char* obj);

struct Sub021ce524 {
    short combatantId;
    signed char field2;
    signed char field3;
    signed char field4;
    signed char field5;
    signed char field6;
    signed char field7;
};

struct LocalEvt021ce524 {
    unsigned char tag;
    unsigned char pad0[3];
    Sub021ce524 sub;
    unsigned char pad2[8];
};

// USA: func_ov017_021ce524
extern "C" ARM void func_ov017_021ce524(short combatantId) {
    LocalEvt021ce524 buf;
    void* p = func_0202ae24();
    buf.tag = 0x29;
    Sub021ce524* s = &buf.sub;
    s->combatantId = combatantId;

    GameObject* combatant = func_0200ff1c(GameState::GetInstance(), combatantId);
    if (combatant == NULL) return;

    CombatantData021ce524* data = func_02053c6c((unsigned char*)combatant);
    if (data == NULL) return;

    CombatantStats021ce524* stats = &data->eventRegion.fields.stats;
    s->field2 = stats->field809;
    s->field3 = stats->field80A;
    s->field4 = stats->field80C;
    s->field5 = stats->field80D;
    s->field6 = stats->field80E;
    s->field7 = stats->field810;
    func_0205e330(p, &buf, 0);
}
