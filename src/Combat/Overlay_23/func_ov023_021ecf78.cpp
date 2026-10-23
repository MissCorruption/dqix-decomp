#include <globaldefs.h>
#include "GameState/GameState.h"


struct Container0205a3d0;
struct Container0205a330;
extern "C" void func_0205a42c(struct Container0205a3d0* c, int key, int val);
extern "C" void func_0205a370(struct Container0205a3d0* c, int key);
extern "C" void func_0205a330(struct Container0205a330* c, int arg);
extern "C" void func_0205ae8c(void* p);

struct Elem0205a3d0_021ecf78 {
    char pad0[4];
    unsigned short field4;
    unsigned short field6;
    char pad8[0x15 - 8];
    unsigned char flags15;
};
extern "C" struct Elem0205a3d0_021ecf78* func_0205a3d0(struct Container0205a3d0* c, int key);

struct Obj021ecf78 {
    char pad0[0x424];
    void* f424;
    char pad428[0x42c - 0x428];
    struct Container0205a3d0* container;
    char pad430[0x438 - 0x430];
    unsigned short f438;
    char pad43a[0x448 - 0x43a];
    short f448;
};

// USA: func_ov023_021ecf78
extern "C" ARM void func_ov023_021ecf78(struct Obj021ecf78* obj) {
    if ((obj->f438 & 0x80) == 0) {
        return;
    }

    GameState* battleStruct = GameState::GetInstance();
    func_0205a42c(obj->container, 0, 0x40);
    func_0205a370(obj->container, 0);

    struct Elem0205a3d0_021ecf78* entry = func_0205a3d0(obj->container, 0);
    if (entry != NULL) {
        entry->flags15 |= 8;
    }

    unsigned int scaleCount = battleStruct->GetTickCount();
    func_0205a330((struct Container0205a330*)obj->container, scaleCount);

    short pos = obj->f448;
    struct Elem0205a3d0_021ecf78* entry2 = func_0205a3d0(obj->container, 0);
    if (entry2 != NULL) {
        entry2->field4 = pos;
        entry2->field6 = 0x24;
    }

    func_0205ae8c(obj->f424);
}
