#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct SearchStruct0202c1a4;

struct Evt021d36b4 {
    char pad0[4];
    unsigned char mode;
    unsigned char slotIndex;
    unsigned short id;
    Vector3s pos;
};

struct Slot021d36b4 {
    unsigned short id;
    Vector3s pos;
};

extern "C" void* func_020120a0(char* base, unsigned int index);
extern "C" int func_0202c508(struct SearchStruct0202c1a4* search);
extern "C" void func_ov017_021d360c(int a, unsigned char b, int c, Vector3s d);
extern "C" GameObject* func_0200ffe0(GameState* battleStruct, int id);
extern "C" void func_02034044(unsigned char* obj, int val);
extern "C" void func_020397c0(void* obj);
extern "C" unsigned char func_02039d7c(char* obj);
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);

// USA: func_ov017_021d36b4
extern "C" ARM void func_ov017_021d36b4(int remote, struct Evt021d36b4* evt, GameState* bs, int unused,
                                        struct SearchStruct0202c1a4* search) {
    struct Slot021d36b4* slot = (struct Slot021d36b4*)func_020120a0((char*)bs, evt->slotIndex);
    if (slot == 0) return;

    if (evt->mode == 0) {
        if (func_0202c508(search)) {
            slot->id = evt->id;
            Vector3fix16Copy(&slot->pos, &evt->pos);
            func_ov017_021d360c(evt->mode, evt->slotIndex, evt->id, evt->pos);
        } else if (remote == 0) {
            slot->id = evt->id;
            Vector3fix16Copy(&slot->pos, &evt->pos);
        }
    } else if (evt->mode == 1) {
        int isParty = evt->id <= 3;
        if (!isParty) {
            GameObject* combatant = func_0200ffe0(bs, evt->id - 4);
            if (combatant == 0) return;
            evt->id = combatant->obj3D_.unknown_4_;
        }
        GameObject* monster = bs->GetMaybeWanderingMonsterByIndex(evt->id);
        GameObject* member = bs->GetPartyMemberByIndex(evt->id);
        if (monster == 0) return;

        if (func_0202c508(search)) {
            if (slot->id == 0) return;
            int inParty = 0;
            if (monster->obj3D_.unknown_4_ >= 0 && monster->obj3D_.unknown_4_ <= 3) inParty = 1;
            if (!inParty) {
                func_02034044((unsigned char*)monster, 5000);
                if (member != 0) func_020397c0(member);
            }
            slot->id = 0;
            func_ov017_021d360c(evt->mode, evt->slotIndex, evt->id, evt->pos);
        } else if (remote == 0) {
            short index;
            int inParty = 0;
            index = monster->obj3D_.unknown_4_;
            if (index >= 0 && index <= 3) inParty = 1;
            if (inParty) {
                if (index == func_0202c1a4(search) && member != 0 && func_02039d7c((char*)member) == 0) {
                    func_02034044((unsigned char*)monster, 5000);
                    if (member != 0) func_020397c0(member);
                }
            } else {
                func_02034044((unsigned char*)monster, 5000);
                if (member != 0) func_020397c0(member);
            }
            slot->id = 0;
        }
    }
}
