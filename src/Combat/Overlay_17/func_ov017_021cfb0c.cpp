#if defined(jpn)
enum { RegionOffset36fc = 0x34ec, RegionOffset3b0c = 0x3afc };
#else
enum { RegionOffset36fc = 0x36fc, RegionOffset3b0c = 0x3b0c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

struct HeadNode02046b24;
struct ListHead02046b60;
struct TailList020469b4;
struct TailNode020469b4;
struct SearchStruct0202c1a4;

struct Obj021be40c {
    unsigned char pad0[0x10];
    Vector3i pos;
    int zoneId;
};

struct Counter021cfb0c {
    unsigned char pad0[0x14];
    int count;
};

struct Ov021cfb0c {
    unsigned char pad0[RegionOffset36fc];
    HeadNode02046b24** list;
    unsigned char pad3700[RegionOffset3b0c - 0x3700];
    struct Counter021cfb0c* counter;
    unsigned char pad3b10[0x3ca4 - 0x3b10];
    struct Obj021be40c* node;
};

struct GrottoEntrance021cfb0c {
    unsigned char pad0[0xc];
    int zoneId;
    Vector3i pos;
};

extern "C" int func_0202c508(struct SearchStruct0202c1a4* search);
extern "C" unsigned short* func_02012fe4(void);
extern "C" void* func_0200fd0c(GameState* battleStruct);
extern "C" int func_02046b24(HeadNode02046b24** list);
extern "C" int func_0201b588(int v);
extern "C" int func_02046b60(ListHead02046b60* list, int id);
extern "C" void func_ov017_021be40c(struct Obj021be40c* obj);
extern "C" void func_020469b4(TailList020469b4* list, TailNode020469b4* node);

// USA: func_ov017_021cfb0c
extern "C" ARM void func_ov017_021cfb0c(int unused0, void* unused1, GameState* battleStruct, struct Ov021cfb0c* ov, struct SearchStruct0202c1a4* search) {
    int flag;
    unsigned short* zone;
    struct GrottoEntrance021cfb0c* grotto;
    unsigned short zoneId;
    HeadNode02046b24** list;
    unsigned short* cur;
    struct Obj021be40c* node;

    if (func_0202c508(search) != 0) {
        return;
    }

    zone = func_02012fe4();
    battleStruct->GetUnknownGameObject();
    zoneId = *zone;
    grotto = (struct GrottoEntrance021cfb0c*)battleStruct->GetGrottoStruct();
    list = ov->list;
    flag = 0;
    cur = (unsigned short*)func_0200fd0c(battleStruct);
    if (func_02046b24(list) == 3) {
        if (func_0201b588(*cur)) {
            flag = 1;
        }
    }
    if (!func_0201b588(zoneId) && !flag) {
        return;
    }

    Vector3i pos = grotto->pos;
    pos.z += 0x2000;
    if (func_02046b60((ListHead02046b60*)list, 3) || func_02046b60((ListHead02046b60*)list, 1)) {
        unsigned short id = *(unsigned short*)func_0200fd0c(battleStruct);
        if (id == 0xc3b5) {
            return;
        }
        if (!func_0201b588(id)) {
            return;
        }
    }

    if (func_02046b24(list) == 0x1a) {
        if (ov->counter->count >= 6) {
            return;
        }
    }
    if (func_02046b60((ListHead02046b60*)list, 0x4e)) {
        return;
    }

    node = ov->node;
    func_ov017_021be40c(node);
    node->pos = pos;
    node->zoneId = grotto->zoneId;
    func_020469b4((TailList020469b4*)list, (TailNode020469b4*)node);
}
