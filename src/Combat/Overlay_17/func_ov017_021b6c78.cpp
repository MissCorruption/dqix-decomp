#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void func_02087628(char* p);

extern "C" unsigned char func_02011494(char* src, void* dst);

extern "C" int func_020100a8(GameState* b);

extern "C" void __clear(void* buf, int size);

extern "C" void* func_02053c6c(unsigned char* p);

extern "C" signed char func_ov017_021b6c2c(int a, int b);

struct Base02087510;
extern "C" int func_02087510(Base02087510* base, char id, void* data);

#define GetCombatantAtField0x3ac _Z24GetCombatantAtField0x3acP9GameState

struct Obj020397cc;
extern "C" void func_020397cc(Obj020397cc* p, int flag);

// USA: func_ov017_021b6c78
extern "C" ARM void func_ov017_021b6c78(void) {
    GameState* battle = GameState::GetInstance();
    void* region = func_02010828(battle);
    func_02087628((char*)region);

    if (*((unsigned char*)region + 0xf7c) <= 1) {
        return;
    }

    char buf1[4];
    char buf2[0x10];
    unsigned char count = func_02011494((char*)battle, buf1);

    for (unsigned char idx = 0; idx < count; idx = (unsigned char)(idx + 1)) {
        char id = buf1[idx];
        if (id != func_020100a8(battle)) {
            __clear(buf2, 0x10);
            GameObject* combatant = func_0200ff1c(battle, id);
            if (combatant) {
                unsigned char* fp = (unsigned char*)func_02053c6c((unsigned char*)combatant);
                memcpy(buf2, fp + 0x54 + 0x400, 0x10);
            }
            signed char v = func_ov017_021b6c2c(id, 1);
            if (v >= 0) {
                func_02087510((Base02087510*)region, v, buf2);
            }
        }
    }

    GameObject* c = battle->GetProtagonist();
    if (c) {
        func_020397cc((Obj020397cc*)c, 1);
    }
}
