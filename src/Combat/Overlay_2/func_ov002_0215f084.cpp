#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020dd290(void *obj, unsigned int flag);
extern "C" void *func_020421a0();
extern "C" void func_02046380();
struct StoreStruct;
extern "C" void func_020465c0(StoreStruct*, int, int);
struct Container020e0310;
extern "C" int func_020e0434(Container020e0310*, int);
extern "C" void func_02046608(void *g, int a, int b, int c, int d, int e, int f);

#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_020465f0(StoreStruct*, int, unsigned char);
extern "C" void func_020465d8(StoreStruct*, int, unsigned char);
extern "C" void func_020474a8(void *g, int a, int b, int c);
#else
#define RG(u, j) (u)
#endif

struct Struct020fdcb0 { int f0; int f4; char pad[0x18]; };
extern Struct020fdcb0 data_020fdcb0[];

// USA: func_ov002_0215f084
extern "C" ARM void func_ov002_0215f084(void *objPtr, int param2) {
    if (param2 == 0) {
        return;
    }
    char *base = (char*)objPtr;
    void *bs = GameState::GetInstance();
    signed char byteFlag = *(signed char*)(base + RG(0x1c20, 0x1ae8));
    void *combatant = ((GameState*)bs)->GetPartyMemberByIndex(byteFlag);
    if (combatant == 0) {
        return;
    }
    short idx = *(short*)(base + RG(0x1bfa, 0x1ac2));
    void *entry = 0;
    if (idx >= 0) {
        if (idx < 0x20) {
            entry = *(void**)(base + 0x2000 + idx * 4 + RG(0x4a0, 0x2d0));
        }
    }
    if (entry == 0) {
        return;
    }
    struct FlagsField8 { unsigned int byte0 : 8; unsigned int rest : 24; };
    unsigned int flagByte = ((FlagsField8*)((char*)entry + 8))->byte0;
    int adjResult = func_020dd290(combatant, flagByte);
    short s = *(short*)((char*)combatant + 4);
    Struct020fdcb0 *e = &data_020fdcb0[s];
    void *g = func_020421a0();
    func_02046380();
    func_020465c0((StoreStruct*)g, 0, adjResult);
#if defined(jpn)
    func_020465f0((StoreStruct*)g, 0, 3);
    func_020465d8((StoreStruct*)g, 0, 1);
#endif
    func_020465c0((StoreStruct*)g, 1, e->f4);
#if defined(jpn)
    func_020465f0((StoreStruct*)g, 1, 3);
    func_020465d8((StoreStruct*)g, 1, 0);
#endif
    int fieldResult = func_020e0434((Container020e0310*)(base + RG(0x20, 0x8)), 0xbb8);
#if defined(jpn)
    func_020474a8(g, 0xa, fieldResult, param2);
#else
    func_02046608(g, 0xa, fieldResult, param2, 0x100, 0, 0);
#endif
}
