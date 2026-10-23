#include <globaldefs.h>
#if defined(jpn)
enum { kRegion89c = 0x818 };
enum { kRegion874 = 0x7f0 };
enum { kRegion1000 = 0xf7c };
#else
enum { kRegion89c = 0x89c };
enum { kRegion874 = 0x874 };
enum { kRegion1000 = 0x1000 };
#endif
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* gameState);
struct Obj2081;
extern "C" void func_02080c20(Obj2081*, int);
extern "C" void func_02080c04(struct Obj2081* obj, short key);
extern "C" void func_02080c68(void*, int, int);
extern "C" void func_02080b54(void*, int);
struct Container020dedd0 {
    char pad;
};
struct Node021769ec;
extern "C" struct Node021769ec* func_020dedd0(struct Container020dedd0* c, int key);
struct Container02080f8c;
extern "C" void func_02080f8c(struct Container02080f8c* obj, int id, int value);
struct Container02080cc0;
extern "C" void func_02080cc0(struct Container02080cc0* obj, int id, int value);
extern "C" int func_02080b40(void* obj, int id);
extern "C" void func_0208103c(void* obj, int id, int value);
struct Field150Holder02052df8;
extern "C" short func_02052df8(Field150Holder02052df8* obj, int index);
struct Container02080fa8;
extern "C" void func_02080fa8(struct Container02080fa8* obj, int id, int value);
struct Container02080fc4;
extern "C" void func_02080fc4(struct Container02080fc4* obj, int id, int value);
extern "C" int func_020dd4c4(int id, void* node);
extern "C" int func_020dcc98(int combatantId);
extern "C" int func_ov003_021753a0(void* obj, int id, void* a, void* b);
extern "C" int func_020813ec(void* obj, short key);

extern int data_ov003_0217fb18[];

struct Node021769ec {
    char pad0[8];
    unsigned int kind : 4;
    unsigned int pad8 : 28;
    unsigned int lo : 7;
    unsigned int tier : 4;
    unsigned int hi : 21;
    char pad10[0x18 - 0x10];
    short count;
};

struct Party021769ec {
    char pad0[0x1c];
    int ids[5];
    unsigned int memberCount;
    char pad34[0x3a - 0x34];
    short key;
};

struct Menu021769ec {
    char pad0[kRegion874];
    struct Container020dedd0 list;
    char pad875[kRegion89c - kRegion874 - 1];
    struct Obj2081* elemObj;
    char pad8a0[kRegion1000 - kRegion89c - 4];
    Party021769ec party;
};

static inline int IsKindValid(Node021769ec* n) { return n->kind <= 7; }

// USA: func_ov003_021769ec
extern "C" ARM void func_ov003_021769ec(Menu021769ec* self) {
    short group;
    short id0 = 0x1c;
    group = 4;
    short id1 = 0x1d;
    short id2 = 0x1e;
    short id3 = 0x1f;
    short id4 = 0x20;
    short id5 = 0x21;
    short id6 = 0x145;
    short id7 = 0x146;
    struct Obj2081* elemObj = self->elemObj;
    GameState* battle = GameState::GetInstance();
    func_02010828(battle);
    unsigned char count = self->party.memberCount;

    switch (count) {
    case 2:
        group = 5;
        id0 = 0x22;
        id1 = 0x24;
        id2 = 0x26;
        id3 = 0x28;
        id4 = 0x2a;
        id5 = 0x2c;
        id6 = 0x147;
        id7 = 0x149;
        break;
    case 3:
        group = 6;
        id0 = 0x2d;
        id1 = 0x30;
        id2 = 0x33;
        id3 = 0x36;
        id4 = 0x39;
        id5 = 0x3c;
        id6 = 0x14b;
        id7 = 0x14e;
        break;
    case 4:
        group = 7;
        id0 = 0x3d;
        id1 = 0x41;
        id2 = 0x45;
        id3 = 0x49;
        id4 = 0x4d;
        id5 = 0x51;
        id6 = 0x151;
        id7 = 0x155;
        break;
    }

    func_02080c20(elemObj, group);
    func_02080c68(elemObj, group, 0);
    func_02080b54(elemObj, group);

    Node021769ec* node = func_020dedd0(&self->list, self->party.key);
    bool valid = false;
    if (node != NULL) {
        valid = IsKindValid(node);
    }
    if (valid) {
        for (unsigned char i = 0; i < count; i++) {
            int ready = func_020dd4c4((signed char)self->party.ids[i], node);
            int id = (signed char)self->party.ids[i];
            int value = 0;
            GameObject* member = battle->GetPartyMemberByIndex(id);
            if (member != NULL) {
                value = *(int*)((char*)member + 0x134);
            }
            func_02080f8c((struct Container02080f8c*)elemObj, id0, value);
            func_02080cc0((struct Container02080cc0*)elemObj, id0, func_020dcc98(id));
            func_02080b40(elemObj, id0);

            if (ready != 0) {
                func_02080cc0((struct Container02080cc0*)elemObj, id4, 3);
                func_0208103c(elemObj, id4, 0xb);
                func_02080b40(elemObj, id4);
            } else {
                func_02080cc0((struct Container02080cc0*)elemObj, id4, 0xf);
                int index = data_ov003_0217fb18[node->kind];
                if (index < 0) {
                    return;
                }
                short have = func_02052df8((Field150Holder02052df8*)member, index);
                if (have == node->count) {
                    func_0208103c(elemObj, id4, 0x22);
                    func_02080b40(elemObj, id4);
                } else {
                    unsigned short cur;
                    unsigned short max;
                    if (func_ov003_021753a0(self, id, &cur, &max) != 0) {
                        int nibble = 0xf;
                        if (cur < max) {
                            nibble = 5;
                        }
                        if (cur > max) {
                            nibble = 9;
                        }
                        func_02080cc0((struct Container02080cc0*)elemObj, id2, nibble);
                        func_02080fa8((struct Container02080fa8*)elemObj, id1, cur);
                        func_02080fa8((struct Container02080fa8*)elemObj, id2, max);
                        func_02080b40(elemObj, id1);
                        func_02080b40(elemObj, id2);
                        func_02080b40(elemObj, id3);
                    } else {
                        float fcur;
                        float fmax;
                        func_ov003_021753a0(self, id, &fcur, &fmax);
                        int nibble = 0xf;
                        if (fcur < fmax) {
                            nibble = 5;
                        }
                        if (fcur > fmax) {
                            nibble = 9;
                        }
                        func_02080cc0((struct Container02080cc0*)elemObj, id7, nibble);
                        func_02080fc4((struct Container02080fc4*)elemObj, id6, *(int*)&fcur);
                        func_02080fc4((struct Container02080fc4*)elemObj, id7, *(int*)&fmax);
                        func_02080b40(elemObj, id6);
                        func_02080b40(elemObj, id7);
                        func_02080b40(elemObj, id3);
                    }
                }
            }
            id0++;
            id1++;
            id2++;
            id3++;
            id4++;
            id6++;
            id7++;
        }

        if (node->tier != 0) {
            func_02080b40(elemObj, id5);
            func_0208103c(elemObj, id5, (short)(node->tier + 0x2f));
        }
    } else {
        func_02080c04(elemObj, group);
    }

    func_020813ec(elemObj, group);
}
