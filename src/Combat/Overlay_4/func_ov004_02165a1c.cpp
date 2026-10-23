#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_ov011_021849c8(void* obj);
extern "C" void* func_ov023_021f6880(void* obj, int id);
extern "C" int func_ov023_021f6f10(void* obj);
struct Obj021f9bb0;
extern "C" unsigned int func_ov023_021f9bb0(struct Obj021f9bb0* obj);
extern "C" int func_ov004_021634dc(void* self);
extern "C" void func_02011a24(char* dst, void* src);
extern "C" void func_ov011_021848a0(void* obj, int val);
extern "C" void func_ov017_0218d77c(GameResources* res, int val);

extern char* data_ov004_02171010;

// USA: func_ov004_02165a1c
extern "C" ARM int func_ov004_02165a1c(void* self) {
#if defined(jpn)
    enum { entryStride = 0x1e4 };
#else
    enum { entryStride = 0x1c4 };
#endif
    void* obj = func_ov023_021f6880(func_ov011_021849c8(self), 0xa);
    if (obj == NULL) return 0;
    if (func_ov023_021f6f10(obj) != 7) return 0;

    unsigned int idx = func_ov023_021f9bb0((struct Obj021f9bb0*)obj);
    int stat = func_ov004_021634dc(self);
    GameState* state = GameState::GetInstance();
    char* base = data_ov004_02171010;
    unsigned char kind = *(unsigned char*)((int)(base + 0xad5) + idx * entryStride);
    if (kind == 1) {
        func_02011a24((char*)state, base + stat * 0x1c);
    } else if (kind == 2) {
        func_02011a24((char*)state, base + stat * 0x1c);
    }
    func_ov011_021848a0(self, 0x73);
    func_ov017_0218d77c(GetGameResources(), 2);
    return 0;
}
