#include <globaldefs.h>
#include "GameState/GameState.h"

struct FlagWord020466f4;
struct HeadNode02046b24;
struct Obj020397cc;

extern "C" void func_020397c0(void* obj);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);
extern "C" int func_02046b24(struct HeadNode02046b24** obj);
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg1);
extern "C" void func_ov017_02199780(void* obj);

#if defined(jpn)
static const int kActive=0x3e60, kList=0x4ec;
#else
static const int kActive=0x4080, kList=0x6fc;
#endif

// USA: func_ov017_02199e98
extern "C" ARM void func_ov017_02199e98(void* obj) {
    if (*(int*)((char*)obj + kActive) == 0) return;
    GameObject* combatant = GameState::GetInstance()->GetUnknownGameObject();
    func_020397c0(combatant);
    func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0x400);
    func_ov017_02199780(obj);
    struct HeadNode02046b24** list = *(struct HeadNode02046b24***)((char*)obj + 0x3000 + kList);
    int id = func_02046b24(list);
    if (id != 0xa && id != 4 && id != 3 && id != 0x21 && id != 0x24) return;
    func_020397cc((struct Obj020397cc*)combatant, 1);
}
