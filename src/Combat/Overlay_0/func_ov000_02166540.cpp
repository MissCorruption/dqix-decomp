#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct SourceTraits {
    unsigned short field_00 : 15;
    unsigned short flag15 : 1;
    unsigned char pad_02[0xe];
    unsigned int field_10 : 28;
    unsigned int flag28 : 1;
    unsigned int field_10_rest : 3;
};
struct CombatantSource {
    Object3D object;
    unsigned char pad_ac[4];
    SourceTraits* traits;
};
struct CombatantNameStats {
    unsigned char pad_00[0x36];
    unsigned short name;
    unsigned char pad_38[0x6c];
};
struct NameCombatant {
    Object3D object;
    unsigned char pad_ac[4];
    unsigned short scale;
    unsigned char pad_b2[0x10];
    unsigned char flags;
    unsigned char pad_c3[0x75];
    CombatantNameStats* stats;
    unsigned char pad_13c[0x40];
    unsigned char mode;
    unsigned char pad_17d[0x13];
};
struct CombatantModelState { unsigned char data[0x70]; };
struct CombatantLookup {
    unsigned char pad_00[0x400];
    unsigned char search[0xc];
    unsigned char names[0xc];
};
struct CombatantRoster {
    union {
        struct {
            unsigned char pad_00[0x158];
            CombatantNameStats stats[8];
            unsigned char search[0xc];
            unsigned char names[0xc];
        };
        struct {
            unsigned char pad_to_lookup[0x278];
            CombatantLookup lookup;
        };
    };
};
struct Struct5e00 {
#if defined(jpn)
    unsigned char pad_00[0x21c];
#else
    unsigned char pad_00[0x2a0];
#endif
    CombatantRoster* roster;
    unsigned char pad_2a4[0xc14];
    CombatantSource* sources[4];
    unsigned short field_ec8;
#if defined(jpn)
    unsigned char pad_eca[0x6014 - 0xe46];
#else
    unsigned char pad_eca[0x4f5a];
#endif
    NameCombatant combatants[8];
    CombatantModelState models[8];
};
struct Container02070e60;
struct Obj0204887c;
struct BinarySearchByComparatorStruct;
struct Bytes02033b88;
struct CombatantScaleEntry {
    unsigned char pad_00[0xc];
    short scale;
};
extern "C" void func_02048614(unsigned char*);
extern "C" void func_02049c88(NameCombatant*, CombatantModelState*);
extern "C" void func_02048588(unsigned char*, unsigned char*);
extern "C" void func_020488ec(char*);
extern "C" char* func_02070fd0(Container02070e60*, int);
extern "C" void func_0204887c(Obj0204887c*, char*);
extern "C" void func_02048bb8(unsigned char*);
extern "C" void func_02048bf8(unsigned char*);
extern "C" CombatantScaleEntry* func_0206f4f0(BinarySearchByComparatorStruct*, int);
extern "C" int func_02033b88(Bytes02033b88*, int);
extern "C" void func_0200fd38(GameState*, int, GameObject*);
extern "C" void func_ov000_02166784(Struct5e00*, unsigned char*, unsigned char*);
extern "C" int func_ov000_02167c28(unsigned char*, int);
extern "C" void func_ov017_02191aac(void*, int, int, int);

// USA: func_ov000_02166540
extern "C" ARM void func_ov000_02166540(Struct5e00* state, int slot, int id, unsigned char mode) {
    if (slot < 0xc0 || slot > 0xc7) return;
    GameState* game = GameState::GetInstance();
    void* effects = GetGameResources();
    CombatantLookup* roster = &state->roster->lookup;
    int index = slot - 0xc0;
    CombatantSource* source = 0;
    for (int i = 0; i < 4; i++) {
        CombatantSource* candidate = state->sources[i];
        if (candidate && id == candidate->object.unknown_2_) {
            source = candidate;
            break;
        }
    }
    if (!source) return;
    NameCombatant* combatant = &state->combatants[index];
    if (!combatant) return;
    func_02048614((unsigned char*)combatant);
    CombatantModelState* model = &state->models[index];
    if (!model) return;
    func_02049c88(combatant, model);
    combatant->flags |= 0x20;
    func_02048588((unsigned char*)source, (unsigned char*)combatant);
    combatant->object.SetField06(state->field_ec8);
    combatant->mode = mode;
    combatant->stats = &state->roster->stats[index];
    func_020488ec((char*)combatant);
    if (combatant->stats->name) {
        char* name = func_02070fd0((Container02070e60*)state->roster->names, combatant->stats->name);
        if (name) func_0204887c((Obj0204887c*)combatant, name);
    }
    combatant->object.EnableFlag(8);
    SourceTraits* traits = source->traits;
    if (traits) {
        if (!traits->flag28) func_02048bb8((unsigned char*)combatant);
        if (!traits->flag15) func_02048bf8((unsigned char*)combatant);
    }
    CombatantScaleEntry* entry = func_0206f4f0((BinarySearchByComparatorStruct*)roster->search, (short)id);
    if (entry) {
        int value = entry->scale << 2;
        unsigned int scale = 0x324;
        if (value >= 0x4000) scale = 0xc9;
        else if (value >= 0x3000) scale = 0x10c;
        else if (value >= 0x2000) scale >>= 1;
        combatant->scale = scale;
    }
    func_02033b88((Bytes02033b88*)combatant, 0);
    func_0200fd38(game, slot, (GameObject*)combatant);
    func_ov000_02166784(state, (unsigned char*)source, (unsigned char*)combatant);
    func_ov000_02167c28((unsigned char*)state, slot);
    GameObject* registered = game->GetCombatantByIndex(slot);
    if (registered) {
        struct CombatFlags { unsigned char pad_00[0x14]; unsigned int flags; };
        if (((CombatFlags*)registered->currentStats_)->flags & 0x1000000) func_ov017_02191aac(effects, 1, slot, 4);
    }
}
