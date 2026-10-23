#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov024_021f6f10(void* self);
struct Struct0200fb08;
extern "C" unsigned char func_0200fb08(struct Struct0200fb08* obj);
extern "C" void* func_ov023_021f79e4(void* obj);

struct Obj0204b988;
extern "C" void func_0204b988(struct Obj0204b988*, unsigned int, int, int, unsigned short);

struct Obj0204b8d0;
extern "C" void func_0204b8d0(struct Obj0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);

struct List0204b0e8;
extern "C" void func_0204b0e8(struct List0204b0e8*, void*);

// USA: func_ov004_02154f1c
extern "C" ARM int func_ov004_02154f1c(void* a) {
    unsigned char v = func_0200fb08((struct Struct0200fb08*)GameState::GetInstance());
    unsigned int kind = 1;
    switch (v) {
    case 2: kind = 2; break;
    case 4: kind = 3; break;
    case 3: kind = 4; break;
    case 5: kind = 5; break;
    }

    void* node = func_ov023_021f6880(func_ov011_021849c8(a), 0xc);
    if (!node) return 0;
    if (func_ov024_021f6f10(node) != 2) return 0;

    *(unsigned char*)((char*)node + 0xc) |= 1;
    void* list = func_ov023_021f79e4(node);
    func_0204b988((struct Obj0204b988*)list, 1, 0, 0, 0xffff);
    if (kind > 1) {
        func_0204b8d0((struct Obj0204b8d0*)list, kind, 0, 0, 0x16, 2, 9, 2, 0xffff);
    }
    func_0204b0e8((struct List0204b0e8*)list, 0);
    return 0;
}
