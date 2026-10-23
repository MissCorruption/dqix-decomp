#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

struct Struct020865b0;
struct Obj02033874;
struct FlagWord020466f4;
struct HeadNode02046b24;
struct SlotState02082d6c;
struct SlotRecord02082d6c;
struct SelectionPage02166a90 {
#if defined(jpn)
    unsigned char pad0[0x2ca];
    signed char slot;
    unsigned char pad4a3[0x2e4 - 0x2cb];
#else
    unsigned char pad0[0x4a2];
    signed char slot;
    unsigned char pad4a3[0x4bc - 0x4a3];
#endif
    unsigned char step;
};
struct SelectedEntry02166a90 {
    unsigned char pad0[2];
    unsigned char metadataValues[13];
    unsigned char padf[0x13f - 0xf];
    unsigned char kind : 3;
    unsigned char remainingKindBits : 5;
    unsigned char name[0x34];
};
struct PartyRecord02166a90 {
    unsigned char pad0[0x568];
    short slot;
};
struct Combatant02166a90 {
    Object3D object;
    unsigned char padac[0x134 - 0xac];
    char* name;
};
struct Appearance02166a90 {
    unsigned char pad0[0x16c];
    unsigned short values[16];
};
struct EventState02166a90 {
    unsigned char pad0[0xb];
    unsigned char flags;
};
struct PartyFlags02166a90 {
    unsigned char pad0[0x8c];
    unsigned char flags[1];
};
extern Vector3i data_ov003_0217f4b8[3];

extern "C" SelectedEntry02166a90* func_ov003_02160bf8(SelectionPage02166a90*, int);
extern "C" int func_0200fb8c(int*);
extern "C" void* func_02012fe4(void);
extern "C" void* func_020108f0(void*, int);
extern "C" void* func_02010954(char*);
extern "C" void func_02086380(unsigned char*);
extern "C" void func_02082d6c(SlotState02082d6c*, SlotRecord02082d6c*);
extern "C" void func_ov017_0218f064(GameResources*, int, int, int, int);
extern "C" GameObject* func_0200ff58(GameState*, int);
extern "C" void func_02033874(Obj02033874*, int);
extern "C" unsigned char* func_ov017_021a4658(unsigned char*, int);
extern "C" int func_020100a8(GameState*);
extern "C" void func_020546a0(void*, int);
extern "C" int func_020546a8(void*);
extern "C" void func_020546b4(void*, int);
typedef void (*ByteSetterWithIntArgument02166a90)(void*, int);
extern "C" int func_02053c6c(unsigned char*);
extern "C" void func_02042764(unsigned char*, char*, int);
extern "C" int func_020865b0(Struct020865b0*);
extern "C" void func_02083ca0(unsigned char*, int);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int*, unsigned int);
extern "C" int func_02046b24(HeadNode02046b24**);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int*);
extern "C" void func_ov017_021cc340(int, int, int);
extern "C" void func_ov017_021cf078(int, unsigned short, unsigned char);
extern "C" void func_ov017_021cc97c(int);
extern "C" void func_ov017_021cca5c(int, int);
extern "C" void func_ov017_021ccb58(int, int);
extern "C" void* func_0205ec34(void);
extern "C" void func_0206e424(void*, int);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" void func_020466f4(FlagWord020466f4*, unsigned int);
extern "C" void func_ov017_02191234(unsigned char*);
extern "C" void func_020dc2d0(int);
extern "C" void func_ov017_02191108(void*, int, int, int, int);
extern "C" void func_020dc7e8(int, int);
extern "C" void func_ov017_021d0dbc(void);
extern "C" void func_ov017_021cee78(int, unsigned char);

// USA: func_ov003_02166a90
extern "C" ARM int func_ov003_02166a90(SelectionPage02166a90* self, int key) {
    SelectedEntry02166a90* entry = func_ov003_02160bf8(self, key);
    if (entry == 0) {
        return 0;
    }
    int special = 0;
    if (entry->kind == 2 || entry->kind == 3 || entry->kind == 4) {
        special = 1;
    }
    GameState* state = GameState::GetInstance();
    GameResources* resources = (GameResources*)func_0200fb8c((int*)state);
    unsigned short* field06 = (unsigned short*)func_02012fe4();
    if (self->step == 0) {
        int freeSlot = -1;
        for (int slot = 3; slot >= 0; slot--) {
            if (state->GetGameObjectByIndex(slot) == 0) {
                freeSlot = slot;
                break;
            }
        }
        if (freeSlot >= 0) {
            self->slot = freeSlot;
            SetSubBrightness(resources, -16, 20);
            self->step++;
        } else {
            self->step = 0;
            return -1;
        }
    }
    if (self->step == 1) {
        if (IsSubBrightnessTransitionActive(resources) != 0) {
            return 0;
        }
        PartyRecord02166a90* record = (PartyRecord02166a90*)func_020108f0(state, self->slot);
        if (record == 0) {
            record = (PartyRecord02166a90*)func_02010954((char*)state);
        }
        record->slot = self->slot;
        func_02086380((unsigned char*)record);
        func_02082d6c((SlotState02082d6c*)record, (SlotRecord02082d6c*)entry);
        func_ov017_0218f064(resources, self->slot, 0x1000, 1, 0);
        GameObject* member = func_0200ff58(state, self->slot);
        if (member == 0) {
            return 0;
        }
        member->obj3D_.SetField06(*field06);
        state->GetProtagonist();
        member->obj3D_.position_ = data_ov003_0217f4b8[self->slot - 1];
        func_02033874((Obj02033874*)member, 0x323d);
        EventState02166a90* event = (EventState02166a90*)func_ov017_021a4658((unsigned char*)resources, self->slot);
        if (special == 0) {
            event->flags |= 8;
        }
        int group = func_020100a8(state);
        ((ByteSetterWithIntArgument02166a90)func_020546a0)(member, group);
        int sameGroup = 0;
        for (int slot = 0; slot < 4; slot++) {
            GameObject* other = func_0200ff58(state, slot);
            if (other != 0 && slot != self->slot) {
                if (group == func_020546a8(other)) {
                    sameGroup++;
                }
            }
        }
        ((ByteSetterWithIntArgument02166a90)func_020546b4)(member, sameGroup);
        func_02010828(state);
        Appearance02166a90* appearance = (Appearance02166a90*)func_02053c6c((unsigned char*)member);
#if defined(jpn)
        strcpy(((Combatant02166a90*)member)->name, (char*)entry->name);
#else
        char name[0x30] = {0};
        func_02042764(entry->name, name, 1);
        strcpy(((Combatant02166a90*)member)->name, name);
#endif
        int index = func_020865b0((Struct020865b0*)entry);
        appearance->values[index] = entry->metadataValues[func_020865b0((Struct020865b0*)entry)];
        func_02083ca0((unsigned char*)appearance, func_020865b0((Struct020865b0*)entry));
        self->step++;
    }
    if (self->step == 2) {
        HeadNode02046b24** head = (HeadNode02046b24**)resources->unknown_ptr_array_36fc[1];
        func_020466e4((unsigned int*)func_020d6c00(), 0x41);
        if (func_02046b24(head) != 0x13) {
            self->step++;
        }
    }
    if (self->step == 3) {
        if (func_0202b7d8((int*)func_0202ae18()) != 0) {
            func_ov017_021cc340(self->slot, 1, -1);
            for (int i = 0; i < 13; i++) {
                func_ov017_021cf078(self->slot, (unsigned char)i, 0);
            }
            func_ov017_021cc97c(self->slot);
            func_ov017_021cca5c(self->slot, 0);
            func_ov017_021cca5c(self->slot, 1);
            func_ov017_021ccb58(self->slot, 1);
            func_ov017_021ccb58(self->slot, 4);
            func_ov017_021ccb58(self->slot, 7);
            func_ov017_021ccb58(self->slot, 10);
        }
        func_0206e424(func_0205ec34(), self->slot);
        state->GetPartyMemberByIndex(self->slot);
        PartyFlags02166a90* flags = (PartyFlags02166a90*)func_0205ec34();
        func_0206df6c(flags, flags->flags, 0x784, 1);
        self->step = 0;
        func_020466f4((FlagWord020466f4*)func_020d6c00(), 0x41);
        func_ov017_02191234((unsigned char*)resources);
        if (special != 0) {
            func_020dc2d0(0);
        }
        func_ov017_02191108(resources, 1, 1, 1, 1);
        func_020dc7e8(6, -1);
        func_020dc7e8(7, -1);
        int* eventStatus = (int*)func_0202ae18();
        if (eventStatus != 0 && func_0202b7d8(eventStatus) != 0) {
            func_ov017_021d0dbc();
        }
        if (func_0202b7d8((int*)func_0202ae18()) != 0) {
            func_ov017_021cee78(self->slot, 1);
        }
        return 1;
    }
    return 0;
}
