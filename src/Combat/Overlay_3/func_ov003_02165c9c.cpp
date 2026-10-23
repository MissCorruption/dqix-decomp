#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"

struct Container02080cc0;
struct Container02080f8c;
struct Container02080fa8;
struct StatusOwner02081198;
struct StatusOwner02081164;
struct Struct020865b0;
struct S0215f56c;
struct Outer02166164;

extern "C" int func_02080b54(void* obj, int id);
extern "C" int func_ov003_021614e8(int);
extern "C" void func_ov003_02166164(Outer02166164*, int, int);
extern "C" void func_02042764(void* src, void* dst, int flag);
extern "C" int func_020865b0(Struct020865b0*);
extern "C" int func_ov003_0215f56c(S0215f56c*);
extern "C" int func_02080b40(void* obj, int id);
extern "C" void func_02080cc0(struct Container02080cc0* obj, int id, int value);
extern "C" void func_02080f8c(Container02080f8c*, int, int);
extern "C" void func_02080fe0(void*, int, int);
extern "C" void func_02080fa8(struct Container02080fa8*, int, int);
extern "C" void func_0208103c(void*, int, int);
extern "C" void func_02080828(void*, int, short*, short*);
extern "C" void func_020808c8(void*, int, short*, short*);
extern "C" void func_02080854(void*, int, int, int);
extern "C" int func_020e0434(struct Container020e0310*, int);
extern "C" void func_ov003_0215f5e8(void* menu, int page, int count);
extern "C" void func_ov003_02160c58(void* self, short* outHigh, short* outLow);
extern "C" void func_02081198(struct StatusOwner02081198* owner, int id, int enable);
extern "C" void func_02081164(struct StatusOwner02081164* obj, int id, int value);
extern "C" int func_020813ec(void* obj, int id);
extern "C" void func_ov003_02160678(void* self);
extern "C" void func_ov003_02160794(void* self);

struct MemberEntry02165c9c {
    signed char id : 6;
    char pad0[1];
    unsigned char unk2[0xd];
    unsigned char unkF[0x140 - 0xf];
    char name[0x34];
    unsigned char bit0 : 1;
    char pad175[0x23c - 0x175];
};

struct Party02165c9c {
    char pad0[0xf7c];
    unsigned char countF7c;
    char padF7d[0xf80 - 0xf7d];
    MemberEntry02165c9c members[(0x2c8c - 0xf80) / 0x23c];
    char pad[0x2c8c - 0xf80 - ((0x2c8c - 0xf80) / 0x23c) * 0x23c];
    unsigned char count;
};

extern "C" void* func_02010828(GameState*);

static inline Party02165c9c* GetParty() {
    return (Party02165c9c*)func_02010828(GameState::GetInstance());
}

struct ShortPair02165c9c {
    short v[2];
};

struct Table0217f3ec_02165c9c {
#if defined(jpn)
    char pad[0x18];
#else
    char pad[0x10];
#endif
    ShortPair02165c9c ids;
};

extern Table0217f3ec_02165c9c data_ov003_0217f3ec;

struct StatusPanel02165c9c {
#if defined(jpn)
    char pad[0x1c4];
    Container020e0310 cont2dc;
    char pad2e4[0x20c - 0x1cc];
    struct Container02080cc0* elementObj;
    char pad328[0x290 - 0x210];
    unsigned char counters[4];
    char pad46c[0x2a8 - 0x294];
    short selected;
    char pad482[0x2c7 - 0x2aa];
    signed char page;
    char pad4a0[0x2e5 - 0x2c8];
    unsigned char flag4bd;
#else
    char pad[0x2dc];
    Container020e0310 cont2dc;
    char pad2e4[0x324 - 0x2e4];
    struct Container02080cc0* elementObj;
    char pad328[0x39c - 0x328];
    char names[4][0x30];
    char pad45c[0x468 - 0x45c];
    unsigned char counters[4];
    char pad46c[0x480 - 0x46c];
    short selected;
    char pad482[0x49f - 0x482];
    signed char page;
    char pad4a0[0x4bd - 0x4a0];
    unsigned char flag4bd;
#endif
};

struct EntryList02165c9c {
#if defined(jpn)
    char pad[0x2a];
#else
    char pad[0x36];
#endif
    short field36;
};

// USA: func_ov003_02165c9c
extern "C" ARM void func_ov003_02165c9c(StatusPanel02165c9c* self) {
    struct Container02080cc0* elementObj = self->elementObj;
    Party02165c9c* party;
    int count;
    MemberEntry02165c9c* entry;
    short idB;
    short row;
    int v;
    int emptyName;
    int otherName;
    int total;
    int k;
    int empty;
    int idA;
    int idC;
    int color;
    short i;
    int off;
    short j;
    int key;
    unsigned char kind;
    int name;
    short t32, t30, t2e, t2c;
    short outHigh, outLow;
    ShortPair02165c9c ids;

    func_02080b54(elementObj, 6);
    party = GetParty();
    count = party->count;
    idA = 0x15;
    idB = 100;
    row = self->page * 4;
    v = -1;
    idC = 0xcb;
    emptyName = func_020e0434(&self->cont2dc, 0x7530);
    otherName = func_020e0434(&self->cont2dc, 0x7531);
    self->flag4bd = (unsigned char)idA;
    memset(self->counters, 0, 4);
    if (func_ov003_021614e8((int)self) == 0) {
        empty = 1;
    } else {
        empty = 0;
    }
    total = count + empty;
    func_ov003_02166164((Outer02166164*)self, total > 4, 1);
#if !defined(jpn)
    memset(self->names, 0, sizeof(self->names));
#endif

    for (i = 0; i < 4; i++) {
        entry = &party->members[row];
#if defined(jpn)
        func_02080f8c((struct Container02080f8c*)elementObj, idA, (int)entry->name);
#else
        off = i * 0x30;
        func_02042764(entry->name, (char*)self->names + off, 1);
        func_02080f8c((struct Container02080f8c*)elementObj, idA, (int)&self->names[0][off]);
#endif
        if (func_020865b0((Struct020865b0*)entry) != 0) {
            v = (short)(func_020865b0((Struct020865b0*)entry) + 0x11);
        }
        func_02080fe0(elementObj, (short)(idA + 4), v);
        func_02080fa8((struct Container02080fa8*)elementObj, (short)(idA + 8),
                                   entry->unk2[func_020865b0((Struct020865b0*)entry)]);
        color = func_ov003_0215f56c((S0215f56c*)entry);
        if (idA == ((struct EntryList02165c9c*)elementObj)->field36 && color == 0xf) {
            color = 0xa;
        }
        if (row < count) {
            if (entry->id == self->selected) {
                color = 5;
            }
            for (j = 0; j < 3; j++) {
                k = idA + j * 4;
                func_02080cc0(elementObj, (short)k, color);
                func_02080b40(elementObj, (short)(unsigned int)k);
            }
#if !defined(jpn)
            func_02080cc0(elementObj, idB, color);
            func_02080b40(elementObj, idB);
#endif
            kind = entry->unkF[func_020865b0((Struct020865b0*)entry)];
            func_0208103c(elementObj, idC, (short)(kind + 100));
            if (kind != 0) {
                color = 5;
                if (kind == 0xa) {
                    color = 0xd;
                }
                func_02080cc0(elementObj, idC, color);
                key = i + 0x19;
                func_02080828(elementObj, (short)key, &t32, &t30);
                func_020808c8(elementObj, (short)(unsigned int)key, &t2e, &t2c);
#if defined(jpn)
                func_02080854(elementObj, idC, (short)(t32 + t2e + 1), (short)(t30 + 2));
#else
                func_02080854(elementObj, idC, (short)(t32 + t2e + 1), t30);
#endif
                func_02080cc0(elementObj, idC, color);
                func_02080b40(elementObj, idC);
            }
            self->counters[i] = entry->bit0 + 1;
        } else {
            name = emptyName;
            if (empty != 0 && func_ov003_021614e8((int)self) == 0) {
                empty = 0;
                name = otherName;
            }
            func_02080cc0(elementObj, idA, color);
            func_02080b40(elementObj, idA);
            func_02080f8c((struct Container02080f8c*)elementObj, idA, name);
        }
        row++;
        idA = (short)(idA + 1);
        idC = (short)(idC + 1);
#if !defined(jpn)
        idB++;
#endif
    }

    func_ov003_0215f5e8(elementObj, self->page, total);
    func_ov003_02160c58(self, &outHigh, &outLow);
    party = GetParty();
    outLow = outLow - (party->countF7c - 1);
    func_02080fa8((struct Container02080fa8*)elementObj, 0x23, outLow);
    func_02080fa8((struct Container02080fa8*)elementObj, 0x24, outHigh);

    ids = data_ov003_0217f3ec.ids;
    for (int n = 0; n < 2; n++) {
        short id = ids.v[n];
        func_02081198((struct StatusOwner02081198*)elementObj, id, 1);
        func_02081164((struct StatusOwner02081164*)elementObj, id, 1);
        func_020813ec(elementObj, id);
    }
    func_ov003_02160678(self);
    func_ov003_02160794(self);
}
