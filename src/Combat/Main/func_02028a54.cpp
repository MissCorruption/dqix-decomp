#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

struct BigRecord020289c4 {
    unsigned short id;
    unsigned short flagsX : 2;
    unsigned short flagB : 1;
    unsigned short otherFlags : 13;
    char reserved4[0xc];
    SafeAllocator* allocator;
#if !defined(jpn)
    SafeAllocator* secondAllocator;
#endif
    char reserved18[0x300];
};

struct Combatant02028a54 {
    GameObject object;
    char reserved13c[0x5c];
};

extern "C" void func_020289c4(BigRecord020289c4*);
extern "C" void func_0200fd48(GameState*, int);
extern "C" void func_0200fd38(GameState*, int, GameObject*);
extern "C" void func_0202ae18();
extern "C" void func_02012fe4();
extern "C" void func_02076a8c(GameObject*);

// USA: func_02028a54
extern "C" ARM int func_02028a54(BigRecord020289c4* records, int id)
{
    GameState* state = GameState::GetInstance();
    func_0202ae18();
    GetGameResources();
    func_02012fe4();
    state->GetGrottoStruct();
    for (int i = 0; i < 4; ++i) {
        if (id == records[i].id) return 0;
    }
    int index = -1;
    for (int i = 0; i < 4; ++i) {
        if (!records[i].flagB) {
            index = i;
            break;
        }
    }
    if (index < 0) return 0;
    BigRecord020289c4* record = &records[index];
    func_020289c4(record);
    record->flagB = 1;
    record->id = id;
    record->allocator->Reset();
#if !defined(jpn)
    record->secondAllocator->Reset();
#endif
    Combatant02028a54* objects = (Combatant02028a54*)record->allocator->Allocate(0x1320);
    int i = 0;
    if (!objects) {
        int firstSlot = index * 12 + 0x70;
        for (; i < 12; ++i) func_0200fd48(state, i + firstSlot);
        return 0;
    }
    int firstSlot = index * 12;
    firstSlot += 0x70;
    for (; i < 12; ++i) {
        func_02076a8c(&objects[i].object);
        objects[i].object.obj3D_.MakeHidden();
        func_0200fd38(state, i + firstSlot, &objects[i].object);
    }
    return 1;
}
