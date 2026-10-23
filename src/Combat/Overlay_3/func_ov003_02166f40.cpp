#include <globaldefs.h>
#if defined(jpn)
enum { kRegion400 = 0x200 };
enum { kRegion82 = 0xaa };
#else
enum { kRegion400 = 0x400 };
enum { kRegion82 = 0x82 };
#endif
#include "GameState/GameState.h"

extern "C" void func_ov017_021b6bb8(int combatantId);
extern "C" int func_ov017_021b6c2c(int a, int d);
struct Obj020397cc;
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg1);

// USA: func_ov003_02166f40
extern "C" ARM void func_ov003_02166f40(char* obj) {
    func_ov017_021b6bb8(*(short*)(obj + kRegion400 + kRegion82));
    func_ov017_021b6c2c(*(short*)(obj + kRegion400 + kRegion82), 0);
    GameObject* c = GameState::GetInstance()->GetProtagonist();
    if (c == NULL) return;
    func_020397cc((struct Obj020397cc*)c, 1);
}
