#include <globaldefs.h>
#include "GameState/GameState.h"

struct SearchStruct;

struct CombatantFlagsC2 {
    unsigned char low : 5;
    unsigned char flag : 1;
    unsigned char high : 2;
};

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" int func_020100a8(GameState* gameState);
extern "C" int func_0202be08(struct SearchStruct* search, int id);
extern "C" int func_0202be70(struct SearchStruct* search, int id);
extern "C" int func_0202bed8(struct SearchStruct* search, int id);
extern "C" char* func_0200ff58(GameState* gameState, int index);
extern "C" int func_020546a8(void* obj);

// USA: func_020dc920
extern "C" ARM int func_020dc920(int a, int b, int c, int d) {
    GameState* battle = GameState::GetInstance();
    GameObject* protagonist = battle->GetProtagonist();
    struct SearchStruct* search = (struct SearchStruct*)func_0202ae18();
    if (protagonist != NULL) {
        GameObject* party = battle->GetPartyMemberByIndex(a);
        if (party != NULL) {
            if (func_0202b7d8((int*)search) && d) {
                int id = a;
                if (party->obj3D_.unknown_0_ & 0x1000)
                    id = 0;
                if (id != func_020100a8(battle)) {
                    if (!func_0202be70(search, id))
                        return 0;
                }
            }
            if (b != 0 && a != func_020100a8(battle)) {
                if (func_0202be08(search, a))
                    return 0;
                char* combatant = func_0200ff58(battle, a);
                if (combatant != NULL) {
                    int id = func_020546a8(combatant);
                    if (func_0202be08(search, id)) {
                        if (id != func_020100a8(battle))
                            return 0;
                    }
                }
                if (func_0202bed8(search, a))
                    return 0;
                combatant = func_0200ff58(battle, a);
                if (combatant != NULL) {
                    int id = func_020546a8(combatant);
                    if (func_0202bed8(search, id)) {
                        if (id != func_020100a8(battle))
                            return 0;
                    }
                }
            }
            int flag = 0;
            if (protagonist->obj3D_.GetField06() == party->obj3D_.GetField06()) {
                flag = 1;
            } else if (c != 0 && ((protagonist->obj3D_.GetField06() == 10000 && party->obj3D_.GetField06() == 5900) ||
                                  (protagonist->obj3D_.GetField06() == 5900 && party->obj3D_.GetField06() == 10000))) {
                flag = 1;
            } else if (c != 0 && ((protagonist->obj3D_.GetField06() == 10100 && party->obj3D_.GetField06() == 6401) ||
                                  (protagonist->obj3D_.GetField06() == 6401 && party->obj3D_.GetField06() == 10100))) {
                flag = 1;
            }
            if (flag != 0) {
                if (((struct CombatantFlagsC2*)((unsigned char*)protagonist + 0xc2))->flag)
                    return ((struct CombatantFlagsC2*)((unsigned char*)party + 0xc2))->flag != 0;
                return ((struct CombatantFlagsC2*)((unsigned char*)party + 0xc2))->flag == 0;
            }
        }
    }
    return 0;
}
