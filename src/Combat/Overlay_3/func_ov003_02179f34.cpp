#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { kRegionValue1000_F7C = 0xf7c };
enum { kRegionValue89C_818 = 0x818 };
#else
enum { kRegionValue1000_F7C = 0x1000 };
enum { kRegionValue89C_818 = 0x89c };
#endif

extern "C" void* func_02010828(GameState* battleStruct);
extern "C" short func_02080468(void* obj, int id);
extern "C" unsigned char func_0207ca94(int index);
extern "C" short func_0207c638(void* base, unsigned int index);
extern "C" int func_02053c6c(unsigned char* obj);
struct Slots02083960;
extern "C" int func_02083960(struct Slots02083960* s);
struct S_a0b8c;
extern "C" int func_020a0b8c(struct S_a0b8c* p);

// USA: func_ov003_02179f34
extern "C" ARM int func_ov003_02179f34(char* obj) {
    int result = 0;
    GameState* battle = GameState::GetInstance();
    void* ptr = func_02010828(battle);
    short val = *(short*)(obj + kRegionValue1000_F7C + 0xc);
    void* field89c = *(void**)(obj + kRegionValue89C_818);

    if (val == 0x77) {
        short id = func_02080468(field89c, 0x1d);
        short idx = (short)(*(short*)(obj + kRegionValue1000_F7C + 0x12) - id);
        unsigned char tableVal = func_0207ca94(idx);
        result = func_0207c638((char*)ptr + 0x1d4, tableVal);
    } else {
        signed char field43 = *(signed char*)(obj + kRegionValue1000_F7C + 0x43);
        int flag = result;
        if (field43 >= 0) {
            flag = (field43 <= 3) ? 1 : 0;
        }
        if (flag) {
            GameObject* combatant = battle->GetPartyMemberByIndex(field43);
            if (combatant != 0) {
                int f150 = func_02053c6c((unsigned char*)combatant);
                result = (short)func_02083960((struct Slots02083960*)f150);
            }
        } else {
            result = func_020a0b8c((struct S_a0b8c*)ptr);
        }
    }
    return result;
}
