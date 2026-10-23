#include <globaldefs.h>

#if defined(jpn)
enum { slotFieldOffset = 0x34ec, otherFieldOffset = 0x508 };
#else
enum { slotFieldOffset = 0x36fc, otherFieldOffset = 0x718 };
#endif
#include "GameState/GameState.h"

struct PointerField32c_ffc0;
extern "C" void* func_0200ffc0(struct PointerField32c_ffc0* obj);
struct HeadNode02046b24;
extern "C" int func_02046b24(struct HeadNode02046b24** obj);
struct S02046b1c;
extern "C" int func_02046b1c(struct S02046b1c* p);
struct Obj020a7eb8;
extern "C" void func_020a7eb8(struct Obj020a7eb8* obj);
extern "C" int func_ov017_021b8b54(void* obj);
extern "C" void* func_02057924(void* obj);
extern "C" void func_02057ab8(void* g, int arg);

struct Struct020a66a4 {
    char pad0[slotFieldOffset];
    void* fieldslotFieldOffset;
};

struct Sub3000_020a66a4 {
    char pad0[otherFieldOffset];
    void* fieldotherFieldOffset;
};

// USA: func_020a66a4
extern "C" ARM void func_020a66a4(struct Struct020a66a4* a0) {
    void* p;
    void* field;
    int headId;
    void* g;
    void* other;
    GameState* battle = GameState::GetInstance();
    field = a0->fieldslotFieldOffset;
    p = func_0200ffc0((struct PointerField32c_ffc0*)battle);
    headId = func_02046b24((struct HeadNode02046b24**)field);
    func_02046b1c((struct S02046b1c*)field);
    struct Sub3000_020a66a4* sub = (struct Sub3000_020a66a4*)((char*)a0 + 0x3000);
    other = sub->fieldotherFieldOffset;
    g = func_02057924(sub);
    if (p == NULL) return;
    if (headId == 0xa && *((unsigned char*)other + 3) != 0) {
        if (func_ov017_021b8b54(other)) return;
    }
    func_020a7eb8((struct Obj020a7eb8*)p);
    func_02057ab8(g, 0xc9);
}
