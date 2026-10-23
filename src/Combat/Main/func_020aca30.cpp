#include <globaldefs.h>

#if defined(jpn)
enum { slotFieldOffset = 0x34ec };
#else
enum { slotFieldOffset = 0x36fc };
#endif
#include "GameState/GameState.h"

extern "C" void func_020ae074(void* a);
struct PointerField330_ffd0;
extern "C" void* func_0200ffd0(struct PointerField330_ffd0* obj);
struct HeadNode02046b24;
extern "C" int func_02046b24(struct HeadNode02046b24** obj);
struct S02046b1c;
extern "C" int func_02046b1c(struct S02046b1c* p);

struct Struct020aca30 { char pad[slotFieldOffset]; void* fieldslotFieldOffset; };

// USA: func_020aca30
extern "C" ARM void func_020aca30(struct Struct020aca30* a0) {
    GameState* battle = GameState::GetInstance();
    void* p;
    void* field = a0->fieldslotFieldOffset;
    p = func_0200ffd0((struct PointerField330_ffd0*)battle);
    int headId = func_02046b24((struct HeadNode02046b24**)field);
    int f0 = func_02046b1c((struct S02046b1c*)field);
    if (p == NULL) return;
    if (headId == 0xa) {
        if (*((unsigned char*)f0 + 3) != 0) return;
    }
    func_020ae074(p);
}
