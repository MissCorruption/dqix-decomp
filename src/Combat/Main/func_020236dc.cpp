#include <globaldefs.h>
#include "Combat/ActionDisplay.h"
#include "Combat/CombatantRecovery.h"
#include "Combat/MapDisplay.h"
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Member020236dc : CombatantRecovery {
    unsigned char padding190[0x1b2 - 0x190];
    unsigned short field1b2;
};
struct Node02021f88 {
    unsigned char type;
    unsigned char id;
    unsigned char count;
    unsigned char pad3;
    short* data;
    int x;
    int y;
    Node02021f88* next;
};
struct Container02021394;
struct SaveFlags020236dc {
    unsigned char padding[0x8c];
    unsigned char flags[1];
};
struct FlagWord02046708;
struct S3f58;
extern "C" void* func_02012fe4();
extern "C" void* func_0202ae18();
extern "C" void* func_0205ec34();
extern "C" void* func_020d6c00();
extern "C" GameObject* func_0200ff58(GameState*, int);
extern "C" int func_02046708(FlagWord02046708*, unsigned int);
extern "C" void func_02053f58(S3f58*, int*, int*);
extern "C" unsigned char func_02053f74(void*);
extern "C" int func_020100a8(GameState*);
extern "C" int func_02039874(void*);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" int func_02021394(Container02021394*, int, int, short*, short*);
#if defined(jpn)
#define data_020e704c data_020e78e8
#endif
extern unsigned short data_020e704c[];

struct ActionOutputState020236dc {
    CombatActionPosition* entries;
    int count;
};

// USA: func_020236dc
extern "C" ARM int func_020236dc(CombatActionPosition* entries, unsigned char* groups, Vector3i* position) {
    GameState* game = GameState::GetInstance();
    GameResources* resources = GetGameResources();
    GameObject* protagonist = game->GetProtagonist();
    Zone3D* zone = (Zone3D*)func_02012fe4();
    func_0202ae18();
    SaveFlags020236dc* saved = (SaveFlags020236dc*)func_0205ec34();
    FlagWord02046708* flags = (FlagWord02046708*)func_020d6c00();
    Container02021394* container = (Container02021394*)resources->unknown_ptr_36d0;
    ActionOutputState020236dc output;
    output.entries = entries;
    output.count = 0;
    for (int i = 0; i < 4; ++i) {
        Member020236dc* member = (Member020236dc*)func_0200ff1c(game, i);
        if (!member || !(member->recoveryFlags & 8)) continue;
        if (func_0200ff58(game, i)) {
            unsigned char index = 0;
            unsigned short zoneId = zone->unknown_4_;
            int excluded = 0;
            for (; data_020e704c[index]; ++index) {
                if (zoneId == data_020e704c[index]) {
                    excluded = 1;
                    break;
                }
            }
            if (excluded) continue;
        }
        CombatActionPosition* entry = &output.entries[output.count];
        entry->combatantId = i;
        ++output.count;
        entry->flag11 = member->field1b2 && !func_02046708(flags, 0x80000) ? 1 : 0;
        entry->flag12 = protagonist ? protagonist->obj3D_.GetField06() == member->obj3D_.GetField06() : 0;
        if (member->recoveryFlags & 0x10) {
            func_02053f58((S3f58*)member, &entry->position.x, &entry->position.z);
            entry->group = func_02053f74(member);
            entry->variant = groups[entry->group];
            ++groups[entry->group];
            if (i == func_020100a8(game)) {
                position->x = entry->position.x;
                position->z = entry->position.z;
            }
        } else {
            Vector3i memberPosition = member->obj3D_.position_;
            entry->position.x = memberPosition.x;
            entry->position.y = memberPosition.y;
            entry->position.z = memberPosition.z;
            entry->variant = -1;
        }
        entry->elementId = 5;
        entry->palette = member->obj3D_.unknown_4_ + 4;
        GameObject* party = game->GetPartyMemberByIndex(i);
        GameObject* active = func_0200ff58(game, i);
        if (party && (member->obj3D_.unknown_4_ == 0 || active)) entry->type = func_02039874(party) + 0x58;
        else entry->type = member->obj3D_.unknown_4_ + 0x5b;
        if (party) entry->flag13 = func_02039874(party);
        if (member->combatFields_.savedState_130_->flags & 1) {
            entry->elementId = 6;
            entry->palette = 6;
        }
    }
    int found = 0;
    MapDisplay* owner = GetGameResources()->unknown_ptr_36d0;
    if (owner) {
        for (Node02021f88* node = owner->field754; node; node = node->next) {
            for (int i = 0; i < node->count; ++i) {
                int id = (unsigned short)node->data[i];
                int zoneId = zone->savedActor_.zoneId;
                if (id == zoneId) {
                    found = 1;
                    break;
                }
            }
        }
    }
    if (found && func_0206dfb0((int)saved, saved->flags, 0x2b)) {
        short x = 0;
        short z = 0;
        if (func_02021394(container, zone->savedActor_.zoneId, (unsigned char)zone->savedActor_.nodeId, &x, &z)) {
            CombatActionPosition* entry = &output.entries[output.count];
            ++output.count;
            VectorizedMemset(entry, 0, sizeof(*entry));
            entry->variant = -1;
            entry->combatantId = 0xff;
            entry->position.x = x << 12;
            entry->position.z = z << 12;
            entry->elementId = 0x1b;
            entry->palette = 7;
            entry->type = 0x74;
        }
    }
    return output.count;
}
