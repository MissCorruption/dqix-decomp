#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov004_0215f0c0(void* self);
extern "C" void func_ov004_0215e5fc(void* self, void* combatant);
extern "C" unsigned char func_020114ec(char* obj, void* dst);
struct Obj02061bd8;
extern "C" int func_02061bd8(struct Obj02061bd8* obj);
extern "C" void* func_ov004_0215e47c(void* a, int key);

struct Struct021707e8_02162b84 { char pad[0x1c]; void* combatant; };
extern Struct021707e8_02162b84 data_ov004_021707e8;

// USA: func_ov004_02162b84
extern "C" ARM int func_ov004_02162b84(void* self) {
#if defined(jpn)
    func_ov004_0215e5fc(self, data_ov004_021707e8.combatant);
    func_ov004_0215f0c0(self);
#else
    func_ov004_0215f0c0(self);
    func_ov004_0215e5fc(self, data_ov004_021707e8.combatant);
#endif

    GameState* battle = GameState::GetInstance();
    unsigned char buf[4];
    unsigned char n = func_020114ec((char*)battle, buf);

    int found = 0;
    for (int i = 0; i < 4; i++) {
        GameObject* c = func_0200ff1c(battle, i);
        if (c) {
            if (func_02061bd8((struct Obj02061bd8*)c)) found = 1;
        }
    }

    if (found == 1 || n <= 1) {
        unsigned char* node = (unsigned char*)func_ov004_0215e47c(self, 0x85);
        if (!node) return 0;
        node[0xc] |= 0x78;
    }
    return 0;
}
