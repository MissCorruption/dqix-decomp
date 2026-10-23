#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct CopyPayload {
#if defined(jpn)
    char data[0xb];
#else
    char data[0x30];
#endif
};

struct CopyableRecord {
    struct CopyPayload payload;
#if defined(jpn)
    unsigned char byte11;
#endif
    short requestId;
    signed char partySlot;
    unsigned char flags;
};

struct Ctx02094030 {
    struct CopyableRecord records[8];
#if defined(jpn)
    char pad0[0x13b - 0x80];
#else
    char pad0[0x3cb - 0x1a0];
#endif
    signed char count;
    char pad1[0x3cd - 0x3cc];
    unsigned char flags;
};

extern "C" void func_02093980(char* obj);
extern "C" void func_02093b54(struct CopyableRecord* dst, struct CopyableRecord* src);
extern "C" int func_0209372c(int x);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(void* obj);

// USA: func_02094030

extern "C" ARM int func_02094030(struct Ctx02094030* queue, int requestId, int unused2, int slot) {
    GameObject* combatant = GameState::GetInstance()->GetPartyMemberByIndex(slot);
    void* ctx = func_0202ae18();
    GameResources* cachedNames = GetGameResources();

    if (func_0202c540(ctx) != 0) {
        if (requestId == 10000) return 1;
    }
    if (queue->count >= 8) return 1;

    struct CopyableRecord* request = &queue->records[queue->count];
    func_02093980((char*)request);

    if (combatant == 0 || requestId == 3) {
        char* name = cachedNames->partyNames[slot];
        if (name[0] == 0) return 1;
        sprintf(request->payload.data, name);
    } else if (combatant != 0) {
        sprintf(request->payload.data, combatant->baseStats_->unk);
    }

    request->requestId = (short)requestId;
    request->partySlot = (signed char)slot;
    if (queue->count <= 0) {
        queue->flags |= 1;
    }

    unsigned int category = (unsigned int)func_0209372c(request->requestId);
    queue->count++;

    int i;
    for (i = queue->count - 1; i >= 2; i--) {
        if (func_0209372c(queue->records[i - 1].requestId) <= category) break;
        struct CopyableRecord tmp;
        func_02093b54(&tmp, &queue->records[i]);
        func_02093b54(&queue->records[i], &queue->records[i - 1]);
        func_02093b54(&queue->records[i - 1], &tmp);
    }
    return 0;
}
