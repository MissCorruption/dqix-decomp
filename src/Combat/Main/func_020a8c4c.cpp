#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void* func_02010828(GameState* battleStruct);
struct Obj020397cc;
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg1);
extern "C" void func_ov017_021d2c34(unsigned char a, unsigned char b, unsigned char c);

struct Obj020a8c4c {
    char pad0[4];
    unsigned char f4;
    char pad5[7];
    int fc;
};

// USA: func_020a8c4c
extern "C" ARM void func_020a8c4c(struct Obj020a8c4c* obj, unsigned char axis) {
    if ((obj->f4 & (1 << axis)) != 0) {
        return;
    }
    GameState* battle = GameState::GetInstance();
    GameResources* ov = GetGameResources();
    GameObject* c397c = battle->GetUnknownGameObject();
    GameObject* c800 = battle->GetPartyMemberByIndex(axis);
    func_02010828(battle);
    if (IsBrightnessWithinValidRange(ov, false) == 0) {
        func_020397cc((struct Obj020397cc*)c800, 1);
        *(short*)((char*)c800 + 0xac) = 0;
        if (axis == c397c->obj3D_.unknown_4_) {
            return;
        }
        func_ov017_021d2c34(axis, 0, 0);
        return;
    }
    obj->f4 |= (1 << axis);
    *(short*)((char*)c800 + 0xac) = -obj->fc;
    *(unsigned char*)((char*)c800 + 0xc1) |= 8;
}
