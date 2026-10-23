#include <globaldefs.h>
#include <GameState/GameState.h>
#include "Input/Input.h"

#if defined(jpn)
#define RG(u, j) (j)
#define func_0205ec34 func_0205ff20
#define func_ov002_0215bba8 func_ov002_0215cd18
#else
#define RG(u, j) (u)
#endif

struct Struct_0205d81c;
struct Struct_0205def8;
struct Outer020e28dc;
struct Ctx020e263c;

struct Elem_0205d81c {
    unsigned char field_0x0[0xc5];
    unsigned char flags;
};

struct BattleManager {
    unsigned char field_0x0[RG(0x998, 0x868)];
    int blocked;
    int field_0x99c;
    int state;
};

struct BattleElementRegion {
    unsigned int header;
    unsigned char entries[0xba4];
    unsigned char current[RG(0x130, 0xa0)];
};

class BattleActor {
public:
    unsigned int field_0x0;
    union {
        Outer020e28dc* owner;
        Ctx020e263c* context;
    } connection;
    unsigned char field_0x8[RG(0x48, 0x30)];
    unsigned char model[RG(0x864, 0x7e0)];
    unsigned char effect[RG(0x614, 0x608)];
    BattleElementRegion elements;
    int delta;
    unsigned char field_0x1ba4[0x14];
    int state;
    int previousState;
    int mode;
    int field_0x1bc4;
    int displayMode;
    int pending;
    unsigned char field_0x1bd0[0x44];
    unsigned short field_0x1c14;
    unsigned char field_0x1c16[0x1a];
    unsigned char busy;
    unsigned char field_0x1c31[RG(0x92, 0x8e)];
    unsigned char effectEnabled;
    unsigned char elementsUpdated;
    unsigned char field_0x1cc5[RG(0x7a3, 0x70f)];
    void* optional;
    unsigned char field_0x246c[0x10];
    unsigned int flags;
    unsigned char field_0x2480[5];
    unsigned char active;
    unsigned char field_0x2486;
    unsigned char pendingState;
};

typedef void (BattleActor::*BattleHandler)();
struct BattleTarget {
    unsigned char data[0x34];
};

extern "C" int func_ov017_021959b4();
extern "C" void func_ov002_02155024(unsigned char*);
extern "C" int func_020421a0();
extern "C" void func_ov023_021e7404(void*, int);
extern "C" void func_ov002_02156178(unsigned char*);
extern "C" void func_ov023_021eb43c(void*);
extern "C" int func_ov002_02154c30(void*);
extern "C" void func_ov002_0215b648(unsigned char*);
extern "C" void func_ov002_02156bc8(BattleActor*);
extern "C" void func_ov002_02156c7c(BattleActor*);
extern "C" void func_ov002_021561b0(BattleActor*);
extern "C" Elem_0205d81c* func_0205d8c4(Struct_0205d81c*);
extern "C" int func_0204c7cc(unsigned char*);
extern "C" void func_0205bc24(void*, int);
extern "C" int func_020e28dc(Outer020e28dc*);
extern "C" void func_020e263c(Ctx020e263c*, int);
extern "C" int func_0205d0e0(Struct_0205d81c*, int);
extern "C" int func_ov002_02161b48(char*, int);
extern "C" void* func_0205ec34();
extern "C" int func_020649b0(void*, int, void*);
extern "C" void func_0206f81c(void*);
extern "C" void func_ov023_021dca88(void*);
extern "C" void func_ov002_0215aa14(char*);
extern "C" int func_0201079c(char*);
extern "C" void func_0205def8(Struct_0205def8*, int, int);
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);
extern "C" void func_ov002_0215bba8(BattleActor*);
extern unsigned int data_ov002_0216d3a8;
extern BattleHandler data_020e6d5c;
extern BattleHandler data_ov002_0216cd74[RG(44, 47)];

static inline BattleElementRegion* GetElements(BattleActor* actor) { SDK_NULL_ASSERT(actor); return &actor->elements; }

// USA: func_ov002_02155960
extern "C" ARM int func_ov002_02155960(BattleActor* actor, int delta) {
    if (func_ov017_021959b4() != 0)
        func_ov002_02155024((unsigned char*)actor);
    BattleManager* manager = (BattleManager*)func_020421a0();
    actor->delta = delta;
    if (actor->effectEnabled != 0)
        func_ov023_021e7404(actor->effect, actor->delta);
    func_ov002_02156178((unsigned char*)actor);
    if (actor->optional != 0)
        func_ov023_021eb43c(actor->optional);
    if (actor->state != 0) {
        actor->elementsUpdated = 0;
        actor->elementsUpdated = func_ov002_02154c30(actor->elements.current);
        func_ov002_0215b648((unsigned char*)actor);
        if ((actor->flags & 0x20) == 0) {
            func_ov002_02156bc8(actor);
            func_ov002_02156c7c(actor);
        }
        func_ov002_021561b0(actor);
        Elem_0205d81c* element = func_0205d8c4((Struct_0205d81c*)&actor->elements);
        if (element != 0 && func_0204c7cc((unsigned char*)element) != 0 && (element->flags & 2) == 0)
            func_0205bc24(GetElements(actor)->entries, -1);
        if (actor->connection.owner != 0 && func_020e28dc(actor->connection.owner) != 0) {
            func_020e263c(actor->connection.context, actor->delta);
        } else {
            actor->displayMode = func_0205d0e0((Struct_0205d81c*)&actor->elements, actor->delta);
        }
    }
    if (actor->active != 0) {
        if ((actor->state == 4 && actor->mode == 1 && func_ov002_02161b48((char*)actor, 1) != 0) ||
                g_keyManager.TestKeysPressed(0x800) != 0) {
            if (manager->blocked == 0)
                actor->pendingState = 1;
        }
        if (actor->pendingState == 1) {
            BattleTarget target;
            if (func_020649b0(func_0205ec34(), 0x16, &target) != 0)
                func_0206f81c(&target);
            if (actor->flags & 1)
                func_ov023_021dca88(actor->model);
            actor->state = RG(0x2b, 0x2e);
            actor->previousState = RG(0x2b, 0x2e);
            actor->pendingState = 2;
        }
    }
    actor->pending = 0;
    if (actor->state == RG(0x26, 0x29) && manager->blocked != 0 && manager->state == 5)
        return 0;
    if ((data_ov002_0216d3a8 & 1) == 0) {
        BattleHandler empty = data_020e6d5c;
#if defined(jpn)
        data_ov002_0216cd74[6] = empty;
        data_ov002_0216cd74[9] = empty;
        data_ov002_0216cd74[19] = empty;
        data_ov002_0216cd74[20] = empty;
        data_ov002_0216cd74[23] = empty;
        data_ov002_0216cd74[27] = empty;
        data_ov002_0216cd74[28] = empty;
        data_ov002_0216cd74[30] = empty;
        data_ov002_0216cd74[33] = empty;
        data_ov002_0216cd74[34] = empty;
        data_ov002_0216cd74[35] = empty;
        data_ov002_0216cd74[43] = empty;
        data_ov002_0216cd74[44] = empty;
        data_ov002_0216cd74[46] = empty;
#else
        data_ov002_0216cd74[8] = empty;
        data_ov002_0216cd74[18] = empty;
        data_ov002_0216cd74[19] = empty;
        data_ov002_0216cd74[22] = empty;
        data_ov002_0216cd74[26] = empty;
        data_ov002_0216cd74[27] = empty;
        data_ov002_0216cd74[29] = empty;
        data_ov002_0216cd74[32] = empty;
        data_ov002_0216cd74[40] = empty;
        data_ov002_0216cd74[41] = empty;
        data_ov002_0216cd74[43] = empty;
#endif
        data_ov002_0216d3a8 |= 1;
    }
    if (data_ov002_0216cd74[actor->state] == 0)
        return (actor->flags & 1) == 0;
    (actor->*data_ov002_0216cd74[actor->state])();
    if (actor->state != 0 && actor->state != RG(0x1e, 0x1f) && actor->state != RG(0x2a, 0x2d) && actor->busy == 0 && actor->mode == 1) {
        manager = (BattleManager*)func_020421a0();
        if (g_keyManager.TestKeysPressed(0x800) != 0 && manager->blocked == 0) {
            if (actor->state == RG(0x21, 0x24))
                func_ov002_0215aa14((char*)actor);
            if (actor->state == RG(0xf, 0x10)) {
                func_ov002_02155024((unsigned char*)actor);
            } else {
                if (actor->flags & 1)
                    func_ov023_021dca88(actor->model);
                actor->state = RG(0x2b, 0x2e);
                actor->field_0x1c14 = 0;
            }
        }
    }
    if (func_0201079c((char*)GameState::GetInstance()) == 1 || actor->active != 0) {
        func_0205def8((Struct_0205def8*)&actor->elements, 0, RG(0x29, 0x2c));
    }
    func_0205deb4((Struct_0205d81c*)&actor->elements, RG(0x29, 0x2c), 0);
    func_0205deb4((Struct_0205d81c*)&actor->elements, RG(0x28, 0x2b), 0);
    func_ov002_0215bba8(actor);
    return 0;
}
