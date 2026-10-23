#include <globaldefs.h>
#include <GameState/GameState.h>
#include <std_library_functions.h>

struct Obj02160068 { short code; char pad[0x26]; };
struct Obj021600cc;
struct Node02160068 { char pad0[0x1c]; short index; char pad1[2]; short combatant; unsigned short hp; unsigned short mp; char pad2[0xa]; Node02160068* next; };
struct Node021600cc { char pad0[0xc]; short source; short target; char pad1[7]; unsigned char active; char pad2[8]; Node021600cc* next; };
struct OutStruct0215ccbc { char payload[0x20]; OutStruct0215ccbc* next; };
struct BattleEvents {
    char pad0[0x6060];
    Obj02160068 actions[20];
    Node02160068 summaries[20];
    Node021600cc targets[20];
    OutStruct0215ccbc entries[20];
    char pad1[0x20db];
    unsigned char actionCount;
    unsigned char summaryCount;
    unsigned char targetCount;
    unsigned char entryCount;
};
struct CombatSource { char pad[0x2e]; short id; };
struct ActionResource { char pad[8]; short id; };
struct CombatantEventState { char pad0[0x144]; ActionResource* resource; char pad1[0x39]; unsigned char active; unsigned char pending; };
struct S_10088;
struct ArrayContainsByteStruct;
extern "C" GameObject* func_0200fea4(GameState*, int);
extern "C" int func_ov000_02155154(GameObject*);
extern "C" int func_02010088(S_10088*);
extern "C" int func_ov000_02153c0c(GameObject*);
extern "C" void func_02088e64(unsigned char*);
extern "C" void func_ov000_02160030(void*);
extern "C" void func_ov000_02157cdc(void*);
extern "C" void func_ov000_0215ccbc(int, OutStruct0215ccbc*, GameObject*, short, short, short, unsigned long long, unsigned char);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" void func_ov000_0215ffc4(void*, void*, int);
extern "C" void func_ov000_02160068(Obj02160068*, Node02160068*);
extern "C" void func_ov000_021600cc(Obj021600cc*, Node021600cc*);
extern "C" int func_02086ef0(ArrayContainsByteStruct*, int);
extern "C" void func_ov000_0215a8d4(unsigned char*, int);
static inline short GetSource(GameObject* combatant) { return ((CombatSource*)combatant->currentStats_)->id; }
static inline short GetHP(GameObject* combatant) { SDK_NULL_ASSERT(combatant); return combatant->currentStats_->primaryStats.currHP; }
static inline short GetMP(GameObject* combatant) { SDK_NULL_ASSERT(combatant); return combatant->currentStats_->primaryStats.currMP; }
static inline Obj021600cc* AsTargetAction(Obj02160068* action) { Obj021600cc* value = (Obj021600cc*)action; return value; }

// USA: func_ov000_0215a908
extern "C" ARM void func_ov000_0215a908(BattleEvents* events, int id) {
    if (events->actionCount >= 20 || events->summaryCount >= 20 || events->targetCount >= 20 || events->entryCount >= 20) return;
    Node02160068* summary;
    Node021600cc* target;
    GameObject* combatant = func_0200fea4(GameState::GetInstance(), id);
    if (!combatant || !func_ov000_02155154(combatant)) return;
    short source = GetSource(combatant);
    GameObject* other = GameState::GetInstance()->GetCombatantByIndex(source);
    if (!other || func_02010088((S_10088*)other) || func_ov000_02153c0c(other)) {
        func_02088e64((unsigned char*)combatant->currentStats_);
        ((CombatantEventState*)combatant)->pending = 0;
        return;
    }
    ((CombatantEventState*)combatant)->active = 1;
    ((CombatantEventState*)combatant)->pending = 0;
    Obj02160068* action = &events->actions[events->actionCount];
    func_ov000_02160030(action);
    summary = &events->summaries[events->summaryCount];
    memset(summary, 0, 0x30);
    summary->index = -1;
    summary->next = 0;
    target = &events->targets[events->targetCount];
    func_ov000_02157cdc(target);
    OutStruct0215ccbc* entry = &events->entries[events->entryCount];
    memset(entry, 0, 0x20);
    entry->next = 0;
    action->code = 0x399;
    summary->combatant = id;
    summary->hp = combatant->currentStats_->primaryStats.currHP;
    summary->mp = combatant->currentStats_->primaryStats.currMP;
    func_ov000_0215ccbc((int)events, entry, combatant, 0, GetHP(combatant), GetMP(combatant), 0, 0);
    func_ov000_0215a88c(events, entry, 0x212);
    target->target = id;
    target->active = 1;
    target->source = ((CombatSource*)combatant->currentStats_)->id;
    func_ov000_0215ffc4(target, entry, 0);
    func_ov000_02160068(action, summary);
    func_ov000_021600cc(AsTargetAction(action), target);
    ActionResource* resource = ((CombatantEventState*)combatant)->resource;
    if (func_02086ef0((ArrayContainsByteStruct*)func_02010828(GameState::GetInstance()), target->source) && resource && resource->id == 0x143) func_ov000_0215a8d4((unsigned char*)events, 9);
    events->actionCount++;
    events->summaryCount++;
    events->targetCount++;
    events->entryCount++;
}
