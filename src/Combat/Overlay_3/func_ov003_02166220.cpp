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
extern "C" void* func_02010828(GameState*);
extern "C" void func_ov003_02166164(Outer02166164*, int, int);
extern "C" void func_02042764(void* src, void* dst, int flag);
#if defined(jpn)
extern "C" short func_020865b0(Struct020865b0*);
#else
extern "C" int func_020865b0(Struct020865b0*);
#endif
extern "C" int func_ov003_0215f56c(S0215f56c*);
extern "C" int func_02080b40(void* obj, int id);
extern "C" void func_02080cc0(struct Container02080cc0* obj, int id, int value);
extern "C" int func_02080b40(void*, int);
extern "C" void func_02080f8c(Container02080f8c*, int, int);
extern "C" void func_02080fe0(void*, int, int);
extern "C" void func_02080fa8(struct Container02080fa8*, int, int);
extern "C" void func_0208103c(void*, int, int);
extern "C" void func_02080828(void*, int, short*, short*);
extern "C" void func_020808c8(void*, short, short*, short*);
extern "C" void func_02080854(void*, int, int, int);
extern "C" int func_020e0434(struct Container020e0310*, int);
extern "C" void func_ov003_0215f5e8(void* menu, int page, int count);
extern "C" void func_ov003_02160c58(void* self, short* outHigh, short* outLow);
extern "C" void func_02081198(struct StatusOwner02081198* owner, int id, int enable);
extern "C" void func_02081164(struct StatusOwner02081164* obj, int id, int value);
extern "C" int func_020813ec(void* obj, int id);
extern "C" void func_ov003_02160678(void* self);
extern "C" void func_ov003_02160794(void* self);

struct MemberEntry02166220 {
    char pad0[2];
    unsigned char unk2[0xd];
    unsigned char unkF[0x140 - 0xf];
    char name[0x34];
    unsigned char bit0 : 1;
    char pad175[0x23c - 0x175];
};

struct Party02166220 {
    char pad0[0xf7c];
    unsigned char countF7c;
    char padF7d[0xf80 - 0xf7d];
    MemberEntry02166220 members[(0x2c8c - 0xf80) / 0x23c];
    char pad[0x2c8c - 0xf80 - ((0x2c8c - 0xf80) / 0x23c) * 0x23c];
    unsigned char count;
};

struct ShortPair02166220 {
    short v[2];
};

struct Table0217f3ec {
#if defined(jpn)
    char pad[0x14];
#else
    char pad[0x20];
#endif
    ShortPair02166220 ids;
};

extern Table0217f3ec data_ov003_0217f3ec;

struct StatusPanel02166220 {
#if defined(jpn)
    char pad[0x1c4];
    Container020e0310 cont2dc;
    char pad2e4[0x20c - 0x1cc];
    struct Container02080cc0* elementObj;
    char pad328[0x290 - 0x210];
    unsigned char counters[4];
    char pad46c[0x2c7 - 0x294];
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
    char pad46c[0x49f - 0x46c];
    signed char page;
    char pad4a0[0x4bd - 0x4a0];
    unsigned char flag4bd;
#endif
};

struct EntryList02166220 {
#if defined(jpn)
    char pad[0x2a];
#else
    char pad[0x36];
#endif
    short field36;
};

// USA: func_ov003_02166220
extern "C" ARM void func_ov003_02166220(StatusPanel02166220* self) {
    struct Container02080cc0* elementObj = self->elementObj;
    Party02166220* party;
    short count;
    MemberEntry02166220* entry;
    short idB;
#if defined(jpn)
    short v;
#else
    int v;
#endif
    int k;
    short row;
    int idA;
    int color;
    int idC;
    short i;
    int off;
    short j;
    int key;
    unsigned char kind;
    short t22, t20, t1e, t1c;
    short outHigh, outLow;
    ShortPair02166220 ids;

    func_02080b54(elementObj, 6);
    party = (Party02166220*)func_02010828(GameState::GetInstance());
    count = party->count;
    idA = 0x15;
    idB = 100;
    row = self->page * 4;
    self->flag4bd = (unsigned char)idA;
    v = -1;
    idC = 0xcb;
    memset(self->counters, 0, 4);
    func_ov003_02166164((Outer02166164*)self, count > 4, 1);
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
        if (idA == ((struct EntryList02166220*)elementObj)->field36 && color == 0xf) {
            color = 0xa;
        }
        if (row < count) {
            for (j = 0; j < 3; j++) {
                k = idA + j * 4;
                ((void (*)(struct Container02080cc0*, short, int))func_02080cc0)(elementObj, k, color);
                func_02080b40(elementObj, (short)k);
            }
#if !defined(jpn)
            func_02080cc0(elementObj, idB, color);
            func_02080b40(elementObj, idB);
#endif
            self->counters[i] = entry->bit0 + 1;
            kind = entry->unkF[func_020865b0((Struct020865b0*)entry)];
            func_0208103c(elementObj, idC, (short)(kind + 100));
            if (kind != 0) {
                color = 5;
                if (kind == 0xa) {
                    color = 0xd;
                }
                key = i + 0x19;
                func_02080828(elementObj, (short)key, &t22, &t20);
                func_020808c8(elementObj, key, &t1e, &t1c);
#if defined(jpn)
                func_02080854(elementObj, idC, (short)(t22 + t1e + 1), (short)(t20 + 2));
#else
                func_02080854(elementObj, idC, (short)(t22 + t1e + 1), t20);
#endif
                func_02080cc0(elementObj, idC, color);
                func_02080b40(elementObj, idC);
            }
        } else {
            func_02080cc0(elementObj, idA, color);
            func_02080b40(elementObj, idA);
            func_02080f8c((struct Container02080f8c*)elementObj, idA, (int)func_020e0434(&self->cont2dc, 0x7530));
        }
        row++;
        idA = (short)(idA + 1);
        idC = (short)(idC + 1);
#if !defined(jpn)
        idB++;
#endif
    }

    func_ov003_0215f5e8(elementObj, self->page, count);
    func_ov003_02160c58(self, &outHigh, &outLow);
    party = (Party02166220*)func_02010828(GameState::GetInstance());
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
