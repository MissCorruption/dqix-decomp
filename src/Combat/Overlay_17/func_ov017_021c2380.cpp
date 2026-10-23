#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct BitField020340d4;
struct Flags020340c4;
struct Flags020340b4;
struct BitField0203402c;

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* search);
extern "C" void func_ov017_021d360c(int kind, int index, int id, Vector3s vec);

struct Spot_021c2380 {
    unsigned short id;
    Vector3s pos;
};

extern "C" Spot_021c2380* func_020120a0(char* base, unsigned int index);
extern "C" int func_020100a8(GameState* battleStruct);
extern "C" int func_020340d4(BitField020340d4* obj);
extern "C" void func_020340c4(Flags020340c4* obj);
extern "C" void func_020340b4(Flags020340b4* obj);
extern "C" int func_0203402c(BitField0203402c* obj);
extern "C" void func_02034044(unsigned char* obj, int value);
extern "C" unsigned char func_02039d7c(char* obj);
extern "C" void func_020397c0(void* obj);

// USA: func_ov017_021c2380
extern "C" ARM int func_ov017_021c2380(int spotIdx, int monIdx) {
    GameState* gs = GameState::GetInstance();
    void* search = func_0202ae18();
    Spot_021c2380* spot = func_020120a0((char*)gs, spotIdx);
    if (spot == NULL) {
        return 0;
    }
    if (spot->id == 0) {
        return 0;
    }

    GameObject* mon = gs->GetMaybeWanderingMonsterByIndex(monIdx);
    GameObject* member = gs->GetPartyMemberByIndex(monIdx);
    if (mon == NULL) {
        return 0;
    }

    int wasFlagged = 0;
    if (spotIdx == func_020100a8(gs) && func_020340d4((BitField020340d4*)mon)) {
        wasFlagged = func_020340d4((BitField020340d4*)mon);
        func_020340c4((Flags020340c4*)mon);
    }
    if (func_0203402c((BitField0203402c*)mon)) {
        return 0;
    }
    if (member != NULL && func_02039d7c((char*)member)) {
        return 0;
    }
    if (spot->id != mon->obj3D_.GetField06()) {
        return 0;
    }

    Vector3fix target;
    target.x = spot->pos.x << 4;
    target.y = spot->pos.y << 4;
    target.z = spot->pos.z << 4;
    Vector3fix pos = mon->obj3D_.position_;
    if (fix32abs(target.x - pos.x) > 0x800) {
        return 0;
    }
    if (fix32abs(target.y - pos.y) > 0x800) {
        return 0;
    }
    if (fix32abs(target.z - pos.z) > 0x800) {
        return 0;
    }
    if (Vector3fix_Distance(&target, &pos) > 0x800) {
        return 0;
    }
    if (wasFlagged) {
        func_020340b4((Flags020340b4*)mon);
        return 0;
    }

    if (func_0202c508(search)) {
        func_02034044((unsigned char*)mon, 5000);
        if (member != NULL) {
            func_020397c0(member);
        }
    }
    Vector3s zero = {0};
    func_ov017_021d360c(1, (unsigned char)spotIdx, (unsigned short)monIdx, zero);
    spot->id = 0;
    return 1;
}
