#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"

struct Container02080cc0;
struct Container02080f8c;
struct Container02080fa8;
struct StatusOwner02081198;
struct StatusOwner02081164;

extern "C" int func_02080b54(void* obj, int id);
extern "C" int func_02080b2c(void* obj, int id);
extern "C" int func_02080b40(void* obj, int id);
extern "C" void func_02080cc0(struct Container02080cc0* obj, int id, int value);
extern "C" int func_020dcc98(int combatantId);
extern "C" int* func_02053c6c(unsigned char* p);
extern "C" void func_02080f8c(Container02080f8c*, int, int);
extern "C" void func_02080fe0(void*, int, int);
extern "C" void func_02080fa8(struct Container02080fa8*, int, int);
extern "C" void func_0208103c(void*, int, int);
extern "C" void func_02080828(void*, int, short*, short*);
extern "C" void func_020808c8(void*, short, short*, short*);
extern "C" void func_02080854(void*, int, int, int);
extern "C" int func_020e0434(struct Container020e0310*, int);
extern "C" void func_02081198(struct StatusOwner02081198* owner, int id, int enable);
extern "C" void func_02081164(struct StatusOwner02081164* obj, int id, int value);
extern "C" int func_020813ec(void* obj, int id);
extern "C" void func_ov003_02160678(void* self);
extern "C" void func_ov003_02160794(void* self);

#if defined(jpn)
struct ProfileJ {
    char pad[0x16c];
    unsigned short unk16c;
    char pad187[0x186 - 0x16e];
    unsigned char unk186 : 8;
    char pad187b[0x49c - 0x187];
    unsigned char unk49c : 1;
    char pad49d[0x8b8 - 0x49d];
    int unk8b8;
};

struct EntryListJ {
    char pad[0x2a];
    short field2a;
};

struct StatusPanel {
    char pad[0x1c4];
    Container020e0310 cont1c4;
    char pad1cc[0x20c - 0x1cc];
    struct Container02080cc0* elementObj;
    char pad210[0x290 - 0x210];
    unsigned char counters[4];
    char pad294[0x2d5 - 0x294];
    unsigned char count2d5;
    char pad2d6[0x2e5 - 0x2d6];
    unsigned char flag2e5;
};

extern "C" ARM void func_ov003_02165888(StatusPanel* self) {
    struct Container02080cc0* elementObj = self->elementObj;
    int idA;
    int color;
    int idC;
    int v;
    int key;
    GameState* gs;
    GameObject* member;
    char* nm;
    unsigned char* ids;
    unsigned char count;
    short t16, t14, t12, t10;
    unsigned char i;

    func_02080b54(elementObj, 0x13);
    gs = GameState::GetInstance();

    ids = (unsigned char*)self + 0xd1 + 0x200;
    idA = 0x55;
    self->flag2e5 = (unsigned char)idA;
    count = self->count2d5;
    idC = 0xcf;
    memset((unsigned char*)self + 0x290, 0, 4);

    for (i = 0; i < 4; i++) {
        color = 0xf;
        func_02080b2c(elementObj, idC);

        if (i < count) {
            int j;
            struct ProfileJ* prof;
            member = gs->GetPartyMemberByIndex(ids[i]);
            if (member == 0) continue;

            for (color = 0; color < 3; color++) {
                func_02080b40(elementObj, (short)(idA + color * 4));
            }

            color = func_020dcc98((signed char)ids[i]);
            if (idA == ((struct EntryListJ*)elementObj)->field2a && color == 0xf) {
                color = 0xa;
            }
            for (j = 0; j < 3; j++) {
                func_02080cc0(elementObj, (short)(idA + j * 4), color);
            }

            v = -1;
            prof = (struct ProfileJ*)func_02053c6c((unsigned char*)member);
            ((unsigned char*)self + i)[0x290] = (unsigned char)(prof->unk49c + 1);
            nm = (char*)member->baseStats_;
            func_02080f8c((struct Container02080f8c*)elementObj, idA, (int)nm);
            if (prof->unk8b8 != 0) {
                v = (short)(prof->unk8b8 + 0x11);
            }
            func_02080fe0(elementObj, (short)(idA + 4), v);
            func_02080fa8(
                (struct Container02080fa8*)elementObj, (short)(idA + 8),
                *(unsigned short*)((char*)prof + prof->unk8b8 * 2 + 0x16c));

            {
                struct ProfileJ* p3 = *(struct ProfileJ**)((char*)member + 0x144);
                unsigned char* row = (unsigned char*)p3 + p3->unk8b8;
                unsigned char kind = row[0x186];
                func_0208103c(elementObj, idC, (short)(kind + 0x64));
                if (kind != 0) {
                    color = 5;
                    if (kind == 0xa) {
                        color = 0xd;
                    }
                    func_02080cc0(elementObj, idC, color);
                    func_02080b40(elementObj, idC);
                    key = i + 0x59;
                    func_02080828(elementObj, (short)key, &t16, &t14);
                    func_020808c8(elementObj, key, &t12, &t10);
                    func_02080854(elementObj, idC, (short)(t16 + t12 + 1), (short)(t14 + 2));
                    func_02080cc0(elementObj, idC, color);
                    func_02080b40(elementObj, idC);
                }
            }
        } else {
            if (idA == ((struct EntryListJ*)elementObj)->field2a) {
                color = 0xa;
            }
            func_02080b40(elementObj, idA);
            nm = (char*)func_020e0434(&self->cont1c4, 0x7530);
            func_02080f8c((struct Container02080f8c*)elementObj, idA, (int)nm);
            func_02080cc0(elementObj, idA, color);
        }

        idA = (short)(idA + 1);
        idC = (short)(idC + 1);
    }

    func_02081198((struct StatusOwner02081198*)elementObj, 0x13, 1);
    func_02081164((struct StatusOwner02081164*)elementObj, 0x13, 1);
    func_020813ec(elementObj, 0x13);
    func_ov003_02160678(self);
    func_ov003_02160794(self);
}
#else
struct Profile {
    char pad[0x16c];
    unsigned short unk16c;
    char pad187[0x186 - 0x16e];
    unsigned char unk186 : 8;
    char pad187b[0x49c - 0x187];
    unsigned char unk49c : 1;
    char pad49d[0x950 - 0x49d];
    int unk950;
};

struct EntryList {
    char pad[0x36];
    short field36;
};

struct StatusPanel {
    char pad[0x2dc];
    Container020e0310 cont2dc;
    char pad2e4[0x324 - 0x2e4];
    struct Container02080cc0* elementObj;
    char pad328[0x468 - 0x328];
    unsigned char counters[4];
    char pad46c[0x4ad - 0x46c];
    unsigned char count4ad;
    char pad4ae[0x4bd - 0x4ae];
    unsigned char flag4bd;
};

// USA: func_ov003_02165888
extern "C" ARM void func_ov003_02165888(StatusPanel* self) {
    struct Container02080cc0* elementObj = self->elementObj;
    int idA;
    int color;
    int idC;
    int v;
    int key;
    GameState* gs;
    GameObject* member;
    char* nm;
    unsigned char* ids;
    unsigned char count;
    short t16, t14, t12, t10;
    unsigned char i;
    int idB;

    func_02080b54(elementObj, 0x13);
    gs = GameState::GetInstance();

    ids = (unsigned char*)self + 0xa9 + 0x400;
    idA = 0x55;
    self->flag4bd = (unsigned char)idA;
    count = self->count4ad;
    idB = 0x68;
    idC = 0xcf;
    memset((unsigned char*)self + 0x68 + 0x400, 0, 4);

    for (i = 0; i < 4; i++) {
        color = 0xf;
        func_02080b2c(elementObj, idC);

        if (i < count) {
            int j;
            struct Profile* prof;
            member = gs->GetPartyMemberByIndex(ids[i]);
            if (member == 0) continue;

            for (color = 0; color < 3; color++) {
                func_02080b40(elementObj, (short)(idA + color * 4));
            }
            func_02080b40(elementObj, idB);

            color = func_020dcc98((signed char)ids[i]);
            if (idA == ((struct EntryList*)elementObj)->field36 && color == 0xf) {
                color = 0xa;
            }
            for (j = 0; j < 3; j++) {
                func_02080cc0(elementObj, (short)(idA + j * 4), color);
            }
            func_02080cc0(elementObj, idB, color);

            v = -1;
            prof = (struct Profile*)func_02053c6c((unsigned char*)member);
            ((unsigned char*)self + i)[0x468] = (unsigned char)(prof->unk49c + 1);
            nm = (char*)member->baseStats_;
            func_02080f8c((struct Container02080f8c*)elementObj, idA, (int)nm);
            if (prof->unk950 != 0) {
                v = (short)(prof->unk950 + 0x11);
            }
            func_02080fe0(elementObj, (short)(idA + 4), v);
            func_02080fa8(
                (struct Container02080fa8*)elementObj, (short)(idA + 8),
                *(unsigned short*)((char*)prof + prof->unk950 * 2 + 0x16c));

            {
                struct Profile* p3 = *(struct Profile**)((char*)member + 0x150);
                unsigned char* row = (unsigned char*)p3 + p3->unk950;
                unsigned char kind = row[0x186];
                func_0208103c(elementObj, idC, (short)(kind + 0x64));
                if (kind != 0) {
                    color = 5;
                    if (kind == 0xa) {
                        color = 0xd;
                    }
                    func_02080cc0(elementObj, idC, color);
                    func_02080b40(elementObj, idC);
                    key = i + 0x59;
                    func_02080828(elementObj, (short)key, &t16, &t14);
                    func_020808c8(elementObj, key, &t12, &t10);
                    func_02080854(elementObj, idC, (short)(t16 + t12 + 1), t14);
                    func_02080cc0(elementObj, idC, color);
                    func_02080b40(elementObj, idC);
                }
            }
        } else {
            if (idA == ((struct EntryList*)elementObj)->field36) {
                color = 0xa;
            }
            func_02080b40(elementObj, idA);
            nm = (char*)func_020e0434(&self->cont2dc, 0x7530);
            func_02080f8c((struct Container02080f8c*)elementObj, idA, (int)nm);
            func_02080cc0(elementObj, idA, color);
        }

        idA = (short)(idA + 1);
        idC = (short)(idC + 1);
        idB = (short)(idB + 1);
    }

    func_02081198((struct StatusOwner02081198*)elementObj, 0x13, 1);
    func_02081164((struct StatusOwner02081164*)elementObj, 0x13, 1);
    func_020813ec(elementObj, 0x13);
    func_ov003_02160678(self);
    func_ov003_02160794(self);
}
#endif
