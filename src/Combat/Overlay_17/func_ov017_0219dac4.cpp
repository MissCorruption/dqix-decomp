#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"
#include "World/Object3D.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Entry_02028bd0;

struct Member_0219dac4 {
    Object3D obj3D;
    char padAc[0xc2 - 0xac];
    unsigned char flagsC2;
#if defined(jpn)
    char padC3[0x150 - 0xc3];
#else
    char padC3[0x15c - 0xc3];
#endif
    int field15c;
};

extern "C" void _ZN8Object3D10SetField06Et(Object3D* obj, int value);
extern "C" void* func_0202ae18(void);
extern "C" struct Entry_02028bd0* func_02027ca4(void);
extern "C" unsigned short* func_02012fe4(void);
extern "C" void* func_0205ec34(void);
extern "C" int func_02053ed0(void* obj);
extern "C" GameObject* func_0200ff58(GameState* battleStruct, int combatantId);
extern "C" int func_020546a8(void* obj);
extern "C" void func_ov017_0219cdc0(unsigned short value, int a1, signed char id);
extern "C" void func_0203409c(unsigned char* obj);
extern "C" int func_0202c540(void* p);
extern "C" int func_0202c508(void* p);
extern "C" void func_ov017_021a01bc(unsigned char* self);
extern "C" void func_ov017_021cdaa0(void);

// USA: func_ov017_0219dac4
extern "C" ARM void func_ov017_0219dac4(unsigned char* self, int id, int value) {
    GameState* gs = GameState::GetInstance();
    void* ctx = func_0202ae18();
    func_02027ca4();
    unsigned short* current = func_02012fe4();
    Member_0219dac4* member = (Member_0219dac4*)gs->GetPartyMemberByIndex(id);
    func_0205ec34();
    if (member == NULL) {
        return;
    }

    unsigned short prev = member->obj3D.GetField06();
    if (value == 10000) {
        value = 5900;
    } else if (value == 10100) {
        value = 6401;
    }

    if (member->field15c != -1 && func_02053ed0(member) != 3) {
        member->field15c = value;
        for (int i = 0; i < 4; i++) {
            Member_0219dac4* other = (Member_0219dac4*)func_0200ff58(gs, i);
            if (other != NULL && id == func_020546a8(other)) {
                other->field15c = value;
            }
        }
    }

    _ZN8Object3D10SetField06Et(&member->obj3D, value);
    func_ov017_0219cdc0(value, 0, id);
    member->obj3D.SetInheritedAlpha(31);
    member->flagsC2 &= ~0x40;
    func_0203409c((unsigned char*)member);
    func_02038508(func_020399a8(member));

    for (int i = 0; i < 4; i++) {
        Member_0219dac4* other = (Member_0219dac4*)func_0200ff58(gs, i);
        if (other != NULL && id == func_020546a8(other)) {
            _ZN8Object3D10SetField06Et(&other->obj3D, value);
            other->flagsC2 &= ~0x40;
        }
    }

    if (func_0202c540(ctx) && id == 0 && value == *current && prev != value) {
        func_ov017_021a01bc(self);
    }
    if (value == *current && func_0202c508(ctx)) {
        func_ov017_021cdaa0();
    }
}
