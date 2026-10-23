#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_020341e0 func_02034104
#endif

struct Entity02077788 {
    Object3D object;
    char unknown_ac[2];
    short fae;
    char padb0[0xb2 - 0xb0];
    unsigned short fb2;
    unsigned short fb4;
    char padb6[0x154 - 0xb6];
    int f154;
    char pad158[0x166 - 0x158];
    unsigned short partyMemberIndex;
    char pad168[0x17b - 0x168];
    unsigned char f17b;
};

extern "C" void* func_0202ae18(void);
extern "C" Vector3fix func_020341e0(void* obj);
extern "C" int func_020322c0(int a, int* b, int c);
extern "C" void func_020794f8(void* obj, int a, int b);
extern "C" int func_0202b7d8(int* obj);
struct SearchStruct0202c1a4;
struct BitFlag02033f44;
struct Obj02033834;
struct Obj02033b68;
struct Outer02077a20;
extern "C" int func_0202c1a4(struct SearchStruct0202c1a4* obj);
extern "C" int func_02033f44(struct BitFlag02033f44* obj);
extern "C" void func_02033834(struct Obj02033834* obj, int angle);
extern "C" void func_02033b68(struct Obj02033b68* obj, int value);
extern "C" void func_02076ccc(void* obj, int mode);
extern "C" int func_02077a20(struct Outer02077a20* obj);
extern "C" int func_02039760(void* obj);

// USA: func_02077788
extern "C" ARM void func_02077788(struct Entity02077788* self) {
    GameState* battleStruct = GameState::GetInstance();
    void* g = func_0202ae18();
    GameObject* combatant = battleStruct->GetPartyMemberByIndex(self->partyMemberIndex);
    if (combatant == 0) {
        return;
    }

    Vector3fix pos = func_020341e0(combatant);
    Vector3fix delta;
    Vector3fix_Subtract(&pos, &self->object.position_, &delta);
    Vector3fix_Normalize(&delta, &delta);
    int angle = fix32_Atan2(delta.x, delta.z);
    func_02033834((struct Obj02033834*)self, angle);

    self->fb4 = 0x1c2;
    self->fb2 = 0x1c2;
    func_02033b68((struct Obj02033b68*)self, 1);

    int flag = func_02033f44((struct BitFlag02033f44*)self);
    int inRange = 0;
    if (flag != 0) {
        int v = self->fae;
        if (func_020322c0(flag, &v, v) < 0x199) {
            inRange = 1;
        }
    }
    if (inRange) {
        func_02076ccc(self, 1);
        self->f154 = 0;
        if (func_0202b7d8((int*)g)) {
            func_020794f8(self, 0, 0);
        }
        return;
    }

    unsigned short index = self->partyMemberIndex;
    if (combatant->obj3D_.unknown_0_ & 0x1000) {
        index = 0;
    }
    if (!func_0202b7d8((int*)g) || index == func_0202c1a4((struct SearchStruct0202c1a4*)g)) {
        Vector3fix pos2 = func_020341e0(combatant);
        int radius = combatant->obj3D_.GetRadius();
        int scaledSpacing = self->object.GetScale().x * 15;
        int halfSpacingFactor = func_02077a20((struct Outer02077a20*)self) >> 1;
        long long spacingProduct = (long long)halfSpacingFactor * scaledSpacing;
        int distanceThreshold = (radius >> 1) + (int)((spacingProduct + 0x800) >> 12);
        int dist = Vector3fix_Distance(&pos2, &self->object.position_);
        if ((dist != 0 && distanceThreshold > dist) || dist > 0x7800) {
            func_02076ccc(self, 1);
            self->f154 = 0;
            self->f17b = 1;
            if (func_0202b7d8((int*)g)) {
                func_020794f8(self, 1, 0);
            }
            return;
        }
    }

    if (func_0202b7d8((int*)g) && func_0202c1a4((struct SearchStruct0202c1a4*)g) != 0) {
        return;
    }
    if (static_cast<unsigned char>(combatant->unk_ac[0xc0 - 0xac]) == 6 ||
        func_02039760(battleStruct->GetProtagonist()) == 2) {
        func_02076ccc(self, 1);
        self->f154 = 0;
        if (func_0202b7d8((int*)g) && func_0202c1a4((struct SearchStruct0202c1a4*)g) == 0) {
            func_020794f8(self, 0, 0);
        }
    }
}
