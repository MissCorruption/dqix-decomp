#include <globaldefs.h>

#if defined(jpn)
enum { slotFieldOffset = 0x34ec };
#else
enum { slotFieldOffset = 0x36fc };
#endif
#include "GameState/GameState.h"

extern "C" void* func_02012fe4(GameState* battleStruct);
struct PointerField330_ffd0;
extern "C" void* func_0200ffd0(struct PointerField330_ffd0* obj);
struct HeadNode02046b24;
extern "C" int func_02046b24(struct HeadNode02046b24** obj);
struct S02046b1c;
extern "C" int func_02046b1c(struct S02046b1c* p);
struct GameResources;
int IsBrightnessTransitionActive(GameResources*);
extern "C" void func_020ad61c(void* p);
extern "C" void func_ov017_02193dc4(void* p);

struct Struct020ac9ac { char pad[slotFieldOffset]; void* fieldslotFieldOffset; };

// USA: func_020ac9ac
extern "C" ARM void func_020ac9ac(struct Struct020ac9ac* a0) {
    GameState* battle = GameState::GetInstance();
    void* p;
    int headId;
    void* field = a0->fieldslotFieldOffset;
    func_02012fe4(battle);
    p = func_0200ffd0((struct PointerField330_ffd0*)battle);
    headId = func_02046b24((struct HeadNode02046b24**)field);
    int f0 = func_02046b1c((struct S02046b1c*)field);
    if (p == NULL) return;
    if (headId == 0xa) {
        if (*((unsigned char*)f0 + 3) != 0) return;
    }
    if (headId == 3) {
        if (IsBrightnessTransitionActive((GameResources*)a0) == 0) return;
    }
    func_020ad61c(p);
    func_ov017_02193dc4(p);
}
