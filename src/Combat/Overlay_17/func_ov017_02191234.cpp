#include <globaldefs.h>
#include "GameState/GameState.h"

struct SearchStruct;

extern "C" SearchStruct* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" int func_0202c1c0(SearchStruct* search, int index);
extern "C" int func_020100a8(GameState* battleStruct);
extern "C" unsigned char* func_0200ff58(GameState* battleStruct, int combatantId);
extern "C" int func_020546a8(void* obj);
extern "C" void func_02026348(char* obj, unsigned char* src, int count);
extern "C" void func_020114c0(char* obj, int len, void* src);
extern "C" void func_02011468(void* obj, int size, void* src);

// USA: func_ov017_02191234
extern "C" ARM void func_ov017_02191234(unsigned char* obj) {
#if defined(jpn)
 enum {regionalOffset0=0x2c6, regionalOffset1=0x34c0};
#else
 enum {regionalOffset0=0x2d2, regionalOffset1=0x36d0};
#endif
    GameState* battle = GameState::GetInstance();
    SearchStruct* search = func_0202ae18();
    unsigned char count = 0;
    unsigned char subCount = 0;
    unsigned char list[4];
    unsigned char subList[4];

    if (func_0202b7d8((int*)search)) {
        for (int group = 0; group < 4; group++) {
            if (!func_0202c1c0(search, group)) continue;
            list[count++] = group;
            int isCurrent = 0;
            if (group == func_020100a8(battle)) {
                subList[subCount++] = group;
                isCurrent = 1;
            }
            for (int i = 1; i < 4; i++) {
                unsigned char* combatant = func_0200ff58(battle, i);
                if (combatant == 0) continue;
                if (group != func_020546a8(combatant)) continue;
                list[combatant[regionalOffset0]] = i;
                count++;
                if (isCurrent) {
                    subList[combatant[regionalOffset0]] = i;
                    subCount++;
                }
            }
        }
    } else {
        list[count++] = 0;
        subList[subCount++] = 0;
        for (int i = 1; i < 4; i++) {
            unsigned char* combatant = func_0200ff58(battle, i);
            if (combatant != 0) {
                list[combatant[regionalOffset0]] = i;
                count++;
                subList[combatant[regionalOffset0]] = i;
                subCount++;
            }
        }
    }
    func_02026348(*(char**)(obj + regionalOffset1), list, count);
    func_020114c0((char*)battle, count, list);
    func_02011468(battle, subCount, subList);
}
