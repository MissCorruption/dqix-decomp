#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Entry02087574 {
    unsigned char data[0x10];
    signed char id;
    unsigned char pad2[3];
};

struct EntryTable02087574 {
    unsigned char pad[0xf2c];
    struct Entry02087574 entries[3];
};

extern "C" int func_02053c6c(unsigned char* obj);
extern "C" struct Entry02087574* func_02087574(struct EntryTable02087574* obj, int id);

// USA: func_020875c4
extern "C" ARM void func_020875c4(
    struct EntryTable02087574* table, int id, int memberIndex) {
    struct Entry02087574* entry = func_02087574(table, id);
    if (entry == 0) {
        return;
    }
    GameObject* member = GameState::GetInstance()->GetPartyMemberByIndex(memberIndex);
    if (member == 0) {
        return;
    }
    unsigned char* field = (unsigned char*)func_02053c6c((unsigned char*)member);
    if (field == 0) {
        return;
    }
    memcpy(field + 0x54 + 0x400, entry, 0x10);
    memset(entry, 0, 0x14);
    entry->id = -1;
}
