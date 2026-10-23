#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" void* func_020e2ff8(void);
extern "C" void* func_020e3580(void);
extern "C" int func_0202b000(void* obj);
extern "C" void func_ov017_021c37a4(void);
extern "C" void func_0202c778(unsigned char* obj);
extern "C" int func_0202b7ec(void* obj);
extern "C" void func_0205e22c(void* obj);
struct SlotTable020e3004;
extern "C" void func_020e3004(struct SlotTable020e3004* p);
struct Bytes020e358c;
extern "C" void func_020e358c(struct Bytes020e358c* s);
extern "C" void func_ov017_02195748(unsigned char* base);
extern "C" int func_02053c6c(unsigned char* obj);
extern "C" void func_0202c360(void* obj, int val);
extern "C" void func_0202b2f0(void* obj);
extern "C" void func_0202b828(unsigned char* obj);
extern "C" void func_020d84dc(void);
extern "C" void func_ov017_02191108(int, int, int, int, int);
extern "C" void func_ov017_02191234(int a);
extern "C" void func_0202c288(void* obj);
extern "C" ARM void func_ov017_021972cc(char* p);
extern "C" void func_ov017_02195520(void* obj);

// USA: func_ov017_021c35ac
extern "C" ARM void func_ov017_021c35ac(void) {
    GameState* battle = GameState::GetInstance();
    int g = ((int)GetGameResources());
    void* search = func_0202ae18();
    void* d100044 = func_0202ae24();
    void* d153637 = func_020e2ff8();
    void* d153634 = func_020e3580();

    if (func_0202b000(search) != 0) {
        func_ov017_021c37a4();
        return;
    }

#if defined(jpn)

#else
    func_0202c778((unsigned char*)search);
#endif

    func_0202b7ec(search);
    func_0205e22c(d100044);
    func_020e3004((struct SlotTable020e3004*)d153637);
    func_020e358c((struct Bytes020e358c*)d153634);
    func_ov017_02195748((unsigned char*)g);

    GameObject* combatant = battle->GetProtagonist();
    func_02053c6c((unsigned char*)combatant);
    int field134 = *(int*)((char*)combatant + 0x134);
    func_0202c360(search, field134);
    func_0202b2f0(search);
    func_0202b828((unsigned char*)search);
    ClearFlags00((GameResources*)g, 2);
    func_020d84dc();
    func_ov017_02191108(g, 1, 1, 1, 1);
    func_ov017_02191234(g);
    func_0202c288(search);
    func_ov017_021972cc((char*)g);
    func_ov017_02195520((void*)g);
}
